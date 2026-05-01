/*
 * XREFs of ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180476E38
 * Callers:
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x18047CDD0 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     _SearchAppDesktopExperienceView::ShowWithStart_::_1_::dtor$0 @ 0x18047CF45 (_SearchAppDesktopExperienceView--ShowWithStart_--_1_--dtor$0.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180488050 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     _CortanaDesktopExperienceView::ShowWithStart_::_1_::dtor$0 @ 0x1804881C5 (_CortanaDesktopExperienceView--ShowWithStart_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18042ADB0 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::~CortanaExperienceManager_ShowWithStart(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
