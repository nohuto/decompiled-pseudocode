/*
 * XREFs of DllMain @ 0x18009C1A4
 * Callers:
 *     dllmain_dispatch @ 0x1800975EC (dllmain_dispatch.c)
 * Callees:
 *     ?InitializeFromRegistry@FailFast@WRL2@Microsoft@@SAXPEBG0@Z @ 0x18001BC48 (-InitializeFromRegistry@FailFast@WRL2@Microsoft@@SAXPEBG0@Z.c)
 *     ?DLLMain@wil@@YAXPEAUHINSTANCE__@@KPEAX@Z @ 0x1800834FC (-DLLMain@wil@@YAXPEAUHINSTANCE__@@KPEAX@Z.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800871E8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x18008DF6C (McGenEventRegister_EventRegister.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x18008DFC0 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z.c)
 *     McGenEventUnregister_EventUnregister @ 0x1800F910C (McGenEventUnregister_EventUnregister.c)
 *     CompWinRTDllDetach @ 0x1801087EC (CompWinRTDllDetach.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  void *v3; // r9
  int v4; // edx
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 *v6; // rcx
  REGHANDLE v7; // rcx
  REGHANDLE v8; // rcx
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-38h] BYREF

  wil::DLLMain((wil *)hinstDLL, *(HINSTANCE *)&fdwReason, (__int64)lpvReserved, v3);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      GetNativeSystemInfo(&SystemInfo);
      DirectComposition::CProxyTable::s_pageSize = SystemInfo.dwPageSize;
      DirectComposition::CProxyTable::s_maxProxyTableSize = ((unsigned __int64)SystemInfo.dwPageSize - 32) >> 4;
      McGenEventRegister_EventRegister();
      TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1802191B0);
      TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1802191E8);
      wil::SetResultLoggingCallback();
      Microsoft::WRL2::FailFast::InitializeFromRegistry(v6, v5);
    }
  }
  else
  {
    CompWinRTDllDetach();
    v7 = RegHandle;
    RegHandle = 0LL;
    dword_1802191E8 = 0;
    EventUnregister(v7);
    v8 = qword_1802191D0;
    qword_1802191D0 = 0LL;
    dword_1802191B0 = 0;
    EventUnregister(v8);
    McGenEventUnregister_EventUnregister();
  }
  return 1;
}
