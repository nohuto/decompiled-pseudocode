/*
 * XREFs of sub_1800A1190 @ 0x1800A1190
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x1800A0D64 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18002988C @ 0x18002988C (sub_18002988C.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A1190(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *i; // rdi
  __int64 v4; // rcx

  sub_18002A570((__int64)a1);
  v2 = a1[5];
  if ( v2 )
  {
    while ( 1 )
    {
      a1[5] = --v2;
      if ( !v2 )
        break;
      ++a1[4];
    }
    a1[4] = 0LL;
  }
  sub_18002988C(a1 + 6);
  for ( i = a1 + 8; i != a1 + 18; i += 2 )
  {
    *i = 0LL;
    v4 = i[1];
    i[1] = 0LL;
    if ( v4 )
      sub_180010530(v4);
  }
  if ( a1 + 18 <= a1 + 23 )
    memset(a1 + 18, 0, 8LL * (a1 + 23 >= a1 + 18 ? 5 : 0));
  return sub_18002A62C((__int64)a1);
}
