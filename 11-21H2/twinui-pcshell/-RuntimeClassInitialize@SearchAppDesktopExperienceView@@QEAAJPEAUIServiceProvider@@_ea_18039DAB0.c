/*
 * XREFs of ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18039DAB0
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18039D9E8 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaLightingOnSeparateThread_26524487@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014DD70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaLightingOnSeparateThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VISearchAppExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180398530 (--4-$ComPtr@VISearchAppExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x18039FB20 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ISearchAppExperienceManagerNotification>::operator=((__int64 *)(a1 + 80), a3);
  v7 = *a4;
  *a4 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a1 + 88,
    v7);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaLightingOnSeparateThread_26524487>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaLightingOnSeparateThread_26524487>::GetImpl'::`2'::impl,
    1u,
    v8,
    v9);
  *(_DWORD *)(a1 + 180) = 1134559232;
  *(_DWORD *)(a1 + 184) = 1143209984;
  v16 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  v11 = v10(a2, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 24LL))(
            v16,
            26LL,
            a1 + 32,
            a1 + 216);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 24LL))(
              v16,
              1025LL,
              a1 + 32,
              a1 + 220);
      v12 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)(a1 + 104), a2);
        v11 = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 88))(*(_QWORD *)(a1 + 88), a1 + 56, 0LL);
        v12 = v11;
        if ( v11 >= 0 )
        {
          v12 = 0;
          goto LABEL_11;
        }
        v13 = 337LL;
      }
      else
      {
        v13 = 331LL;
      }
    }
    else
    {
      v13 = 330LL;
    }
  }
  else
  {
    v13 = 329LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v11);
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return v12;
}
