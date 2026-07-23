/*
 * XREFs of sub_140586950 @ 0x140586950
 * Callers:
 *     sub_14057F560 @ 0x14057F560 (sub_14057F560.c)
 *     sub_1407DE98C @ 0x1407DE98C (sub_1407DE98C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140586950(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  volatile LONG *v4; // rbp
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  bool v16; // zf

  *a3 = 0LL;
  v4 = (volatile LONG *)(a1 + 22848);
  *a4 = 0LL;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 22848));
  if ( dword_140D05004 )
  {
    v10 = (__int64 *)(a1 + 22680);
    v11 = (unsigned int)dword_140D05004;
    do
    {
      *a3 += *(v10 - 4);
      v12 = *v10++;
      *a4 += v12;
      --v11;
    }
    while ( v11 );
  }
  *a2 = *(_QWORD *)(a1 + 22632);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v16 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= result;
        if ( v16 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
