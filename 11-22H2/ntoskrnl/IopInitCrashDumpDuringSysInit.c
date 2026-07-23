/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140B726E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     SecureDump_Init @ 0x1403B0658 (SecureDump_Init.c)
 *     IopInitializeOfflineCrashDump @ 0x1403B06AC (IopInitializeOfflineCrashDump.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     __report_rangecheckfailure @ 0x1404FE1FC (__report_rangecheckfailure.c)
 *     IoConfigureCrashDump @ 0x14054FA04 (IoConfigureCrashDump.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7B10 (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x1408360EC (IoInitializeCrashDump.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140943E4C (IopDumpTraceForceDumpDisabled.c)
 *     MmInitializeMemoryLimits @ 0x140B44B8C (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(_QWORD *Context, char a2)
{
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  char v8; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v9[3]; // [rsp+40h] [rbp-C8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v11[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v12; // [rsp+E6h] [rbp-22h]
  char v13; // [rsp+E8h] [rbp-20h]
  char v14; // [rsp+EDh] [rbp-1Bh]

  v8 = 0;
  if ( !ForceDumpDisabled && (int)SecureDump_Init((__int64)Context, a2) < 0 && !SecureDmpCertProvisionFailedDuringBoot )
  {
    ForceDumpDisabled = 1;
    IopDumpTraceForceDumpDisabled();
  }
  if ( Context && !SpecialMemoryRanges )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      if ( v5 >= 0x2C )
        _report_rangecheckfailure();
      v11[v5] = 0;
      ++v4;
      ++v5;
    }
    while ( v4 < 0x2C );
    v12 = 257;
    v11[6] = 1;
    v13 = 1;
    v14 = 1;
    SpecialMemoryRanges = (__int64)MmInitializeMemoryLimits((__int64)Context, (__int64)v11);
  }
  if ( !a2 )
  {
    if ( (*(_DWORD *)(Context[30] + 132LL) & 0x100000) != 0 )
      IoConfigureCrashDump(0LL, 1);
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].DefaultType = 0;
    QueryTable[0].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))IopInitCrashDumpRegCallback;
    QueryTable[0].Flags = 4;
    QueryTable[0].Name = L"ExistingPageFiles";
    QueryTable[0].EntryContext = &v8;
    RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", QueryTable, Context, 0LL);
  }
  if ( v8 )
  {
    v6 = 0;
  }
  else
  {
    *(_OWORD *)&v9[1] = 0LL;
    v6 = IoInitializeCrashDump(0LL, (__int128 *)&v9[1]) == 0 ? 0xC0000001 : 0;
  }
  if ( !a2 )
    IopInitializeOfflineCrashDump(Context[30]);
  return v6;
}
