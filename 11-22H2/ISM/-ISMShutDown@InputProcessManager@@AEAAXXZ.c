/*
 * XREFs of ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x1800768EC
 * Callers:
 *     ?ISMShutDownStatic@InputProcessManager@@CAJPEAXK0@Z @ 0x180076A80 (-ISMShutDownStatic@InputProcessManager@@CAJPEAXK0@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180076BA0 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown@@@details@wil@@QEAA_NXZ @ 0x180077000 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A8B5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800DFC54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x180150CA8 (-GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ.c)
 *     ?ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z @ 0x1801C1DA0 (-ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z.c)
 */

void __fastcall InputProcessManager::ISMShutDown(InputProcessManager *this)
{
  const char *v2; // r9
  __int64 v3; // rcx
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  struct IMessageSession *Session; // rax
  int v6; // eax
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+10h]
  DWORD ExitCode; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF
  int v14; // [rsp+80h] [rbp+28h] BYREF
  DWORD v15; // [rsp+88h] [rbp+30h] BYREF

  if ( !GetExitCodeProcess(*((HANDLE *)this + 10), &ExitCode) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0xA9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
      v2);
  InputTraceLogging::InputProcessManager::ProcessShutDown(ExitCode);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown>::GetImpl'::`2'::impl) )
  {
    LODWORD(v13) = ExitCode;
    BYTE4(v13) = 1;
    *(_QWORD *)((char *)this + 68) = v13;
  }
  v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(Microsoft::Bamo::BaseBamoConnection **)(v3 + 16);
  Session = Microsoft::Bamo::BaseBamoConnection::GetSession(v4);
  v6 = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)Session + 280LL))(
         Session,
         *((_QWORD *)this + 10));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB2,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
      (const char *)(unsigned int)v6,
      v9);
  CloseHandle(*((HANDLE *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  if ( (unsigned int)dword_180275498 > 5
    && (qword_1802754A8 & 0x400000000000LL) != 0
    && (qword_1802754B0 & 0x400000000000LL) == qword_1802754B0 )
  {
    v10[0] = 0x1000000LL;
    LODWORD(v13) = *((_QWORD *)this + 7) != 0LL;
    v14 = *((unsigned __int8 *)this + 64);
    v15 = ExitCode;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_180275498,
      (unsigned int)&unk_18023775A,
      v7,
      v8,
      (__int64)v10,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
  if ( *((_BYTE *)this + 64) )
  {
    if ( !*((_QWORD *)this + 7) )
      InputProcessManager::StartProcess(this);
  }
}
