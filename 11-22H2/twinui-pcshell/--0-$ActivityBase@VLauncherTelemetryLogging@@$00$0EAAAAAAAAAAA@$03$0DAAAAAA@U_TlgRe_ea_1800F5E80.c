/*
 * XREFs of ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F5E80
 * Callers:
 *     ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800F5DD0 (--0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??$Start@W4Mode@LauncherTelemetry@@IAEAY03$$CBG@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@$$QEAW4Mode@LauncherTelemetry@@$$QEAIAEAY03$$CBG@Z @ 0x180201D5C (--$Start@W4Mode@LauncherTelemetry@@IAEAY03$$CBG@LauncherInvokeActivity@CommonStartTelemetry@@SA-.c)
 *     ??$Start@W4Mode@LauncherTelemetry@@IAEBQEBG@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@$$QEAW4Mode@LauncherTelemetry@@$$QEAIAEBQEBG@Z @ 0x180201DB4 (--$Start@W4Mode@LauncherTelemetry@@IAEBQEBG@LauncherInvokeActivity@CommonStartTelemetry@@SA-AV01.c)
 *     ??$Start@$$V@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@XZ @ 0x1804FF9D8 (--$Start@$$V@LauncherInvokeActivity@CommonStartTelemetry@@SA-AV01@XZ.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1)
{
  *(_QWORD *)a1 = &wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = "LauncherInvokeActivity";
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
