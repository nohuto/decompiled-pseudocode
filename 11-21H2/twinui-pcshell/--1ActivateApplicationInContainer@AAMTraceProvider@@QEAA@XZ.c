/*
 * XREFs of ??1ActivateApplicationInContainer@AAMTraceProvider@@QEAA@XZ @ 0x18057158C
 * Callers:
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::dtor$0 @ 0x180572310 (_ApplicationContainerActivation--ActivateApplicationInContainer_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180572AC4 (-Destroy@-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 */

void __fastcall AAMTraceProvider::ActivateApplicationInContainer::~ActivateApplicationInContainer(
        AAMTraceProvider::ActivateApplicationInContainer *this)
{
  *(_QWORD *)this = &AAMTraceProvider::ActivateApplicationInContainer::`vftable';
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
