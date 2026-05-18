/*
 * XREFs of DllMain @ 0x18000BE74
 * Callers:
 *     dllmain_dispatch @ 0x180002E1C (dllmain_dispatch.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001200 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     __security_check_cookie @ 0x180001CB0 (__security_check_cookie.c)
 *     memset_0 @ 0x180002688 (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180008AB4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x18000BB1C (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  HANDLE CurrentProcess; // rax
  struct _GUID *v4; // rdx
  unsigned __int16 *v5; // r8
  unsigned __int16 *v6; // r9
  DWORD CurrentProcessId; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  REGHANDLE v11; // rcx
  int dwOptionsa; // [rsp+20h] [rbp-E0h]
  DWORD dwOptions[2]; // [rsp+20h] [rbp-E0h]
  int samDesired; // [rsp+28h] [rbp-D8h]
  int lpSecurityAttributes; // [rsp+30h] [rbp-D0h]
  int phkResult; // [rsp+38h] [rbp-C8h]
  int lpdwDisposition; // [rsp+40h] [rbp-C0h]
  int v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  DWORD pSessionId[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  WCHAR ValueName[40]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 Data[40]; // [rsp+E0h] [rbp-20h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      DisableThreadLibraryCalls(hinstDLL);
      CurrentProcess = GetCurrentProcess();
      UtilGetProcessTelemetryAppSessionGuid(CurrentProcess, v4, v5, v6);
      EventActivityIdControl(3u, &gDwmInitTelemetryActivityId);
      memset_0(Data, 0, 0x4AuLL);
      v23 = gDwmInitTelemetryActivityId.Data4[7];
      v22 = gDwmInitTelemetryActivityId.Data4[6];
      v21 = gDwmInitTelemetryActivityId.Data4[5];
      v20 = gDwmInitTelemetryActivityId.Data4[4];
      v19 = gDwmInitTelemetryActivityId.Data4[3];
      lpdwDisposition = gDwmInitTelemetryActivityId.Data4[2];
      phkResult = gDwmInitTelemetryActivityId.Data4[1];
      lpSecurityAttributes = gDwmInitTelemetryActivityId.Data4[0];
      samDesired = gDwmInitTelemetryActivityId.Data3;
      dwOptionsa = gDwmInitTelemetryActivityId.Data2;
      if ( (int)StringCchPrintfW(
                  Data,
                  37LL,
                  L"%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
                  gDwmInitTelemetryActivityId.Data1,
                  dwOptionsa,
                  samDesired,
                  lpSecurityAttributes,
                  phkResult,
                  lpdwDisposition,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23) >= 0 )
      {
        hKey = 0LL;
        if ( !RegCreateKeyExW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\Dwm",
                0,
                0LL,
                1u,
                0xF003Fu,
                0LL,
                &hKey,
                0LL) )
        {
          pSessionId[0] = 0;
          CurrentProcessId = GetCurrentProcessId();
          if ( ProcessIdToSessionId(CurrentProcessId, pSessionId) )
          {
            memset_0(ValueName, 0, 0x44uLL);
            dwOptions[0] = pSessionId[0];
            if ( (int)StringCchPrintfW(ValueName, 34LL, L"%s_%08X", L"DwmInitSessionActivityId", *(_QWORD *)dwOptions) >= 0 )
              RegSetKeyValueW(hKey, 0LL, ValueName, 1u, Data, 0x4Au);
          }
          RegCloseKey(hKey);
        }
      }
      TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180016000);
      if ( (unsigned int)dword_180016000 > 5
        && (qword_180016010 & 0x400000000000LL) != 0
        && (qword_180016018 & 0x400000000000LL) == qword_180016018 )
      {
        *(_QWORD *)pSessionId = &gDwmInitTelemetryActivityId;
        hKey = (HKEY)&gDwmInitTargetAppSessionGuid;
        v26 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
          v8,
          (int)&unk_18001234C,
          v9,
          v10,
          (__int64)&v26,
          (__int64 *)pSessionId,
          (__int64 *)&hKey);
      }
    }
  }
  else
  {
    v11 = RegHandle;
    RegHandle = 0LL;
    dword_180016000 = 0;
    EventUnregister(v11);
  }
  return 1;
}
