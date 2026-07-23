/*
 * XREFs of sub_1403BCC5C @ 0x1403BCC5C
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 * Callees:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BCC5C()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx
  _QWORD v4[18]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v5; // [rsp+C0h] [rbp+37h] BYREF

  v0 = sub_1403BE664(1346584902LL);
  if ( v0
    && (*(_BYTE *)(v0 + 8) < 5u || (*(_BYTE *)(v0 + 109) & 0x20) == 0)
    && (int)sub_1403B38C8(v1, 0LL, 1, 16LL, &qword_140CF87F0) >= 0
    && (int)sub_1403B38C8(v2, 0LL, 7, 16LL, &unk_140CF87E0) >= 0 )
  {
    v5 = 0LL;
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[16]) = 0;
    v4[11] = &v5;
    v4[0] = 0x9000000001LL;
    v4[1] = sub_140522F10;
    v4[3] = sub_140522D00;
    v4[4] = sub_140522D70;
    v4[10] = sub_140522E80;
    v4[5] = sub_140522F50;
    v4[13] = 2048LL;
    v4[12] = 0x4000000010LL;
    HIDWORD(v4[14]) = 2097456;
    LODWORD(v4[17]) = 2;
    LODWORD(v4[15]) = 8;
    sub_1403BE0BC(v4, 0LL);
  }
  return 0LL;
}
