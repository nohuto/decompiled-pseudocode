/*
 * XREFs of sub_1409C8AC4 @ 0x1409C8AC4
 * Callers:
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 * Callees:
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409C8AC4(unsigned int a1, char a2)
{
  __int64 v3; // rdi
  unsigned __int32 v4; // edx
  unsigned __int8 *v5; // r8
  __int64 v6; // rcx
  _OWORD Src[66]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = a1;
  memset(Src, 0, 0x418uLL);
  if ( !byte_140D04990 || a2 || (unsigned int)dword_140D0153C >= 0x32 )
  {
    byte_140D04990 = 1;
    v4 = _InterlockedExchange(&dword_140D0153C, 0);
    v5 = (unsigned __int8 *)Group;
    *(_QWORD *)&Src[0] = 0x20900000001LL;
    *(_QWORD *)&Src[1] = 0x200080066LL;
    if ( a2 )
    {
      DWORD1(Src[1]) = 18;
LABEL_7:
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4 * v5[1] + 8;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 3] = v5;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 1;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 32;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 3] = &qword_140001B08;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 10;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = v3;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 3;
      v6 = (unsigned __int8)byte_140C5B0D8;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 1;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = v6;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 3;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = v4;
      ++DWORD2(Src[0]);
      sub_1403CD84C(Src);
      return 0LL;
    }
    if ( v4 )
      goto LABEL_7;
  }
  return 0LL;
}
