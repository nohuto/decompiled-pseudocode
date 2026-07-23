/*
 * XREFs of RtlpFindRegTziForCurrentYear @ 0x140399F7C
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14083F618 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083FC80 (RtlpUpdateDynamicTimeZones.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _itow_s @ 0x1403DE980 (_itow_s.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7A90 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall RtlpFindRegTziForCurrentYear(_OWORD *a1, const WCHAR *a2, __int16 a3)
{
  int v3; // esi
  NTSTATUS RegistryValues; // ebx
  __int16 v7; // ax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t DstBuf[8]; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_DWORD *)a1 + 10) = 0;
  RegistryValues = -1073741811;
  if ( !itow_s(a3, DstBuf, 5uLL, 10) )
  {
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].Name = L"FirstEntry";
    QueryTable[0].Flags = 292;
    QueryTable[0].DefaultType = 0x4000000;
    QueryTable[0].EntryContext = &v10;
    QueryTable[1].DefaultType = 0x4000000;
    QueryTable[1].Name = L"LastEntry";
    v10 = -4;
    QueryTable[1].EntryContext = &v9;
    QueryTable[1].Flags = 292;
    QueryTable[2].Name = DstBuf;
    v9 = -4;
    QueryTable[2].Flags = 288;
    QueryTable[2].EntryContext = a1;
    QueryTable[2].DefaultType = 50331648;
    *(_DWORD *)a1 = -44;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, a2, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( v9 == -4 )
        return (unsigned int)-1073741762;
      v7 = v10;
      if ( v10 == -4 )
        return (unsigned int)-1073741762;
      if ( v3 > v9 || v3 < v10 )
      {
        if ( v3 > v9 )
          v7 = v9;
        if ( !itow_s(v7, DstBuf, 5uLL, 10) )
        {
          QueryTable[2].Flags = 292;
          QueryTable[2].DefaultType = 50331648;
          *(_DWORD *)a1 = -44;
          return (unsigned int)RtlQueryRegistryValuesEx(0x40000000u, a2, &QueryTable[2], 0LL, 0LL);
        }
        return (unsigned int)-1073741762;
      }
    }
  }
  return (unsigned int)RegistryValues;
}
