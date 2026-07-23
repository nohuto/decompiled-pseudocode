/*
 * XREFs of sub_14099C9CC @ 0x14099C9CC
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140990E40 @ 0x140990E40 (sub_140990E40.c)
 *     sub_14099C7F4 @ 0x14099C7F4 (sub_14099C7F4.c)
 *     sub_14099C8F8 @ 0x14099C8F8 (sub_14099C8F8.c)
 */

__int64 sub_14099C9CC()
{
  __int64 v0; // rdi
  int v1; // ebx
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-20h] BYREF
  __int128 v8; // [rsp+48h] [rbp-18h] BYREF

  v5 = -1LL;
  v7 = 0LL;
  v0 = -1LL;
  v6 = -1LL;
  v8 = 0LL;
  v1 = sub_1408125C4(0LL, 2u, &v5);
  if ( v1 >= 0 )
  {
    v1 = sub_14099C7F4(v5, &v8);
    if ( v1 >= 0 )
    {
      v1 = sub_140812B74(v5, (unsigned int *)&v8, &v6);
      if ( v1 < 0 )
      {
        v0 = v6;
      }
      else
      {
        v2 = sub_14099C8F8();
        v0 = v6;
        v7 = v2;
        v1 = sub_140803250((void *)v6, 0x2500015Au, v3, (__int64)&v7, 8u);
      }
    }
  }
  sub_140990E40(v7 & 7, (v7 & 8) != 0, v1);
  if ( v0 != -1 )
    sub_140812D00(v0);
  if ( v5 != -1 )
    sub_1408124A0(v5);
  return (unsigned int)v1;
}
