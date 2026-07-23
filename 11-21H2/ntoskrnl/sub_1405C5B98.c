/*
 * XREFs of sub_1405C5B98 @ 0x1405C5B98
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405C5B98(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 i; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  __int64 v18; // r8

  *a1 = 0LL;
  v2 = qword_140C56900;
  if ( qword_140C56900 )
  {
    while ( 1 )
    {
      v3 = v2 + 16;
      v4 = sub_1402828F0(64, 8 * v3, 0x61426D4Du);
      v5 = v4;
      if ( !v4 )
        return 3221225626LL;
      v6 = v4;
      v7 = ExAcquireSpinLockExclusive(&dword_140C56920);
      if ( qword_140C56900 < v3 )
      {
        if ( qword_140C56900 )
          break;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v11;
            if ( v12 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      ExFreePoolWithTag(v5, 0);
      v2 = qword_140C56900;
      if ( !qword_140C56900 )
        return 0LL;
    }
    *v5 = qword_140C56900;
    for ( i = qword_140C56910; i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x220000000000LL) & 0xFFFFFFFFFFLL )
      *++v6 = i;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v18 = *((_QWORD *)v16 + 4375);
          v12 = (v17 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v17;
          if ( v12 )
            sub_140418E4C((__int64)v16);
        }
      }
    }
    __writecr8(v7);
    *a1 = v5;
  }
  return 0LL;
}
