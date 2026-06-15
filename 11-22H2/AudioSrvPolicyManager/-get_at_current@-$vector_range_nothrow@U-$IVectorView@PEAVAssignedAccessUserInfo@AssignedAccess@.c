/*
 * XREFs of ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18004849C
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180047F98 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     ?begin@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA?AVvector_iterator_nothrow@12@XZ @ 0x180048468 (-begin@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180048430 (-InternalRelease@-$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microso.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

int *__fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
        __int64 *a1,
        unsigned int a2)
{
  int *result; // rax
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64); // rdi

  result = (int *)a1[2];
  if ( *result >= 0 && a2 < *((_DWORD *)a1 + 2) )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)*a1 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo>::InternalRelease(a1 + 4);
    result = (int *)v6(v5, a2, (__int64)(a1 + 4));
    *(_DWORD *)a1[2] = (_DWORD)result;
  }
  return result;
}
