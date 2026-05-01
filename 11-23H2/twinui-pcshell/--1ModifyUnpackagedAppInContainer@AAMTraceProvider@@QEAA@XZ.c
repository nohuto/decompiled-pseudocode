/*
 * XREFs of ??1ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAA@XZ @ 0x18062F48C
 * Callers:
 *     ?ModifyUnpackagedAppInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@W4UnpackageAppModifyAction@ContainerActivation@Activation@ApplicationModel@Internal@Windows@@E@Z @ 0x180630F80 (-ModifyUnpackagedAppInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@W4Un.c)
 *     _ApplicationContainerActivation::ModifyUnpackagedAppInContainer_::_1_::dtor$0 @ 0x1806310E1 (_ApplicationContainerActivation--ModifyUnpackagedAppInContainer_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180630904 (-Destroy@-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 */

void __fastcall AAMTraceProvider::ModifyUnpackagedAppInContainer::~ModifyUnpackagedAppInContainer(
        AAMTraceProvider::ModifyUnpackagedAppInContainer *this)
{
  *(_QWORD *)this = &AAMTraceProvider::ModifyUnpackagedAppInContainer::`vftable';
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
