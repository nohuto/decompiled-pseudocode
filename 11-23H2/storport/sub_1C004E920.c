/*
 * XREFs of sub_1C004E920 @ 0x1C004E920
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C004AB78 @ 0x1C004AB78 (sub_1C004AB78.c)
 *     sub_1C004C390 @ 0x1C004C390 (sub_1C004C390.c)
 *     sub_1C004E9A0 @ 0x1C004E9A0 (sub_1C004E9A0.c)
 */

__int64 __fastcall sub_1C004E920(_DWORD *Context, __int64 a2, __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
  {
    v5 = Context[14];
    sub_1C004AB78((__int64)Context, &stru_1C0089690, a3, **((_QWORD **)Context + 612), v5);
  }
  *(_DWORD *)(*((_QWORD *)Context + 612) + 20LL) &= ~2u;
  if ( (unsigned int)sub_1C0007798((__int64)Context, 7) )
    sub_1C004C390((__int64)Context);
  return sub_1C004E9A0(Context);
}
