/*
 * XREFs of sub_1405BEF18 @ 0x1405BEF18
 * Callers:
 *     sub_140982240 @ 0x140982240 (sub_140982240.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405BEF18(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  volatile LONG *v4; // rbp
  unsigned __int64 v9; // rbx
  int v10; // edi
  _QWORD *v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf

  v4 = (volatile LONG *)(a1 + 1344);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  if ( a3 )
  {
    v10 = a2 & 2;
    v11 = (_QWORD *)(a4 + 24);
    v12 = a3;
    do
    {
      v13 = (_QWORD *)(a1 + (-(__int64)(*((_DWORD *)v11 - 6) != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 2312);
      if ( v10 )
      {
        v13[3] = *v11;
      }
      else
      {
        *v11 = v13[3];
        v11[1] = v13[1];
        *(v11 - 1) = v13[2];
        *(v11 - 2) = *v13;
      }
      v11 += 5;
      --v12;
    }
    while ( v12 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return 0LL;
}
