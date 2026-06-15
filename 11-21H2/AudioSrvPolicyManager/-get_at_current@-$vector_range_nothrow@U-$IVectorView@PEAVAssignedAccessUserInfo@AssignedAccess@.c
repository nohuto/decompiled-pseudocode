/*
 * XREFs of ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x180043498
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180042E2C (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

int *__fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
        __int64 *a1,
        unsigned int a2)
{
  int *result; // rax
  __int64 v5; // r14
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD *); // rbp

  result = (int *)a1[2];
  if ( *result >= 0 && a2 < *((_DWORD *)a1 + 2) )
  {
    v5 = *a1;
    v6 = a1 + 4;
    v7 = a1[4];
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v5 + 48LL);
    if ( v7 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    result = (int *)v8(v5, a2, v6);
    *(_DWORD *)a1[2] = (_DWORD)result;
  }
  return result;
}
