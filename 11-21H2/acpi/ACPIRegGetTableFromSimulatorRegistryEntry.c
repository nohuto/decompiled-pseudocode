/*
 * XREFs of ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1B70
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00019E0 (ACPIMapNamedTable.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0001B20 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     ACPIRegLocalCopyString @ 0x1C008EB20 (ACPIRegLocalCopyString.c)
 *     OSOpenHandle @ 0x1C008EB74 (OSOpenHandle.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2020 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1C00B2394 (OSOpenLargestSubkey.c)
 */

bool __fastcall ACPIRegGetTableFromSimulatorRegistryEntry(__int64 *a1)
{
  __int64 v1; // rbp
  bool v2; // di
  char *Pool2; // rax
  char *v5; // rsi
  char *v6; // rax
  char *v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-30h]
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  Handle = 0LL;
  v2 = 0;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  Pool2 = (char *)ExAllocatePool2(256LL, 106LL, 1114661697LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  qmemcpy(Pool2, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\Simulator\\Tables\\", 85);
  v6 = ACPIRegLocalCopyString(Pool2 + 85, v1, 4u);
  *v6 = 92;
  v7 = ACPIRegLocalCopyString(v6 + 1, v1 + 10, 6u);
  *v7 = 92;
  *ACPIRegLocalCopyString(v7 + 1, v1 + 16, 8u) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xBu,
      0x25u,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v5);
  v8 = OSOpenHandle(v5, 0LL, (__int64)&Handle);
  if ( v8 >= 0 )
  {
    v9 = OSOpenLargestSubkey(Handle);
    if ( v9 >= 0 )
    {
      v2 = (int)ACPIRegReadEntireSimulatorAcpiTable(0LL, a1) >= 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v9;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x27u,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        v11);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v8;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x26u,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v11);
  }
  ExFreePoolWithTag(v5, 0);
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
