/*
 * XREFs of sub_14023E9A0 @ 0x14023E9A0
 * Callers:
 *     MmForceSectionClosed @ 0x14023E960 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x14058C7D0 (MmForceSectionClosedEx.c)
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 * Callees:
 *     sub_14023EA5C @ 0x14023EA5C (sub_14023EA5C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14023E9A0(__int64 *a1, char a2, char a3)
{
  int v4; // r15d
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  volatile LONG *v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  __int64 v20; // r8

  v4 = a2 & 1;
  while ( 1 )
  {
    v7 = ExAcquireSpinLockExclusive(&dword_140C4F100);
    if ( v4 )
      v8 = *a1;
    else
      v8 = a1[2];
    if ( !v8 )
    {
      v16 = &dword_140C4F100;
      goto LABEL_20;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  if ( (a3 & 1) == 0 || (*(_BYTE *)(v8 + 62) & 0xC) != 0 )
  {
    LOBYTE(v9) = v7;
    return 2 - (unsigned int)((unsigned __int8)sub_14023EA5C(v8, v9, a2 & 4) != 0);
  }
  v16 = (volatile LONG *)(v8 + 72);
LABEL_20:
  ExReleaseSpinLockExclusiveFromDpcLevel(v16);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v20 = *((_QWORD *)v18 + 4375);
        v15 = (v19 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v19;
        if ( v15 )
          sub_140418E4C(v18);
      }
    }
  }
  __writecr8(v7);
  return 0LL;
}
