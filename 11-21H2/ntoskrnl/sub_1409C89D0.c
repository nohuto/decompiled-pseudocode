/*
 * XREFs of sub_1409C89D0 @ 0x1409C89D0
 * Callers:
 *     sub_1403DA1F0 @ 0x1403DA1F0 (sub_1403DA1F0.c)
 * Callees:
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409C89D0(unsigned int *P)
{
  int v2; // eax
  _QWORD Src[132]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Src, 0, 0x418uLL);
  v2 = *((unsigned __int8 *)Group + 1);
  Src[0] = 0x120400000001LL;
  LODWORD(Src[2]) = 524390;
  Src[6] = Group;
  HIDWORD(Src[3]) = 4 * v2 + 8;
  LODWORD(Src[3]) = 4;
  Src[10] = &qword_140001B08;
  Src[12] = P[8];
  Src[7] = 0x2000000001LL;
  Src[11] = 0x40000001BLL;
  LODWORD(Src[1]) = 3;
  sub_1403CD84C(Src);
  if ( *((_BYTE *)P + 36) )
    ExFreePoolWithTag(P, 0);
}
