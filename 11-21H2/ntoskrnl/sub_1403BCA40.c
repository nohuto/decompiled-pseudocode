/*
 * XREFs of sub_1403BCA40 @ 0x1403BCA40
 * Callers:
 *     sub_1403BCA0C @ 0x1403BCA0C (sub_1403BCA0C.c)
 * Callees:
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 *     sub_1403BCAD0 @ 0x1403BCAD0 (sub_1403BCAD0.c)
 *     sub_1403BCBD0 @ 0x1403BCBD0 (sub_1403BCBD0.c)
 *     sub_1403BCC5C @ 0x1403BCC5C (sub_1403BCC5C.c)
 *     sub_1403BCDA0 @ 0x1403BCDA0 (sub_1403BCDA0.c)
 *     sub_1403BCF1C @ 0x1403BCF1C (sub_1403BCF1C.c)
 *     sub_1403BD8C8 @ 0x1403BD8C8 (sub_1403BD8C8.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE8A0 @ 0x1403BE8A0 (sub_1403BE8A0.c)
 *     sub_1403BE8FC @ 0x1403BE8FC (sub_1403BE8FC.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403BCA40(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _QWORD v3[18]; // [rsp+20h] [rbp-39h] BYREF
  char v4; // [rsp+C0h] [rbp+67h] BYREF

  if ( !a1 )
    return sub_1403BCF1C();
  if ( a1 != 1 )
    return 0LL;
  result = sub_1403BCAD0();
  if ( (int)result >= 0 )
  {
    result = sub_1403BCC5C();
    if ( (int)result >= 0 )
    {
      result = sub_1403BD8C8();
      if ( (int)result >= 0 )
      {
        result = sub_1403BCDA0();
        if ( (int)result >= 0 )
        {
          result = sub_1403BCBD0();
          if ( (int)result >= 0 )
          {
            v4 = 1;
            if ( (int)sub_1403B36F4(2, v2, &v4) >= 0 && v4 )
            {
              memset(v3, 0, sizeof(v3));
              LODWORD(v3[15]) = 0;
              LODWORD(v3[16]) = 0;
              v3[1] = PsGetHostSilo;
              v3[0] = 0x9000000001LL;
              v3[4] = sub_140522A40;
              v3[3] = _misaligned_access;
              v3[5] = _misaligned_access;
              HIDWORD(v3[12]) = 16;
              v3[13] = 1193182LL;
              LODWORD(v3[17]) = 4;
              HIDWORD(v3[14]) = 320;
              sub_1403BE0BC(v3, 0LL);
            }
            result = sub_1403BE8FC();
            if ( (int)result >= 0 )
              return sub_1403BE8A0();
          }
        }
      }
    }
  }
  return result;
}
