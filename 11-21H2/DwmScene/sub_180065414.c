/*
 * XREFs of sub_180065414 @ 0x180065414
 * Callers:
 *     sub_180074808 @ 0x180074808 (sub_180074808.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180065414(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rcx
  char *v9; // rdx
  __int64 result; // rax
  char *v11; // rdx
  char *v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx

  *(_DWORD *)(a1 + 172) = a2;
  *(_DWORD *)(a1 + 176) = 0;
  v8 = (__int64 *)(a1 + 184);
  if ( v8 != (__int64 *)a4 )
  {
    v9 = (char *)a4;
    if ( *(_QWORD *)(a4 + 24) >= 0x10uLL )
      v9 = *(char **)a4;
    result = (__int64)sub_180012190(v8, v9, *(_QWORD *)(a4 + 16));
  }
  if ( a1 + 216 != a5 )
  {
    v11 = (char *)a5;
    if ( *(_QWORD *)(a5 + 24) >= 0x10uLL )
      v11 = *(char **)a5;
    result = (__int64)sub_180012190((__int64 *)(a1 + 216), v11, *(_QWORD *)(a5 + 16));
  }
  if ( a1 + 248 != a6 )
  {
    v12 = (char *)a6;
    if ( *(_QWORD *)(a6 + 24) >= 0x10uLL )
      v12 = *(char **)a6;
    result = (__int64)sub_180012190((__int64 *)(a1 + 248), v12, *(_QWORD *)(a6 + 16));
  }
  v13 = *(_QWORD *)(a4 + 24);
  if ( v13 >= 0x10 )
    result = sub_180010884(*(char **)a4, v13 + 1);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 15LL;
  *(_BYTE *)a4 = 0;
  v14 = *(_QWORD *)(a5 + 24);
  if ( v14 >= 0x10 )
    result = sub_180010884(*(char **)a5, v14 + 1);
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 15LL;
  *(_BYTE *)a5 = 0;
  v15 = *(_QWORD *)(a6 + 24);
  if ( v15 >= 0x10 )
    result = sub_180010884(*(char **)a6, v15 + 1);
  *(_QWORD *)(a6 + 16) = 0LL;
  *(_QWORD *)(a6 + 24) = 15LL;
  *(_BYTE *)a6 = 0;
  return result;
}
