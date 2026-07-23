/*
 * XREFs of sub_14028494C @ 0x14028494C
 * Callers:
 *     sub_14023F590 @ 0x14023F590 (sub_14023F590.c)
 *     sub_140246FD0 @ 0x140246FD0 (sub_140246FD0.c)
 *     MmDisableModifiedWriteOfSection @ 0x140248110 (MmDisableModifiedWriteOfSection.c)
 *     sub_1402518B0 @ 0x1402518B0 (sub_1402518B0.c)
 *     sub_1402535D8 @ 0x1402535D8 (sub_1402535D8.c)
 *     MmIsFileSectionActive @ 0x140258E40 (MmIsFileSectionActive.c)
 *     sub_140283E8C @ 0x140283E8C (sub_140283E8C.c)
 *     sub_140284860 @ 0x140284860 (sub_140284860.c)
 *     sub_14029E64C @ 0x14029E64C (sub_14029E64C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14028494C(_QWORD *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  __int64 v19; // r8

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4F100);
    v7 = v6;
    *a3 = v6;
    v8 = a2 ? *a1 : a1[2];
    if ( !v8 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      return v8;
    }
    v10 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v19 = *((_QWORD *)v17 + 4375);
        v15 = (v18 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v18;
        if ( v15 )
          sub_140418E4C(v17);
      }
    }
  }
  __writecr8(v7);
  return 0LL;
}
