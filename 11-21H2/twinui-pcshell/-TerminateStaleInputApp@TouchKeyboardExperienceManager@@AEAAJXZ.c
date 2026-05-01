/*
 * XREFs of ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800BEDAC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF134 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800BF1DC (--1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF970 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?StartActivity@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1800BFD94 (-StartActivity@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180126FC0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     ?TextInputHostTerminated@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1804698D8 (-TextInputHostTerminated@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::TerminateStaleInputApp(TouchKeyboardExperienceManager *this)
{
  unsigned int LastError; // edi
  const char *v2; // r9
  DWORD v3; // esi
  DWORD v4; // r14d
  DWORD *v5; // r15
  char *v6; // rbx
  LPWSTR FileNameW; // rax
  __int64 v9; // rcx
  const char *v10; // r9
  DWORD cbNeeded[2]; // [rsp+20h] [rbp-E0h] BYREF
  char *v12; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[40]; // [rsp+30h] [rbp-D0h] BYREF
  DWORD idProcess[1024]; // [rsp+170h] [rbp+70h] BYREF
  WCHAR ImageFileName[264]; // [rsp+1170h] [rbp+1070h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+13A8h] [rbp+12A8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v13);
  v13[0] = &TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::`vftable';
  TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::StartActivity((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v13);
  memset_0(idProcess, 0, sizeof(idProcess));
  LastError = 0;
  cbNeeded[0] = 0;
  K32EnumProcesses(idProcess, 0x1000u, cbNeeded);
  if ( !cbNeeded[0] )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1031,
                  (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v2);
    goto LABEL_9;
  }
  v3 = cbNeeded[0] >> 2;
  v4 = 0;
  if ( cbNeeded[0] >> 2 )
  {
    v5 = idProcess;
    do
    {
      v6 = (char *)OpenProcess(0x401u, 0, *v5);
      v12 = v6;
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( K32GetProcessImageFileNameW(v6, ImageFileName, 0x104u) )
        {
          FileNameW = PathFindFileNameW(ImageFileName);
          v9 = -1LL;
          do
            ++v9;
          while ( FileNameW[v9] );
          if ( v9 == 17
            && !(unsigned int)std::_WChar_traits<unsigned short>::compare(FileNameW, L"TextInputHost.exe", 17LL) )
          {
            if ( !TerminateProcess(v6, 0) )
            {
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x103E,
                            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                            v10);
              wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v12);
              goto LABEL_9;
            }
            TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::TextInputHostTerminated((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v13);
          }
        }
      }
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v6);
      ++v4;
      ++v5;
    }
    while ( v4 < v3 );
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
LABEL_9:
  TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::~TerminateStaleInputApp((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v13);
  return LastError;
}
