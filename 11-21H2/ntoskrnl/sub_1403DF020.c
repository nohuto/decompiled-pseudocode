/*
 * XREFs of sub_1403DF020 @ 0x1403DF020
 * Callers:
 *     sub_1405711E4 @ 0x1405711E4 (sub_1405711E4.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403DF020()
{
  int v0; // ecx
  _DWORD v2[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  if ( sub_140294D28(0LL) && dword_140E01858 == v0 && (int)sub_140358A20(2u, 256, 0, (__int64)v2) >= 0 )
    dword_140E01858 = v2[4];
  return (unsigned int)dword_140E01858;
}
