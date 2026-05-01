/*
 * XREFs of ??1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800A11E0
 * Callers:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1800A1114 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     _CSingleViewShellExperience::LaunchCompleted_::_1_::dtor$0 @ 0x18021A269 (_CSingleViewShellExperience--LaunchCompleted_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800766FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall SingleViewExperienceTelemetry::LaunchCompleted::~LaunchCompleted(
        SingleViewExperienceTelemetry::LaunchCompleted *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
