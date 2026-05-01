/*
 * XREFs of ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804E8C74
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1804E7450 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z @ 0x18031F8BC (-GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Colle.c)
 *     ?GetWindowingPolicy@ViewSizePreferenceHelpers@@YA?AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z @ 0x1804E8214 (-GetWindowingPolicy@ViewSizePreferenceHelpers@@YA-AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewSizePreferenceHelpers::SetViewValueSet(
        __int64 (__fastcall ***this)(ViewSizePreferenceHelpers *, GUID *, __int64 *),
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, struct IUnknown *, int *); // rdi
  int v9; // eax
  HWND *v10; // r9
  int SourceViewSizePreferenceFromPropertySet; // eax
  unsigned int v12; // edi
  __int64 (__fastcall *v13)(ViewSizePreferenceHelpers *, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v17[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  HWND v19[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF

  v18 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  v5 = RoCreatePropertySetSerializer(&v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)v17 = 0LL;
    v7 = v18;
    v8 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, int *))(*(_QWORD *)v18 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v17);
    v9 = v8(v7, a2, v17);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x189,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v9);
LABEL_16:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v17);
      goto LABEL_17;
    }
    v19[0] = 0LL;
    SourceViewSizePreferenceFromPropertySet = ViewSizePreferenceHelpers::GetSourceViewSizePreferenceFromPropertySet(
                                                (ViewSizePreferenceHelpers *)a2,
                                                (struct Windows::Foundation::Collections::IPropertySet *)&v21,
                                                (enum APPLICATION_VIEW_SIZE_PREFERENCE *)v19,
                                                v10);
    if ( SourceViewSizePreferenceFromPropertySet < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18D,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)SourceViewSizePreferenceFromPropertySet);
    v12 = (unsigned int)v19[0];
    if ( (unsigned int)ViewSizePreferenceHelpers::GetWindowingPolicy(v19[0]) != 196609 )
      v12 = 0;
    v22 = 0LL;
    v13 = **this;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v14 = v13((ViewSizePreferenceHelpers *)this, &GUID_09e04bcd_1f92_43de_a3f2_f9afc6922077, &v22);
    v6 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
              v22,
              v12,
              0LL,
              0LL,
              *(_QWORD *)v17);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v6 = 0;
        goto LABEL_15;
      }
      v15 = 410LL;
    }
    else
    {
      v15 = 405LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v14);
LABEL_15:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v5);
LABEL_17:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  return v6;
}
