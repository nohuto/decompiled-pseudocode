/*
 * XREFs of sub_140A29BBC @ 0x140A29BBC
 * Callers:
 *     sub_14083D8B0 @ 0x14083D8B0 (sub_14083D8B0.c)
 *     sub_140A28CA4 @ 0x140A28CA4 (sub_140A28CA4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A295FC @ 0x140A295FC (sub_140A295FC.c)
 */

__int64 __fastcall sub_140A29BBC(__int64 a1, const WCHAR *a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+24h] [rbp-24h] BYREF
  GUID Guid; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  v3 = 0;
  Guid = 0LL;
  result = sub_140A295FC(a2, &Guid, &v4, &v3);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
