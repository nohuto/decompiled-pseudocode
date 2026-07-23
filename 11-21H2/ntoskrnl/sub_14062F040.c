/*
 * XREFs of sub_14062F040 @ 0x14062F040
 * Callers:
 *     <none>
 * Callees:
 *     sub_140257E80 @ 0x140257E80 (sub_140257E80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062EED8 @ 0x14062EED8 (sub_14062EED8.c)
 *     sub_14062F0B8 @ 0x14062F0B8 (sub_14062F0B8.c)
 *     sub_14062F5B0 @ 0x14062F5B0 (sub_14062F5B0.c)
 */

__int64 sub_14062F040()
{
  __int64 result; // rax
  _OWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  result = sub_140257E80(v1);
  if ( (DWORD1(xmmword_140D06900) & 0x80000) != 0 )
  {
    sub_14062EED8(0LL, (__int64)v1);
    result = sub_14062F0B8();
  }
  if ( (DWORD1(xmmword_140D06900) & 0x800000) != 0 )
    return sub_14062F5B0(*(_QWORD *)&v1[0]);
  return result;
}
