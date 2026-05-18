/*
 * XREFs of sub_180086614 @ 0x180086614
 * Callers:
 *     sub_180086808 @ 0x180086808 (sub_180086808.c)
 * Callees:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180086318 @ 0x180086318 (sub_180086318.c)
 *     sub_180086850 @ 0x180086850 (sub_180086850.c)
 *     sub_180087E94 @ 0x180087E94 (sub_180087E94.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180086614(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v4; // rdx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 4);
  if ( v4 )
  {
    if ( v4 > 0x555555555555555LL )
      sub_180011B80();
    sub_180087E94();
    v6 = a1;
    a1[1] = sub_180086318(*a2, a2[1], *a1);
    v6 = 0LL;
    sub_180086850(&v6);
  }
  return a1;
}
