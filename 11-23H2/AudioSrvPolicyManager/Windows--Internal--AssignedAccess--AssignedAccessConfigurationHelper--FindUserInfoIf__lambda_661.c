/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180046B08
 * Callers:
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x180046EC8 (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046348 (--1-$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_po.c)
 *     _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x180046D04 (_lambda_661bc23c674c805837064d315685ee67_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FA0 (-InternalRelease@-$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microso.c)
 *     ?begin@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA?AVvector_iterator_nothrow@12@XZ @ 0x180046FD8 (-begin@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18004700C (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rbx
  unsigned int i; // edi
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h] BYREF
  int *v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v21; // [rsp+80h] [rbp+20h] BYREF
  __int64 v22; // [rsp+88h] [rbp+28h] BYREF

  v21 = a1;
  if ( a2 )
  {
    *a3 = 0LL;
    v5 = *a2;
    v22 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 80))(a2, &v22);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v18 = 0;
      v19 = 0LL;
      v15 = v22;
      v17 = &v18;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 56LL))(v22, &v16);
      *v17 = v7;
      wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::begin(
        &v15,
        &v13);
      v8 = v16;
      v9 = v13;
      for ( i = v14;
            **(int **)(v9 + 16) >= 0 && i != v8;
            wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
              v9,
              i) )
      {
        if ( (unsigned __int8)lambda_661bc23c674c805837064d315685ee67_::operator()(&v21, *(_QWORD *)(v9 + 32)) )
        {
          v11 = *(_QWORD *)(v9 + 32);
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
          *a3 = *(_QWORD *)(v9 + 32);
          break;
        }
        ++i;
      }
      Microsoft::WRL::ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo>::InternalRelease(&v19);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
        (const char *)(unsigned int)v6);
    }
    wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>(&v22);
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
      (const char *)0x80070057LL);
  }
  return v4;
}
