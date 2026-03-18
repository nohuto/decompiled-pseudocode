/*
 * XREFs of IpmiLibAddSelBugcheckRecord @ 0x140652CAC
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406528CC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelRecord @ 0x140652E20 (IpmiLibAddSelRecord.c)
 */

__int64 __fastcall IpmiLibAddSelBugcheckRecord(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // di
  __int128 v7; // [rsp+20h] [rbp-10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF

  v8 = a2;
  LOWORD(v8) = 0;
  BYTE2(v8) = 0;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 3221225473LL;
  *(_QWORD *)&v7 = 0x20000LL;
  *(_QWORD *)((char *)&v7 + 7) = 0xFF016F0020040041uLL;
  HIBYTE(v7) = -1;
  result = IpmiLibAddSelRecord(v2, &v7, &v8);
  if ( (int)result >= 0 && !(_BYTE)v8 )
  {
    v5 = 0;
    v7 = 0LL;
    BYTE2(v7) = -34;
    *(_WORD *)((char *)&v7 + 7) = 311;
    BYTE9(v7) = 0;
    HIBYTE(v7) = 1;
    do
    {
      v6 = v5 + 1;
      BYTE10(v7) = v5 + 1;
      *(_DWORD *)((char *)&v7 + 11) = KiBugCheckData[v5];
      result = IpmiLibAddSelRecord(v4, &v7, &v8);
      if ( (int)result < 0 )
        break;
      if ( (_BYTE)v8 )
        break;
      if ( v5 )
      {
        *(_DWORD *)((char *)&v7 + 11) = HIDWORD(KiBugCheckData[v5]);
        result = IpmiLibAddSelRecord(v4, &v7, &v8);
        if ( (int)result < 0 || (_BYTE)v8 )
          break;
      }
      ++v5;
    }
    while ( v6 < 5u );
  }
  return result;
}
