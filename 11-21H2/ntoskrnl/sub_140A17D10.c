/*
 * XREFs of sub_140A17D10 @ 0x140A17D10
 * Callers:
 *     sub_140A14210 @ 0x140A14210 (sub_140A14210.c)
 *     sub_140A17ABC @ 0x140A17ABC (sub_140A17ABC.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 *     sub_140A15D60 @ 0x140A15D60 (sub_140A15D60.c)
 */

__int64 __fastcall sub_140A17D10(_WORD *a1, __int64 a2, _WORD *a3, __int16 a4, __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  _WORD *i; // rax
  int v12; // ebx
  _WORD v14[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset(v14, 0, sizeof(v14));
  *a1 = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = &unk_140C09262; *(i - 1) != a4 || *i != v9; i += 8 )
  {
    if ( (unsigned __int64)++v10 >= 8 )
      return (unsigned int)-1073741637;
  }
  v12 = sub_140A15D60(v14, 64LL, (__int64)(&off_140C09268)[2 * v10]);
  if ( v12 < 0 )
    goto LABEL_11;
  if ( a3 && *a3 )
  {
    v12 = sub_140A15B1C(v14, a3, a1, a2);
    if ( v12 < 0 )
      goto LABEL_11;
    return 0;
  }
  v12 = sub_1402E0200(a1, a2, (__int64)v14);
  if ( v12 >= 0 )
    return 0;
LABEL_11:
  sub_1406E0C3C(1LL, (__int64)"AslEnvGetSystem32DirPathBuf");
  return (unsigned int)v12;
}
