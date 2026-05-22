/*
 * XREFs of _lambda_48f152b7375fc54a16cdd7806e5a908e_::operator() @ 0x180062238
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(IInspectable___unsigned_char)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_48f152b7375fc54a16cdd7806e5a908e___1_IInspectable___unsigned_char_::Invoke @ 0x180062AF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180062AF0.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18001B688 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NXZ @ 0x1800631FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DL55030749@@@details@wil@@QEAA_NX.c)
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z @ 0x1800643B0 (-SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800B2AB4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_48f152b7375fc54a16cdd7806e5a908e_::operator()(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v3; // rcx
  __int64 ***v4; // rdi
  __int64 **i; // rbx
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v3 = *a1;
  if ( !*(_BYTE *)(v3 + 184) )
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v3 + 160), &v7);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL55030749>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DL55030749>::GetImpl'::`2'::impl)
      && (unsigned int)dword_180275498 > 5 )
    {
      v8 = (__int64)"AmbientServerDisconnected";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_180275498,
        (__int64)&v8);
    }
    v4 = (__int64 ***)(*a1 + 72);
    for ( i = *v4; i != (__int64 **)v4; i = (__int64 **)*i )
      LampArrayDevice::SetAmbientPids((LampArrayDevice *)i[2], 0, 0, 0);
    QueueUserAPC(LampArrayRawInputProvider::AmbientUpdateAPC, *(HANDLE *)(*a1 + 176), *a1);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  }
  return 0LL;
}
