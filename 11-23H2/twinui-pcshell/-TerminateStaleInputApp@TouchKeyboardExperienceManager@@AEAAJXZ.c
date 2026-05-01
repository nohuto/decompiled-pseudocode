/*
 * XREFs of ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800AC5FC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800AC798 (--1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??$?0$$V@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800AC7C4 (--$-0$$V@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integral_constan.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFF20 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TextInputHostTerminated@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18051B768 (-TextInputHostTerminated@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::TerminateStaleInputApp(TouchKeyboardExperienceManager *this)
{
  unsigned int LastError; // edi
  const char *v2; // r9
  char *v3; // rbx
  DWORD *v4; // rsi
  __int64 v5; // r14
  LPWSTR FileNameW; // rax
  __int64 v8; // rdx
  const char *v10; // r9
  DWORD cbNeeded[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[320]; // [rsp+30h] [rbp-D0h] BYREF
  DWORD idProcess[1024]; // [rsp+170h] [rbp+70h] BYREF
  WCHAR ImageFileName[264]; // [rsp+1170h] [rbp+1070h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1398h] [rbp+1298h]

  TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::TerminateStaleInputApp(v12);
  memset_0(idProcess, 0, sizeof(idProcess));
  LastError = 0;
  cbNeeded[0] = 0;
  K32EnumProcesses(idProcess, 0x1000u, cbNeeded);
  if ( cbNeeded[0] )
  {
    if ( cbNeeded[0] >> 2 )
    {
      v4 = idProcess;
      v5 = cbNeeded[0] >> 2;
      do
      {
        v3 = (char *)OpenProcess(0x401u, 0, *v4);
        if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( K32GetProcessImageFileNameW(v3, ImageFileName, 0x104u) )
          {
            FileNameW = PathFindFileNameW(ImageFileName);
            v8 = -1LL;
            do
              ++v8;
            while ( FileNameW[v8] );
            if ( std::_Traits_equal<std::char_traits<unsigned short>>(
                   (__int64)FileNameW,
                   v8,
                   (__int64)L"TextInputHost.exe",
                   17LL) )
            {
              if ( !TerminateProcess(v3, 0) )
                wil::details::in1diag3::_Log_GetLastError(
                  retaddr,
                  (void *)0xF50,
                  (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v10);
              TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::TextInputHostTerminated((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v12);
            }
          }
        }
        if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v3);
        ++v4;
        --v5;
      }
      while ( v5 );
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xF42,
                  (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v2);
  }
  TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::~TerminateStaleInputApp((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v12);
  return LastError;
}
