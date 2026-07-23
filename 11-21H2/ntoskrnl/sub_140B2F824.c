/*
 * XREFs of sub_140B2F824 @ 0x140B2F824
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

__int64 sub_140B2F824()
{
  _QWORD v1[16]; // [rsp+20h] [rbp-29h] BYREF

  memset(v1, 0, 0x78uLL);
  v1[6] = 0LL;
  v1[7] = 0LL;
  BYTE3(v1[0]) |= 1u;
  LOWORD(v1[0]) = 120;
  v1[3] = 0xF003F000F003FLL;
  v1[1] = 0x2001900000030LL;
  BYTE2(v1[0]) = BYTE2(v1[0]) & 0xE2 | 0xD;
  v1[8] = sub_140718E30;
  v1[9] = sub_1407C2680;
  v1[10] = sub_1407349A0;
  v1[11] = sub_140721010;
  v1[12] = sub_1407C05A0;
  v1[2] = 0x2003900020006LL;
  LODWORD(v1[5]) = 112;
  HIDWORD(v1[4]) = 1;
  HIDWORD(v1[0]) = 256;
  return ObCreateObjectType((const UNICODE_STRING *)&qword_140B57CB0, (__int64)v1, 0LL, (__int64)&CmKeyObjectType);
}
