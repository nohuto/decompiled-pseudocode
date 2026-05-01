/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x1803D3F90
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x180151B28 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ??1AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAA@XZ @ 0x1803CCE6C (--1AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Sh.c)
 *     ??1AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@UEAA@XZ @ 0x1805625E0 (--1AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLim.c)
 * Callees:
 *     ?release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z @ 0x1803D3EA4 (-release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z.c)
 */

void __fastcall _reset___unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAAXPEAVoperation_guard_3__Z(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v4; // rsi
  DWORD LastError; // ebx
  struct wil::operation_guard *v6; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::release_operation_guard_reference(v4, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
