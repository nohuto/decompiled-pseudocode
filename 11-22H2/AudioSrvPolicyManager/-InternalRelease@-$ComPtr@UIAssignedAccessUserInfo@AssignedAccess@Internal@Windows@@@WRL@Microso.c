/*
 * XREFs of ?InternalRelease@?$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180048430
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180047F98 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18004849C (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo>::InternalRelease(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
