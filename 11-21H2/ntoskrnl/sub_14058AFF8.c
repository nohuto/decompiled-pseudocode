/*
 * XREFs of sub_14058AFF8 @ 0x14058AFF8
 * Callers:
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 * Callees:
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14058AFF8(__int64 a1)
{
  volatile LONG *v2; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  v2 = (volatile LONG *)(a1 + 1344);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    v4 = *(_QWORD **)(a1 + 1776);
    v5 = v3;
    if ( v4 )
      *(_QWORD *)(a1 + 1776) = *v4;
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v10 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    if ( !v4 )
      break;
    sub_1402700FC(v4);
  }
}
