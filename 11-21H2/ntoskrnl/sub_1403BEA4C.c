/*
 * XREFs of sub_1403BEA4C @ 0x1403BEA4C
 * Callers:
 *     sub_1403BCA0C @ 0x1403BCA0C (sub_1403BCA0C.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403BEA4C(__int64 a1)
{
  __int64 v1; // rdx
  int MaximumProcessorCount; // eax
  _QWORD v4[18]; // [rsp+30h] [rbp-39h] BYREF
  char v5; // [rsp+D0h] [rbp+67h] BYREF

  v5 = 0;
  if ( (int)sub_1403B38C8(a1, (__int64)sub_140521D90, 3, 8LL, &qword_140CF87D0) >= 0 )
  {
    memset(v4, 0, sizeof(v4));
    v4[0] = 0x9000000001LL;
    v4[1] = PsGetHostSilo;
    v4[2] = sub_14039B0E0;
    HIDWORD(v4[12]) = 64;
    LODWORD(v4[17]) = 8;
    HIDWORD(v4[14]) = 2;
    v4[13] = 10000000LL;
    sub_1403BE0BC((__int64)v4, 0LL);
  }
  if ( (int)sub_1403B36F4(3, v1, &v5) >= 0 && v5 )
  {
    memset(v4, 0, sizeof(v4));
    v4[11] = 0LL;
    v4[0] = 0x9000000001LL;
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    HIDWORD(v4[12]) = 64;
    v4[13] = 10000000LL;
    LODWORD(v4[17]) = 8;
    HIDWORD(v4[14]) = 34913;
    v4[1] = sub_14039E230;
    v4[2] = sub_14039B0E0;
    v4[9] = qword_140521DD0;
    v4[4] = sub_14039B050;
    v4[3] = sub_14039E270;
    LODWORD(v4[12]) = 24 * MaximumProcessorCount;
    v4[5] = qword_1403A02A0;
    sub_1403BE0BC((__int64)v4, 0LL);
  }
  return 0LL;
}
