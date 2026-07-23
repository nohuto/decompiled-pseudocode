/*
 * XREFs of sub_1403B2580 @ 0x1403B2580
 * Callers:
 *     sub_1403DAA00 @ 0x1403DAA00 (sub_1403DAA00.c)
 * Callees:
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 */

__int64 __fastcall sub_1403B2580(__int64 a1, int a2, int a3, _QWORD *a4, char a5, int a6)
{
  __int64 v6; // rbx
  int *v8; // r9
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v11 = 0;
  v10[0] = 0LL;
  if ( a5 && *(_BYTE *)(a1 + 437) )
  {
    v11 = 1;
    v8 = &v11;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (int)sub_1403B2614(*(_QWORD *)(a1 + 504), 0, a2, a3, 0, (__int64)v8, a6, (__int64)a4, v10) >= 0 )
    return v10[0];
  *a4 = 0LL;
  return v6;
}
