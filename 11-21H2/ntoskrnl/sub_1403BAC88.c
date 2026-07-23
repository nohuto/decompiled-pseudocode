/*
 * XREFs of sub_1403BAC88 @ 0x1403BAC88
 * Callers:
 *     sub_1403BAB70 @ 0x1403BAB70 (sub_1403BAB70.c)
 * Callees:
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool sub_1403BAC88()
{
  _BYTE v11[24]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0;
  if ( !sub_1403AAE80(0LL, 0LL, 0LL, v11) )
    return 0;
  if ( v11[0] != 2 )
    return 0;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return 0;
  _RAX = 7LL;
  __asm { cpuid }
  return (_RBX & 2) != 0;
}
