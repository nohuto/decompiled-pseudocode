/*
 * XREFs of sub_1800B3070 @ 0x1800B3070
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x1800B2BEC (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B3070(_QWORD *a1)
{
  __int64 v2; // rcx
  bool i; // zf
  __int64 v4; // rax
  _QWORD *v5; // rdi
  char *v6; // rsi
  char *v7; // rcx
  _QWORD *j; // rdi
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002C84C((__int64)a1);
  v2 = a1[5];
  for ( i = v2 == 0; !i; i = v4 == 0 )
  {
    v4 = v2 - 1;
    v2 = v4;
    a1[5] = v4;
    if ( !v4 )
    {
      a1[4] = 0LL;
      break;
    }
    ++a1[4];
  }
  v5 = (_QWORD *)a1[6];
  v6 = (char *)v5[1];
  while ( !v6[25] )
  {
    sub_1800299BC((__int64)(a1 + 6), (__int64)(a1 + 6), *((char **)v6 + 2));
    v7 = v6;
    v6 = *(char **)v6;
    sub_180010884(v7, 0x28uLL);
  }
  v5[1] = v5;
  *v5 = v5;
  v5[2] = v5;
  a1[7] = 0LL;
  for ( j = a1 + 8; j != a1 + 18; j += 2 )
  {
    v10[0] = *j;
    *j = 0LL;
    v10[1] = j[1];
    j[1] = 0LL;
    sub_180010910((__int64)v10);
  }
  if ( a1 + 18 <= a1 + 23 )
    memset(a1 + 18, 0, 8LL * (a1 + 23 >= a1 + 18 ? 5 : 0));
  return j_LanguageEnumProc((__int64)a1);
}
