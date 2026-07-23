/*
 * XREFs of sub_140A1D134 @ 0x140A1D134
 * Callers:
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 */

__int64 __fastcall sub_140A1D134(__int64 a1, GUID *a2)
{
  int v3; // ebx
  __int64 v4; // r8
  unsigned int v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  GUID v8; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v3 = sub_140812B74(a1, (unsigned int *)qword_14000F1A8, &v7);
  if ( v3 >= 0 )
  {
    v6 = 16;
    v3 = sub_140812D44(v7, 0x23000003u, v4, &v8, &v6);
    if ( v3 >= 0 )
      *a2 = v8;
  }
  if ( v7 )
    sub_140812D00(v7);
  return (unsigned int)v3;
}
