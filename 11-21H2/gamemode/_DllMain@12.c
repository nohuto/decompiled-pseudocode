/*
 * XREFs of _DllMain@12 @ 0x10004C86
 * Callers:
 *     __DllMainCRTStartup @ 0x10006A52 (__DllMainCRTStartup.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x10001E70 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     _TraceLoggingRegisterEx_EventRegister_EventSetInformation@12 @ 0x10001FD1 (_TraceLoggingRegisterEx_EventRegister_EventSetInformation@12.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  int v3; // ecx
  int v4; // ecx
  REGHANDLE v6; // [esp-8h] [ebp-14h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  if ( fdwReason == 1 )
  {
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(v3);
    if ( (unsigned int)dword_10008000 > 4 )
    {
      v7 = 1;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v4,
        (int)byte_10001A19,
        v4,
        v4,
        (int)&v7);
    }
    DisableThreadLibraryCalls(hinstDLL);
  }
  else if ( !fdwReason )
  {
    if ( (unsigned int)dword_10008000 > 4 )
    {
      v7 = 0;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v3,
        (int)byte_10001A19,
        v3,
        v3,
        (int)&v7);
    }
    v6 = qword_10008018;
    dword_10008000 = 0;
    qword_10008018 = 0LL;
    EventUnregister(v6);
  }
  return 1;
}
