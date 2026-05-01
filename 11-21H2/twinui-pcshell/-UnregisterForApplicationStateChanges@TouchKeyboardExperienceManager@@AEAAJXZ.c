/*
 * XREFs of ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180181988
 * Callers:
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C02D0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_5bca6f87553ee4a307de3070de971dc8_::operator() @ 0x1801B0020 (_lambda_5bca6f87553ee4a307de3070de971dc8_--operator().c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1804696A8 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, SID *, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 70) )
    return 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v13 = 0LL;
  v6 = *((_QWORD *)this + 42);
  v7 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  v8 = v7(v6, &SID_ProcessLifetimeManagerControl, &GUID_48f4e2d1_eeba_461e_8f8f_6353da1a3aca, &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, *((unsigned int *)this + 70));
    *((_DWORD *)this + 70) = 0;
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147023728 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
      return 0LL;
    }
    v10 = v9;
    v11 = 4422LL;
  }
  else
  {
    v10 = (unsigned int)v8;
    v11 = 4414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return v9;
}
