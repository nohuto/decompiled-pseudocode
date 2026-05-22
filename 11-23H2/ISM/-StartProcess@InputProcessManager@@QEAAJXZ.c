/*
 * XREFs of ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x1801B48D0
 * Callers:
 *     ?ISMShutDownStatic@InputProcessManager@@SAJPEAXK0@Z @ 0x1801B3DF0 (-ISMShutDownStatic@InputProcessManager@@SAJPEAXK0@Z.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z @ 0x1801B4C84 (-UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801DA284 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180031F50 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035818 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInternalServerConnection@@@Z @ 0x1801B3B10 (--4-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInt.c)
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801B4894 (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 *     ?StartProcess@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@@Z @ 0x1801B4A50 (-StartProcess@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@@Z.c)
 */

__int64 __fastcall InputProcessManager::StartProcess(InputProcessManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v5; // r9
  Microsoft::Bamo::BaseBamoConnection *InputSystemInternalServerConnection; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-C8h]
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+50h] [rbp-98h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+70h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  InputTraceLogging::InputProcessManager::StartProcess(*((unsigned int *)this + 18));
  if ( *((_DWORD *)this + 18) )
  {
    if ( *((_DWORD *)this + 18) == 4 )
      *((_BYTE *)this + 76) = 1;
  }
  else
  {
    memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
    StartupInfo.cb = 104;
    memset(&ProcessInformation, 0, sizeof(ProcessInformation));
    if ( !CreateProcessW(L"ISM.exe", 0LL, 0LL, 0LL, 0, 0x8000088u, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x2C,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
               v5);
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::operator=(
      (Microsoft::Bamo::BaseBamoConnection **)this + 8,
      InputSystemInternalServerConnection);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8));
    v9 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64 (__fastcall *)(InputProcessManager *, int, void *), InputProcessManager *))(**(_QWORD **)(v8 + 48) + 272LL))(
           *(_QWORD *)(v8 + 48),
           ProcessInformation.hProcess,
           InputProcessManager::ISMShutDownStatic,
           this);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x33,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
        (const char *)(unsigned int)v9,
        v12);
    CloseHandle(ProcessInformation.hThread);
    InputProcessManager::SetInputProcessState((__int64)this, 1u, v10, v11);
  }
  return 0LL;
}
