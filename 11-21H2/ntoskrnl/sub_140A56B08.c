/*
 * XREFs of sub_140A56B08 @ 0x140A56B08
 * Callers:
 *     sub_1403BF914 @ 0x1403BF914 (sub_1403BF914.c)
 *     sub_14054B568 @ 0x14054B568 (sub_14054B568.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 *     sub_1409DFC30 @ 0x1409DFC30 (sub_1409DFC30.c)
 *     sub_1409DFF60 @ 0x1409DFF60 (sub_1409DFF60.c)
 *     sub_1409E1200 @ 0x1409E1200 (sub_1409E1200.c)
 *     sub_1409E1514 @ 0x1409E1514 (sub_1409E1514.c)
 *     sub_1409E1B94 @ 0x1409E1B94 (sub_1409E1B94.c)
 *     sub_140A560D0 @ 0x140A560D0 (sub_140A560D0.c)
 *     sub_140A56A48 @ 0x140A56A48 (sub_140A56A48.c)
 *     sub_140AFB154 @ 0x140AFB154 (sub_140AFB154.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strncmp @ 0x1403E0910 (strncmp.c)
 */

__int64 sub_140A56B08()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[16]; // [rsp+20h] [rbp-20h] BYREF

  _RAX = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  __asm { cpuid }
  *((_BYTE *)CurrentPrcb + 35216) = 0;
  *(_QWORD *)&Str1[4] = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&Str1[12] = _RCX;
  *((_QWORD *)CurrentPrcb + 4402) = __PAIR64__(_RDX, _RBX);
  *((_DWORD *)CurrentPrcb + 8806) = *(_DWORD *)&Str1[12];
  *((_BYTE *)CurrentPrcb + 35228) = 0;
  if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( !strncmp(&Str1[4], "CentaurHauls", 0xCuLL) )
    return 3LL;
  if ( !strncmp(&Str1[4], "HygonGenuine", 0xCuLL) )
    return 1LL;
  if ( strncmp(&Str1[4], "  Shanghai  ", 0xCuLL) )
    return 0LL;
  return 3LL;
}
