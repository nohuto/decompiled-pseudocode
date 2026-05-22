/*
 * XREFs of ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180076BA0
 * Callers:
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x1800768EC (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z @ 0x180076F40 (-UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801E7AC4 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown@@@details@wil@@QEAA_NXZ @ 0x180077000 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A8B5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B2A70 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B4E40 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E0AB8 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E5B4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x180150CA8 (-GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ.c)
 */

void __fastcall InputProcessManager::StartProcess(InputProcessManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  bool v3; // zf
  BOOL v4; // eax
  __int64 v5; // rcx
  Microsoft::Bamo::BaseBamoConnection *v6; // rcx
  DWORD LastError; // eax
  const char *v8; // r9
  struct IMessageSession *Session; // rax
  int v10; // eax
  unsigned int bInheritHandles; // [rsp+20h] [rbp-79h]
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+50h] [rbp-49h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+70h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  BOOL v15; // [rsp+100h] [rbp+67h] BYREF
  BOOL v16; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+110h] [rbp+77h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x200LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200LL) == *((_QWORD *)v2 + 3) )
  {
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v2,
      &unk_1802377EE,
      0LL,
      0LL);
  }
  *((_BYTE *)this + 64) = 1;
  if ( (unsigned int)dword_180275498 > 5
    && (qword_1802754A8 & 0x400000000000LL) != 0
    && (qword_1802754B0 & 0x400000000000LL) == qword_1802754B0 )
  {
    v3 = *((_QWORD *)this + 10) == 0LL;
    v17 = 0x1000000LL;
    v4 = !v3;
    v3 = *((_QWORD *)this + 7) == 0LL;
    v15 = v4;
    v16 = !v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_180275498,
      (unsigned int)&unk_1802375EC,
      0,
      0,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  if ( !*((_QWORD *)this + 10) && !*((_QWORD *)this + 7) )
  {
    memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
    StartupInfo.cb = 104;
    memset(&ProcessInformation, 0, sizeof(ProcessInformation));
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown>::GetImpl'::`2'::impl) )
    {
      if ( !CreateProcessW(L"ISM.exe", 0LL, 0LL, 0LL, 0, 0x8000088u, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x64,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
          v8);
      goto LABEL_14;
    }
    if ( CreateProcessW(L"ISM.exe", 0LL, 0LL, 0LL, 0, 0x8000088u, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
    {
      *((_BYTE *)this + 72) = 0;
LABEL_14:
      v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
      if ( *(int *)(v5 + 8) <= 0 )
        v6 = 0LL;
      else
        v6 = *(Microsoft::Bamo::BaseBamoConnection **)(v5 + 16);
      Session = Microsoft::Bamo::BaseBamoConnection::GetSession(v6);
      v10 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(InputProcessManager *, int, void *), InputProcessManager *))(*(_QWORD *)Session + 272LL))(
              Session,
              ProcessInformation.hProcess,
              InputProcessManager::ISMShutDownStatic,
              this);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
          (const char *)(unsigned int)v10,
          bInheritHandles);
      CloseHandle(ProcessInformation.hThread);
      *((_QWORD *)this + 10) = ProcessInformation.hProcess;
      return;
    }
    LastError = GetLastError();
    if ( LastError == 5 )
    {
      if ( *((_BYTE *)this + 72) && *((_DWORD *)this + 17) == 1073807364 )
        goto LABEL_19;
    }
    else if ( !LastError )
    {
LABEL_19:
      *((_QWORD *)this + 10) = 0LL;
      return;
    }
    wil::details::in1diag3::_FailFast_Win32(
      retaddr,
      (void *)0x54,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
      (const char *)LastError,
      bInheritHandles);
  }
}
