/*
 * XREFs of sub_14041F500 @ 0x14041F500
 * Callers:
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     sub_1402987C0 @ 0x1402987C0 (sub_1402987C0.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_14029B804 @ 0x14029B804 (sub_14029B804.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 * Callees:
 *     sub_14022E3B0 @ 0x14022E3B0 (sub_14022E3B0.c)
 */

__int64 __fastcall sub_14041F500(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = sub_14022E3B0(a1, a2, a3, a4, a5);
  if ( (_BYTE)result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
