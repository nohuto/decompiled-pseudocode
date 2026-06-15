/*
 * XREFs of ??$GetRangeNoThrow@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x1800430DC
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180042E2C (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::GetRangeNoThrow<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)(a1 + 32) = 0LL;
  **(_DWORD **)(a1 + 16) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, a1 + 8);
  return a1;
}
