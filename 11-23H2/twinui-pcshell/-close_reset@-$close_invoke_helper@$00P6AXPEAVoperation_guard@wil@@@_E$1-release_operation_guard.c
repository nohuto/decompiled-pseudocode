/*
 * XREFs of ?close_reset@?$close_invoke_helper@$00P6AXPEAVoperation_guard@wil@@@_E$1?release_operation_guard_reference@details@2@YAX0@ZPEAV12@@details@wil@@SAXPEAVoperation_guard@3@@Z @ 0x1804B0B18
 * Callers:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x1804B0E88 (-reset@-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_ope.c)
 * Callees:
 *     <none>
 */

void __fastcall _close_reset___close_invoke_helper__00P6AXPEAVoperation_guard_wil____E_1_release_operation_guard_reference_details_2_YAX0_ZPEAV12__details_wil__SAXPEAVoperation_guard_3__Z(
        volatile signed __int32 *Address)
{
  DWORD LastError; // edi

  LastError = GetLastError();
  if ( _InterlockedExchangeAdd(Address + 1, 0xFFFFFFFF) == 1 )
  {
    *Address = 1;
    WakeByAddressAll((PVOID)Address);
  }
  SetLastError(LastError);
}
