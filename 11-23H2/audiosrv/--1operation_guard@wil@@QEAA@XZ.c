/*
 * XREFs of ??1operation_guard@wil@@QEAA@XZ @ 0x1800F1DA4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@Voperation_guard@wil@@@std@@EEAAXXZ @ 0x1800F4320 (-_Destroy@-$_Ref_count_obj2@Voperation_guard@wil@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F4660 (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAVoperation_guard@wil@@@_E$1?release_operation_guard_reference@details@2@YAX0@ZPEAV12@@details@wil@@SAXPEAVoperation_guard@3@@Z @ 0x1800F46A8 (-close_reset@-$close_invoke_helper@$00P6AXPEAVoperation_guard@wil@@@_E$1-release_operation_guard.c)
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x1800F4700 (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 */

void __fastcall wil::operation_guard::~operation_guard(wil::operation_guard *this)
{
  PVOID Address; // [rsp+38h] [rbp+10h] BYREF

  wil::operation_guard::acquire(this, &Address);
  if ( Address )
  {
    _close_reset___close_invoke_helper__00P6AXPEAVoperation_guard_wil____E_1_release_operation_guard_reference_details_2_YAX0_ZPEAV12__details_wil__SAXPEAVoperation_guard_3__Z(Address);
    *((_BYTE *)this + 8) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) > 1 )
      wil::slim_event_t<1>::wait(this);
  }
}
