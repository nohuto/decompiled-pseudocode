/*
 * XREFs of WmipRegisterFirmwareProviders @ 0x140B3CD08
 * Callers:
 *     WMIInitialize @ 0x140B3CDD0 (WMIInitialize.c)
 * Callees:
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 */

NTSTATUS WmipRegisterFirmwareProviders()
{
  NTSTATUS result; // eax
  int SystemInformation; // [rsp+20h] [rbp-20h] BYREF
  char v2; // [rsp+24h] [rbp-1Ch]
  __int16 v3; // [rsp+25h] [rbp-1Bh]
  char v4; // [rsp+27h] [rbp-19h]
  __int64 (__fastcall *v5)(_DWORD *); // [rsp+28h] [rbp-18h]
  PDRIVER_OBJECT v6; // [rsp+30h] [rbp-10h]

  SystemInformation = 1381190978;
  v3 = 0;
  v4 = 0;
  v2 = 1;
  v5 = WmipRawSMBiosTableHandler;
  v6 = PnpDriverObject;
  result = NtSetSystemInformation(SystemRegisterFirmwareTableInformationHandler, &SystemInformation, 0x18u);
  if ( dword_140C31AF0 == 1 )
  {
    SystemInformation = 1179210317;
    v2 = 1;
    v5 = WmipFirmwareTableHandler;
    v6 = PnpDriverObject;
    return NtSetSystemInformation(SystemRegisterFirmwareTableInformationHandler, &SystemInformation, 0x18u);
  }
  return result;
}
