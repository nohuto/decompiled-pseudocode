/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800C278C
 * Callers:
 *     _CBtAudioResourceManager::RegisterCallback_::_1_::dtor$1 @ 0x180066C68 (_CBtAudioResourceManager--RegisterCallback_--_1_--dtor$1.c)
 *     _CEndpointCharacteristicsCache::GetEndpointCharacteristics_::_1_::dtor$4 @ 0x18006E7A0 (_CEndpointCharacteristicsCache--GetEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$1 @ 0x18006EA80 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$1.c)
 *     _CStreamConnectionManagerImpl::GetInstance_::_1_::dtor$0 @ 0x18006EB43 (_CStreamConnectionManagerImpl--GetInstance_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerCache::GetBtAudioResourceManager_::_1_::dtor$0 @ 0x180115C46 (_CBtAudioResourceManagerCache--GetBtAudioResourceManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CStreamConnectionImpl::SetStreamingState_::_1_::dtor$0 @ 0x18011F0C9 (_CMonitorManager--CStreamConnectionImpl--SetStreamingState_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::IsSPDIFEndpoint_::_1_::dtor$0 @ 0x18014B3C9 (_CEndpointCharacteristics--IsSPDIFEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(a1);
}
