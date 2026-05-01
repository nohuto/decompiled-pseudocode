/*
 * XREFs of sub_18000CF24 @ 0x18000CF24
 * Callers:
 *     sub_18000CCE0 @ 0x18000CCE0 (sub_18000CCE0.c)
 *     sub_18000CD10 @ 0x18000CD10 (sub_18000CD10.c)
 *     sub_18000D0B0 @ 0x18000D0B0 (sub_18000D0B0.c)
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 *     sub_180010EF0 @ 0x180010EF0 (sub_180010EF0.c)
 * Callees:
 *     sub_18000D5F8 @ 0x18000D5F8 (sub_18000D5F8.c)
 */

__int64 __fastcall sub_18000CF24(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000D5F8();
  return result;
}
