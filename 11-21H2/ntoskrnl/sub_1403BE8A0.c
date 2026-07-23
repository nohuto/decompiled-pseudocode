/*
 * XREFs of sub_1403BE8A0 @ 0x1403BE8A0
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BE8A0()
{
  _QWORD v6[18]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v7; // [rsp+B0h] [rbp+37h]

  if ( !byte_140C4C689 && sub_1403B37B0() && (dword_140C4C460 & 0x20) == 0 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    v7 = __PAIR64__(_RBX, _RAX);
    if ( (_RDX & 0x400000) != 0 && (v7 & 0x100000000008LL) == 0x100000000008LL )
    {
      memset(v6, 0, sizeof(v6));
      v6[11] = 0LL;
      v6[12] = 0x4000000000LL;
      v6[1] = qword_140372BE0;
      v6[0] = 0x9000000001LL;
      v6[4] = qword_140372BC0;
      v6[5] = &qword_140372C00;
      v6[13] = 10000000LL;
      LODWORD(v6[17]) = 8;
      HIDWORD(v6[14]) = 163872;
      sub_1403BE0BC((__int64)v6, 0LL);
    }
  }
  return 0LL;
}
