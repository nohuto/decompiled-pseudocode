/*
 * XREFs of sub_180021990 @ 0x180021990
 * Callers:
 *     sub_180021A28 @ 0x180021A28 (sub_180021A28.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021914 @ 0x180021914 (sub_180021914.c)
 *     sub_180021E5C @ 0x180021E5C (sub_180021E5C.c)
 */

__int64 *__fastcall sub_180021990(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  GUID v5; // [rsp+30h] [rbp-38h] BYREF
  GUID pguid; // [rsp+40h] [rbp-28h] BYREF

  v2 = sub_180021E5C();
  *(_QWORD *)&pguid.Data1 = v2;
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 152) = 64LL;
    pguid = 0LL;
    CoCreateGuid(&pguid);
    v5 = pguid;
    sub_180021914(v3, (__int128 *)&v5);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
