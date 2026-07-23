/*
 * XREFs of sub_1403BE8FC @ 0x1403BE8FC
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE95C @ 0x1403BE95C (sub_1403BE95C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BE8FC()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  _QWORD v2[18]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v3; // [rsp+C0h] [rbp+37h] BYREF
  int v4; // [rsp+C8h] [rbp+3Fh] BYREF

  v3 = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  if ( (unsigned __int8)sub_1403BE95C(&v3, &v4) )
  {
    memset(v2, 0, sizeof(v2));
    v2[13] = 0LL;
    v2[11] = &v3;
    v2[0] = 0x9000000001LL;
    v2[1] = sub_140522FB0;
    v2[2] = qword_140523040;
    LODWORD(v2[17]) = 15;
    HIDWORD(v2[14]) = 1081347;
    v2[12] = 0x400000000CLL;
    RtlInitUnicodeString(
      &DestinationString,
      L"VEN_vvvv&DEV_dddd&SUBVEN_ssss&SUBDEV_yyyy&REV_rrrr&INST_iiii&UID_uuuuuuuu");
    sub_1403BE0BC((__int64)v2, &DestinationString);
    byte_140C4E4A8 = 1;
  }
  return 0LL;
}
