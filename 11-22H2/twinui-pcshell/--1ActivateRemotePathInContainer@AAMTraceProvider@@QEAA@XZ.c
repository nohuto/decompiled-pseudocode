/*
 * XREFs of ??1ActivateRemotePathInContainer@AAMTraceProvider@@QEAA@XZ @ 0x18062F390
 * Callers:
 *     ?ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EURect@Foundation@Windows@@HPEA_J@Z @ 0x1806302A0 (-ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EUR.c)
 *     _ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::dtor$0 @ 0x180630509 (_ApplicationContainerActivation--ActivateRemotePathInContainer_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180630904 (-Destroy@-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 */

void __fastcall AAMTraceProvider::ActivateRemotePathInContainer::~ActivateRemotePathInContainer(
        AAMTraceProvider::ActivateRemotePathInContainer *this)
{
  *(_QWORD *)this = &AAMTraceProvider::ActivateRemotePathInContainer::`vftable';
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
