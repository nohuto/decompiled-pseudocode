/*
 * XREFs of ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1800432AC
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180041DB4 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180042E2C (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x18004323C (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        const unsigned __int16 *a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  int AssignedAccessConfiguration; // eax
  unsigned int v5; // ebx
  void (*v6)(void); // rax
  int UserInfoIf__lambda_661bc23c674c805837064d315685ee67; // eax
  __int64 v9; // rbx
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  const unsigned __int16 *v14; // [rsp+48h] [rbp+28h] BYREF
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+58h] [rbp+38h] BYREF

  v14 = a2;
  *(_DWORD *)a3 = 0;
  v15 = 0LL;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  this,
                                  &v15);
  v5 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)AssignedAccessConfiguration);
    if ( !v15 )
      return v5;
    v6 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
LABEL_4:
    v6();
    return v5;
  }
  v16 = 0LL;
  UserInfoIf__lambda_661bc23c674c805837064d315685ee67 = Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
                                                          &v14,
                                                          (__int64 *)v15,
                                                          &v16);
  v5 = UserInfoIf__lambda_661bc23c674c805837064d315685ee67;
  if ( UserInfoIf__lambda_661bc23c674c805837064d315685ee67 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)UserInfoIf__lambda_661bc23c674c805837064d315685ee67);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( !v15 )
      return v5;
    v6 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
    goto LABEL_4;
  }
  v9 = v16;
  if ( !v16 )
  {
    v10 = v15;
    if ( v15 )
      goto LABEL_19;
    return 0LL;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::AssignedAccess::AssignedAccessType *))(*(_QWORD *)v16 + 80LL))(
          v16,
          a3);
  v12 = v11;
  if ( v11 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v15;
    if ( v15 )
LABEL_19:
      (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v15 + 16LL))(v10);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
    (const char *)(unsigned int)v11);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v15 )
    (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v15 + 16LL))(v15);
  return v12;
}
