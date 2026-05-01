/*
 * XREFs of sub_18000E2D0 @ 0x18000E2D0
 * Callers:
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 *     sub_180011890 @ 0x180011890 (sub_180011890.c)
 * Callees:
 *     sub_18000E264 @ 0x18000E264 (sub_18000E264.c)
 */

signed int __fastcall sub_18000E2D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int result; // eax
  __int64 v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  result = sub_18000E264(0LL, 0, 0LL, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
