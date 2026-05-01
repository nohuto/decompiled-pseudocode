/*
 * XREFs of ?release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z @ 0x1803D3EA4
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180151B60 (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x1803D3F90 (-reset@-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_ope.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::release_operation_guard_reference(wil::details *this, struct wil::operation_guard *a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)this = 1;
    WakeByAddressAll(this);
  }
}
