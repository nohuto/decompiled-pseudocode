/*
 * XREFs of sub_1403CF8BC @ 0x1403CF8BC
 * Callers:
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403CF8BC(__int64 a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 result; // rax
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r10
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r8
  int v13; // eax

  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v2 = ExAcquireSpinLockExclusive(&dword_140C4F100);
  v3 = *(_QWORD **)(a1 + 40);
  if ( v3 && (*v3 || v3[2]) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v9 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v9 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = 3221225549LL;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v5 >= 2u )
        {
          v6 = KeGetCurrentPrcb();
          v7 = *((_QWORD *)v6 + 4375);
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C(v6);
        }
      }
    }
    result = 0LL;
  }
  __writecr8(v2);
  return result;
}
