/*
 * XREFs of sub_14038EE6C @ 0x14038EE6C
 * Callers:
 *     sub_14038ECAC @ 0x14038ECAC (sub_14038ECAC.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

unsigned __int8 __fastcall sub_14038EE6C(PSLIST_ENTRY ListEntry)
{
  char v2; // al
  unsigned int v3; // edi
  unsigned __int8 result; // al

  sub_140326870((ULONG_PTR)ListEntry, 1);
  v2 = BYTE3(ListEntry[2].Next);
  if ( (v2 & 8) != 0 )
  {
    result = v2 & 0xF7;
    BYTE3(ListEntry[2].Next) = result;
  }
  else
  {
    v3 = -1431655765 * ((__int64)&ListEntry[0x22000000000LL] >> 4) - qword_140C52CE0;
    if ( _bittest((const signed __int32 *)stru_140C52D08.Buffer, v3) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
      _bittestandreset((signed __int32 *)stru_140C52D08.Buffer, v3);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
    }
    return (unsigned __int8)ExpInterlockedPushEntrySList(&stru_140C52CF0, ListEntry);
  }
  return result;
}
