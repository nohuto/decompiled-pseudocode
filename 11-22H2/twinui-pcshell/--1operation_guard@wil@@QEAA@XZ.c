/*
 * XREFs of ??1operation_guard@wil@@QEAA@XZ @ 0x180191708
 * Callers:
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801916B0 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 * Callees:
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180191734 (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x1804B0E88 (-reset@-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_ope.c)
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x1804B0EBC (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 */

void __fastcall wil::operation_guard::~operation_guard(wil::operation_guard *this)
{
  PVOID v2; // rcx
  PVOID Address; // [rsp+40h] [rbp+18h] BYREF

  wil::operation_guard::acquire(this, &Address);
  if ( Address )
  {
    _reset___unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAAXPEAVoperation_guard_3__Z(
      &Address,
      0LL);
    *((_BYTE *)this + 8) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) > 1 )
      wil::slim_event_t<1>::wait(this);
    if ( Address )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Address + 1, 0xFFFFFFFF) == 1 )
      {
        v2 = Address;
        *(_DWORD *)Address = 1;
        WakeByAddressAll(v2);
      }
    }
  }
}
