/*
 * XREFs of sub_1405512A0 @ 0x1405512A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140398ECC @ 0x140398ECC (sub_140398ECC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405512A0(__int64 a1)
{
  __int64 result; // rax
  char v2; // cl
  _OWORD v3[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v4; // [rsp+48h] [rbp-20h]

  memset(v3, 0, sizeof(v3));
  v4 = 0LL;
  if ( byte_140C54D49 && !byte_140C54D38 )
    return sub_140398ECC(0LL, 1);
  result = qword_140C54D28;
  if ( qword_140C54D28 )
  {
    LOBYTE(a1) = 1;
    result = sub_14042A5E0(a1, v3);
    if ( (int)result >= 0 )
    {
      result = sub_140398ECC((__int64)v3, 1);
      v2 = byte_140C54D49;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_140C54D30 = 0LL;
      byte_140C54D49 = v2;
    }
  }
  return result;
}
