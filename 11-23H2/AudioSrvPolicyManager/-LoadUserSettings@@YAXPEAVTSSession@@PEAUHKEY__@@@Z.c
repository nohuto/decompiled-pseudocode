/*
 * XREFs of ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180035800
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180036AA0 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D6C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall LoadUserSettings(DWORD *a1, HKEY a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  DWORD v6; // ebx
  DWORD pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 4u )
  {
    pvData = *a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_180055D2A,
      pvData,
      v5,
      (__int64)&pvData);
  }
  v6 = 1;
  pcbData = 4;
  a1[272] = 1;
  if ( !RegGetValueW(a2, 0LL, L"UserDuckingPreference", 0x10u, 0LL, &pvData, &pcbData) )
  {
    if ( pvData <= 3 )
      v6 = pvData;
    a1[272] = v6;
  }
}
