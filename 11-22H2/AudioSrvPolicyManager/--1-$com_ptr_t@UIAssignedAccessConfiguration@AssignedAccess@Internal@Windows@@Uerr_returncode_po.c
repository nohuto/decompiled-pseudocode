/*
 * XREFs of ??1?$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800477D8
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000FF60 (GetAssignedAccessTypeForUser.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180047F98 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x180048358 (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
