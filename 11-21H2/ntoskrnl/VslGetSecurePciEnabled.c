/*
 * XREFs of VslGetSecurePciEnabled @ 0x1403DF160
 * Callers:
 *     sub_140546B70 @ 0x140546B70 (sub_140546B70.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

bool VslGetSecurePciEnabled()
{
  bool result; // al
  _DWORD v1[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  result = 0;
  if ( sub_140294D28(0LL) )
  {
    v1[4] = 1;
    if ( (int)sub_140358A20(2u, 263, 0, (__int64)v1) >= 0 && (v1[4] & 1) != 0 )
      return 1;
  }
  return result;
}
