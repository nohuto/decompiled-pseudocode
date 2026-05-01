/*
 * XREFs of ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1805F47D8
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1801077B4 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ??1?$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ @ 0x180030DBC (--1-$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x1805F4378 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x1805F4648 (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        const unsigned __int16 *a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  int AssignedAccessConfiguration; // eax
  unsigned int v5; // ebx
  int UserInfoIf__lambda_661bc23c674c805837064d315685ee67; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const unsigned __int16 *v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v12; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  *(_DWORD *)a3 = 0;
  v12 = 0LL;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  this,
                                  &v12);
  v5 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration >= 0 )
  {
    v11 = 0LL;
    UserInfoIf__lambda_661bc23c674c805837064d315685ee67 = Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
                                                            (__int64)&v10,
                                                            (__int64 *)v12,
                                                            &v11);
    v5 = UserInfoIf__lambda_661bc23c674c805837064d315685ee67;
    if ( UserInfoIf__lambda_661bc23c674c805837064d315685ee67 >= 0 )
    {
      if ( !v11
        || (UserInfoIf__lambda_661bc23c674c805837064d315685ee67 = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::AssignedAccess::AssignedAccessType *))(*(_QWORD *)v11 + 80LL))(
                                                                    v11,
                                                                    a3),
            v5 = UserInfoIf__lambda_661bc23c674c805837064d315685ee67,
            UserInfoIf__lambda_661bc23c674c805837064d315685ee67 >= 0) )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v7 = 204LL;
    }
    else
    {
      v7 = 201LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)UserInfoIf__lambda_661bc23c674c805837064d315685ee67);
LABEL_10:
    ATL::CComPtr<IWICImagingFactory>::~CComPtr<IWICImagingFactory>(&v11);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD,
    (__int64)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
    (const char *)(unsigned int)AssignedAccessConfiguration);
LABEL_11:
  ATL::CComPtr<IWICImagingFactory>::~CComPtr<IWICImagingFactory>((__int64 *)&v12);
  return v5;
}
