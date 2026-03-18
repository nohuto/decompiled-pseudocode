/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800D4FF8
 * Callers:
 *     DllMain @ 0x180111360 (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800D5090 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x1800D50C4 (-Startup@@YAJXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800D5560 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18019A5E8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     McGenEventUnregister_EventUnregister @ 0x18026F834 (McGenEventUnregister_EventUnregister.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  const struct wil::FailureInfo *v9; // rdx
  REGHANDLE v10; // rcx
  REGHANDLE v11; // rcx
  REGHANDLE v12; // rcx
  REGHANDLE v13; // rcx
  REGHANDLE v14; // rcx
  _BYTE v15[168]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = 1;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
        CThreadContext::FreeCurrent();
    }
    else
    {
      if ( wil::details::g_pfnLoggingCallback
        && (void (__fastcall *)(const struct wil::FailureInfo *))wil::details::g_pfnLoggingCallback != WilResultLoggingCallback_MaybeFailFast )
      {
        memset_0(v15, 0, 0x98uLL);
        wil::details::WilFailFast((wil::details *)v15, v9);
      }
      wil::details::g_pfnLoggingCallback = (__int64)WilResultLoggingCallback_MaybeFailFast;
      CThreadContext::s_dwTlsIndex = TlsAlloc();
      if ( CThreadContext::s_dwTlsIndex == -1 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x4Eu, 0LL);
      }
      else
      {
        v6 = Startup();
        v8 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x50u, 0LL);
        else
          RegisterDwmGuidWithEtw();
      }
      return v8 >= 0;
    }
  }
  else
  {
    McGenEventUnregister_EventUnregister(&Microsoft_Windows_Dwm_Compositor_Context);
    McGenEventUnregister_EventUnregister(&Microsoft_Windows_Dwm_Core_Provider_Context);
    v10 = RegHandle;
    RegHandle = 0LL;
    dword_1803E37D0 = 0;
    EventUnregister(v10);
    v11 = qword_1803E3748;
    qword_1803E3748 = 0LL;
    dword_1803E3728 = 0;
    EventUnregister(v11);
    v12 = qword_1803E3B60;
    qword_1803E3B60 = 0LL;
    dword_1803E3B40 = 0;
    EventUnregister(v12);
    v13 = qword_1803E37B8;
    qword_1803E37B8 = 0LL;
    dword_1803E3798 = 0;
    EventUnregister(v13);
    v14 = qword_1803E3780;
    qword_1803E3780 = 0LL;
    dword_1803E3760 = 0;
    EventUnregister(v14);
    if ( CThreadContext::s_dwTlsIndex != -1 )
    {
      CThreadContext::FreeCurrent();
      TlsFree(CThreadContext::s_dwTlsIndex);
      CThreadContext::s_dwTlsIndex = -1;
    }
  }
  return v2;
}
