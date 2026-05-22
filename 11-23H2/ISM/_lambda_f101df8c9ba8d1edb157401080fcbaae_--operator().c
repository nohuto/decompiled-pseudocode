/*
 * XREFs of _lambda_f101df8c9ba8d1edb157401080fcbaae_::operator() @ 0x180059C5C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(IInspectable___unsigned_char)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_f101df8c9ba8d1edb157401080fcbaae___1_IInspectable___unsigned_char_::Invoke @ 0x18005A190 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_18005A190.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001AF80 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z @ 0x18005A824 (-SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z.c)
 */

__int64 __fastcall lambda_f101df8c9ba8d1edb157401080fcbaae_::operator()(ULONG_PTR *a1, RTL_SRWLOCK *a2)
{
  ULONG_PTR v3; // rcx
  __int64 ***v4; // rdi
  __int64 **i; // rbx
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  SRWLock = a2;
  v3 = *a1;
  if ( !*(_BYTE *)(v3 + 184) )
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v3 + 160), &SRWLock);
    v4 = (__int64 ***)(*a1 + 72);
    for ( i = *v4; i != (__int64 **)v4; i = (__int64 **)*i )
      LampArrayDevice::SetAmbientPids((LampArrayDevice *)i[2], 0, 0, 0);
    QueueUserAPC(LampArrayRawInputProvider::AmbientUpdateAPC, *(HANDLE *)(*a1 + 176), *a1);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return 0LL;
}
