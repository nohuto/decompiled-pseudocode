/*
 * XREFs of ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180429410
 * Callers:
 *     ??$?0$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180427888 (--$-0$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@AEAA@U-.c)
 *     ??$?0$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18042793C (--$-0$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@AEAA@U-$in.c)
 *     ??$?0$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180476148 (--$-0$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@AEAA@U-$integral_cons.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
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
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
