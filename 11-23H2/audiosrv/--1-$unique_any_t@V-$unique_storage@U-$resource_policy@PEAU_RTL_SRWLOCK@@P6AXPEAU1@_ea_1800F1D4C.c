/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F1D4C
 * Callers:
 *     _CEndpointCharacteristicsCache::GetEndpointCharacteristics_::_1_::dtor$1 @ 0x18007B750 (_CEndpointCharacteristicsCache--GetEndpointCharacteristics_--_1_--dtor$1.c)
 *     _BluetoothControls::BluetoothVolume::IsApproximatelyAtScalarVolume_::_1_::dtor$0 @ 0x1800F282F (_BluetoothControls--BluetoothVolume--IsApproximatelyAtScalarVolume_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::NotifyStreamChange_::_1_::dtor$1 @ 0x1800F9978 (_CBtAudioResourceManagerBase--NotifyStreamChange_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
