/*
 * XREFs of sub_1409F6464 @ 0x1409F6464
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 *     sub_1409F7A54 @ 0x1409F7A54 (sub_1409F7A54.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F6464(int a1, unsigned __int64 a2, int a3)
{
  PVOID PoolWithQuotaTag; // rsi
  int v6; // ebx
  unsigned int v7; // ebx
  int DeviceData; // eax
  unsigned int v9; // ecx
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T Length[2]; // [rsp+60h] [rbp-28h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF
  PVOID v15; // [rsp+A8h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  *(_OWORD *)Length = 0LL;
  P = 0LL;
  v15 = 0LL;
  PoolWithQuotaTag = 0LL;
  if ( !a2 || a3 != 48 )
    return 3221225476LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 + 48 > 0x7FFFFFFF0000LL || a2 + 48 < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v11 = *(_OWORD *)a2;
  v12 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)Length = *(_OWORD *)(a2 + 32);
  v6 = sub_1409F7A54(&P, &v11);
  if ( v6 >= 0 )
  {
    if ( a1 != 136 || (v6 = sub_1409F7A54(&v15, &v12), v6 >= 0) )
    {
      if ( HIDWORD(Length[0]) )
      {
        if ( !Length[1] )
        {
          v6 = -1073741811;
          goto LABEL_21;
        }
        v7 = HIDWORD(Length[0]);
        ProbeForWrite((volatile void *)Length[1], HIDWORD(Length[0]), 2u);
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x4E494444u);
        if ( !PoolWithQuotaTag )
        {
          v6 = -1073741801;
          goto LABEL_21;
        }
      }
      if ( a1 == 136 )
        DeviceData = KseQueryDeviceData((PCWSTR)P, (__int64)v15, Length, (_DWORD *)Length + 1, PoolWithQuotaTag);
      else
        DeviceData = KseQueryDeviceDataList(
                       (WCHAR *)P,
                       (__int64)PoolWithQuotaTag,
                       HIDWORD(Length[0]),
                       (__int64)Length + 4);
      v6 = DeviceData;
      v9 = HIDWORD(Length[0]);
      *(_QWORD *)(a2 + 32) = Length[0];
      if ( DeviceData >= 0 )
        memmove((void *)Length[1], PoolWithQuotaTag, v9);
    }
  }
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0x50535845u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x50535845u);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0x4E494444u);
  return (unsigned int)v6;
}
