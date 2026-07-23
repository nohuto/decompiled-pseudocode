/*
 * XREFs of sub_1407DC6F4 @ 0x1407DC6F4
 * Callers:
 *     sub_1407DCCD8 @ 0x1407DCCD8 (sub_1407DCCD8.c)
 * Callees:
 *     sub_1406CCF28 @ 0x1406CCF28 (sub_1406CCF28.c)
 *     sub_1407DC794 @ 0x1407DC794 (sub_1407DC794.c)
 *     sub_1407DC958 @ 0x1407DC958 (sub_1407DC958.c)
 *     sub_1407DC9A8 @ 0x1407DC9A8 (sub_1407DC9A8.c)
 */

__int64 __fastcall sub_1407DC6F4(_DWORD *a1, __int64 a2)
{
  int v2; // edi
  int v4; // ebx
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int16 v7[12]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0;
  v2 = a2;
  *(_OWORD *)v7 = 0LL;
  v4 = 0;
  v5 = sub_1407DC9A8(a1, a2);
  if ( !v5 )
    return 3221225865LL;
  result = sub_1407DC958(v5, v5 + 112, v7);
  if ( (int)result >= 0 )
  {
    if ( (int)sub_1407DC794(v7, &v8) >= 0 )
      v4 = v8;
    if ( !v2 )
      goto LABEL_6;
    result = sub_1406CCF28(v7, &v9);
    if ( (int)result >= 0 )
    {
      v4 += v9;
LABEL_6:
      *a1 = v4;
      return 0LL;
    }
  }
  return result;
}
