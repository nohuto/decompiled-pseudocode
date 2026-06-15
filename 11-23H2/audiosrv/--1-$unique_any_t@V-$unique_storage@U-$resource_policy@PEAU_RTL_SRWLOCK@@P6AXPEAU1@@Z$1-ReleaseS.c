/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004BBB0
 * Callers:
 *     _CStreamConnectionManagerImpl::GetInstance_::_1_::dtor$0 @ 0x18007A6E0 (_CStreamConnectionManagerImpl--GetInstance_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::GetEndpointCharacteristics_::_1_::dtor$4 @ 0x18007B770 (_CEndpointCharacteristicsCache--GetEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CCustomAudioEndpointResourceManagerCache::TryGetResourceManagerService_::_1_::dtor$0 @ 0x18007C4D9 (_CCustomAudioEndpointResourceManagerCache--TryGetResourceManagerService_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::RegisterCallback_::_1_::dtor$1 @ 0x1800F9CD7 (_CBtAudioResourceManagerBase--RegisterCallback_--_1_--dtor$1.c)
 *     _CMonitorManager::CStreamConnectionImpl::SetStreamingState_::_1_::dtor$0 @ 0x18012F2FB (_CMonitorManager--CStreamConnectionImpl--SetStreamingState_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::IsSPDIFEndpoint_::_1_::dtor$0 @ 0x18014E4B0 (_CEndpointCharacteristics--IsSPDIFEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
