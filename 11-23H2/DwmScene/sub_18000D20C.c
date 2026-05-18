/*
 * XREFs of sub_18000D20C @ 0x18000D20C
 * Callers:
 *     sub_18000F12C @ 0x18000F12C (sub_18000F12C.c)
 *     sub_18000F284 @ 0x18000F284 (sub_18000F284.c)
 * Callees:
 *     sub_18000EF98 @ 0x18000EF98 (sub_18000EF98.c)
 *     sub_18000FF54 @ 0x18000FF54 (sub_18000FF54.c)
 */

__int64 __fastcall sub_18000D20C(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi

  if ( a1 != a2 && a3 && *a3 && (v6 = sub_18000EF98(a3), v9 = v8 - a1, v10 = v6, v9 >= v6) )
  {
    sub_18000FF54(a1, v9, v7, v6);
    if ( a4 )
      *a4 = a1;
    return v10 + a1;
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
