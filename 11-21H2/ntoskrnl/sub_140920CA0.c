/*
 * XREFs of sub_140920CA0 @ 0x140920CA0
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069EDC0 @ 0x14069EDC0 (sub_14069EDC0.c)
 *     sub_14069EE0C @ 0x14069EE0C (sub_14069EE0C.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 */

__int64 __fastcall sub_140920CA0(__int64 a1, __int64 a2, int *a3)
{
  int v5; // ebx
  __int16 v7[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v7, 0, 0x4AuLL);
  sub_14069F2B4((char *)v7);
  v5 = sub_14069EDC0((__int64)v7, a1, 0LL);
  if ( v5 >= 0 )
  {
    v5 = sub_14069EE0C(v7, a3);
    if ( v5 >= 0 )
      v5 = 0;
  }
  sub_14069F150((__int64)v7);
  return (unsigned int)v5;
}
