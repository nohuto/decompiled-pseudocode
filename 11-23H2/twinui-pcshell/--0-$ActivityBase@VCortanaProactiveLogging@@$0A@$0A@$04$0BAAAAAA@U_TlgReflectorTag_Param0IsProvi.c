/*
 * XREFs of ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180429604
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804301F0 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18045FD08 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ??$?0$$V@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180476094 (--$-0$$V@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@AEAA@U-$int.c)
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18047AD5C (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18048570C (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180486518 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
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
