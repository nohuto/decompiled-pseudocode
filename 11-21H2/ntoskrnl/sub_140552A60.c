/*
 * XREFs of sub_140552A60 @ 0x140552A60
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_1403CFB04 @ 0x1403CFB04 (sub_1403CFB04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14055EBF8 @ 0x14055EBF8 (sub_14055EBF8.c)
 */

__int64 sub_140552A60()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // [rsp+20h] [rbp-40h] BYREF
  int v3; // [rsp+28h] [rbp-38h]
  _QWORD v4[3]; // [rsp+30h] [rbp-30h] BYREF
  int v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+4Ch] [rbp-14h]
  char v7; // [rsp+50h] [rbp-10h]
  __int16 v8; // [rsp+51h] [rbp-Fh]
  char v9; // [rsp+53h] [rbp-Dh]

  v2 = 0LL;
  v3 = 0;
  if ( byte_140D00A88 || !byte_140C0C6B9 )
    return 3221225659LL;
  result = sub_14055EBF8();
  if ( (int)result >= 0 )
  {
    result = sub_1403CFB04((__int64)&v2);
    if ( (int)result >= 0 )
    {
      if ( (_BYTE)v2 )
      {
        if ( qword_140C54E38 )
        {
          v5 = HIDWORD(v2);
          v6 = v3;
          v7 = BYTE1(v2);
          v4[1] = &sub_14055E720;
          v4[2] = sub_14055E560;
          v4[0] = 40LL;
          v8 = 0;
          v9 = 0;
          return sub_14042A5E0(v4, v1);
        }
        else
        {
          return 3221225473LL;
        }
      }
    }
  }
  return result;
}
