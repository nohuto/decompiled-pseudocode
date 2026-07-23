/*
 * XREFs of sub_1403D2888 @ 0x1403D2888
 * Callers:
 *     sub_140A5AAF0 @ 0x140A5AAF0 (sub_140A5AAF0.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 */

__int64 sub_1403D2888()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int v2; // eax
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v11[28]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = 0;
  v5 = 0;
  v4 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  result = (unsigned int)_InterlockedCompareExchange(&dword_140CF75C8, 1, 0);
  if ( !(_DWORD)result )
  {
    memset(v11, 0, sizeof(v11));
    v8 = -1;
    v11[2] = L"CMCThresholdCount";
    LODWORD(v11[4]) = 67108868;
    LODWORD(v11[11]) = 67108868;
    v11[3] = &v3;
    v1 = 100;
    LODWORD(v11[18]) = 67108868;
    v11[5] = &v6;
    v7 = 60;
    v11[9] = L"CMCThresholdSeconds";
    LODWORD(v11[6]) = 4;
    v11[10] = &v4;
    LODWORD(v11[13]) = 4;
    v11[12] = &v7;
    v11[16] = L"CMCPollingLimit";
    v11[17] = &v5;
    LODWORD(v11[20]) = 4;
    v11[19] = &v8;
    v6 = 100;
    LODWORD(v11[1]) = 304;
    LODWORD(v11[8]) = 304;
    LODWORD(v11[15]) = 304;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    MmGetSystemRoutineAddress(&DestinationString);
    if ( (int)sub_14042A5E0(2147483650LL, L"Session Manager") < 0 )
    {
      v5 = -1;
      v3 = 100;
      v4 = 60;
    }
    else
    {
      v1 = v3;
    }
    v2 = 2;
    if ( v1 > 2 )
      v2 = v1;
    dword_140C549A4 = v2;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    qword_140C54990 = PerformanceFrequency.QuadPart * v4;
    result = v5;
    dword_140C09784 = v5;
  }
  return result;
}
