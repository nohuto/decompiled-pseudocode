/*
 * XREFs of ??1CAudioDGModule@@UEAA@XZ @ 0x140027320
 * Callers:
 *     _dynamic_atexit_destructor_for___AtlModule__ @ 0x140036D20 (_dynamic_atexit_destructor_for___AtlModule__.c)
 *     ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x140050A80 (--_GCAudioDGModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140037E2E (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CAudioDGModule::~CAudioDGModule(CAudioDGModule *this, void *a2)
{
  bool v2; // zf
  wil::details *v4; // rcx
  char *v5; // rcx
  wil::details *v6; // rcx
  wil::details *v7; // rcx

  v2 = g_fEventTracingEnabled == 0;
  *(_QWORD *)this = &CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  *((_QWORD *)this + 13) = &CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  if ( !v2 )
  {
    EtwUnregisterTraceGuids(qword_1400A2020);
    qword_1400A2020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
  v4 = (wil::details *)*((_QWORD *)this + 19);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  v5 = (char *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  v6 = (wil::details *)*((_QWORD *)this + 16);
  if ( v6 )
    wil::details::CloseHandle(v6, a2);
  v7 = (wil::details *)*((_QWORD *)this + 15);
  if ( v7 )
    wil::details::CloseHandle(v7, a2);
  ATL::CAtlExeModuleT<CAudioDGModule>::~CAtlExeModuleT<CAudioDGModule>(this);
}
