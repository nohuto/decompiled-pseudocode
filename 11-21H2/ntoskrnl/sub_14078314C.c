/*
 * XREFs of sub_14078314C @ 0x14078314C
 * Callers:
 *     sub_140783428 @ 0x140783428 (sub_140783428.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140782F2C @ 0x140782F2C (sub_140782F2C.c)
 *     sub_140783204 @ 0x140783204 (sub_140783204.c)
 */

__int64 __fastcall sub_14078314C(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  v8 = *(_QWORD **)(v4 + 8);
  v12 = 0LL;
  v9 = *v8 - 0x69006D0057005CLL;
  if ( *v8 == 0x69006D0057005CLL )
    v9 = v8[1] - 0x64006900750047LL;
  if ( v9 )
    return 3221225485LL;
  result = sub_140783204((char *)v8 + 18, &v12);
  if ( (int)result >= 0 )
  {
    result = sub_140782F2C((__int128 *)a1, a3, &v12, &v11);
    if ( (int)result >= 0 )
    {
      *a4 = v11;
      return 0LL;
    }
  }
  return result;
}
