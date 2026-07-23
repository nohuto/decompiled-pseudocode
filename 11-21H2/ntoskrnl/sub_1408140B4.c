/*
 * XREFs of sub_1408140B4 @ 0x1408140B4
 * Callers:
 *     sub_140803438 @ 0x140803438 (sub_140803438.c)
 *     sub_1408074F4 @ 0x1408074F4 (sub_1408074F4.c)
 *     sub_140812698 @ 0x140812698 (sub_140812698.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

__int64 sub_1408140B4()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  SystemInformation = 0LL;
  v3 = 0LL;
  if ( byte_140CE1AD6 )
    return (unsigned int)dword_140C0B234;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C0B234 = v1;
  result = v1;
  byte_140CE1AD6 = 1;
  return result;
}
