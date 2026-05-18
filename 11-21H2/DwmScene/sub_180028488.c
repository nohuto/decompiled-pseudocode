/*
 * XREFs of sub_180028488 @ 0x180028488
 * Callers:
 *     sub_180029300 @ 0x180029300 (sub_180029300.c)
 *     sub_18003D56C @ 0x18003D56C (sub_18003D56C.c)
 * Callees:
 *     sub_1800297CC @ 0x1800297CC (sub_1800297CC.c)
 */

__int64 __fastcall sub_180028488(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 248);
  if ( !((*(_QWORD *)(a1 + 256) - v1) >> 4) )
  {
    sub_1800297CC();
    JUMPOUT(0x1800284B4LL);
  }
  return *(_QWORD *)v1;
}
