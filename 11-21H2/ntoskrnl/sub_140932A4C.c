/*
 * XREFs of sub_140932A4C @ 0x140932A4C
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140932A4C()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  if ( !sub_140294D28(0LL) )
    return 3224698910LL;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return 3221226324LL;
  return sub_140358A20(2u, 53, 0, (__int64)v2);
}
