/*
 * XREFs of ??1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180357BA8
 * Callers:
 *     ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x18035A7F0 (-Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x18038A430 (-Prelaunch@SearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180358CAC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::~CortanaExperienceManager_PreLaunch(
        CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
