/*
 * XREFs of MiRepurposeDecayNode @ 0x1406618E4
 * Callers:
 *     MiLockStandbyOldestPage @ 0x140650D8C (MiLockStandbyOldestPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 */

unsigned __int8 __fastcall MiRepurposeDecayNode(PSLIST_ENTRY ListEntry)
{
  char v2; // al
  unsigned __int8 result; // al
  unsigned __int64 v4; // rsi
  char v5; // di

  MiUnlinkPageFromListEx((ULONG_PTR)ListEntry, 1uLL);
  v2 = BYTE3(ListEntry[2].Next);
  if ( (v2 & 8) != 0 )
  {
    result = v2 & 0xF7;
    BYTE3(ListEntry[2].Next) = result;
  }
  else
  {
    v4 = (unsigned __int64)(-1431655765 * (unsigned int)((__int64)&ListEntry[0x22000000000LL] >> 4)
                          - (unsigned int)qword_140C68260) >> 3;
    v5 = -85 * ((__int64)&ListEntry[0x22000000000LL] >> 4) - qword_140C68260;
    if ( ((*((char *)stru_140C68288.Buffer + v4) >> (v5 & 7)) & 1) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68280);
      *((_BYTE *)stru_140C68288.Buffer + v4) &= ~(1 << (v5 & 7));
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68280);
    }
    return (unsigned __int8)RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
  }
  return result;
}
