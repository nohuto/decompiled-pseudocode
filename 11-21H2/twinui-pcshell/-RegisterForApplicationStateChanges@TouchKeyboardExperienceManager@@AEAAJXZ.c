/*
 * XREFs of ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1804641A8
 * Callers:
 *     _lambda_5bca6f87553ee4a307de3070de971dc8_::operator() @ 0x1801B0020 (_lambda_5bca6f87553ee4a307de3070de971dc8_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18009EB10 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::RegisterForApplicationStateChanges(
        TouchKeyboardExperienceManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  LPVOID v4; // rbx
  __int64 (__fastcall *v5)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v12 = 0LL;
    v4 = ppv;
    v5 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v6 = v5(v4, &SID_ProcessLifetimeManagerControl, &GUID_48f4e2d1_eeba_461e_8f8f_6353da1a3aca, &v12);
    v3 = v6;
    if ( v6 >= 0 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v7,
        v8);
      TouchKeyboardExperienceManager::GetCurrentInputAppId((__int64)this, (__int64)v14);
      v9 = v14;
      if ( v14[3] >= 8uLL )
        v9 = (_QWORD *)v14[0];
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, unsigned __int64, char *))(*(_QWORD *)v12 + 24LL))(
              v12,
              v9,
              15LL,
              ((unsigned __int64)this + 160) & -(__int64)(this != 0LL),
              (char *)this + 280);
      v3 = v10;
      if ( v10 >= 0 )
      {
        std::wstring::_Tidy_deallocate((__int64)v14);
        v3 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x111B,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        std::wstring::_Tidy_deallocate((__int64)v14);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1113,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1110,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return v3;
}
