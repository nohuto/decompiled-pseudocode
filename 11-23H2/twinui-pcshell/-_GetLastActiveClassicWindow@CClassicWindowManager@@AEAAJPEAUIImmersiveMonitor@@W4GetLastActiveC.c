/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x18004E3EC
 * Callers:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x18004E33C (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4.c)
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1803A8F00 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800117D4 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004E5DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastAc.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 *a4)
{
  struct IUnknown *v4; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  bool v10; // si
  HWND v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int (__fastcall *v14)(__int64, _QWORD, _QWORD, struct IUnknown **); // rdi
  unsigned int v15; // eax
  HWND v16; // rax
  CApplicationManagerUtility *v18; // rax
  HWND v19; // rdx
  int (__fastcall *v20)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  unsigned int v22; // [rsp+30h] [rbp-28h]
  int v23; // [rsp+34h] [rbp-24h] BYREF
  int pvAttribute; // [rsp+38h] [rbp-20h] BYREF
  __int64 v25; // [rsp+40h] [rbp-18h] BYREF
  __int64 v26; // [rsp+48h] [rbp-10h]
  struct IUnknown *v27; // [rsp+A0h] [rbp+48h] BYREF
  struct IUnknown *v28; // [rsp+A8h] [rbp+50h]
  int v29; // [rsp+B0h] [rbp+58h]
  __int64 *v30; // [rsp+B8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v4 = a2;
  *a4 = 0LL;
  v22 = -2147024809;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = v6;
  v8 = 0LL;
  if ( !v6 )
    return v22;
  while ( 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v8);
    v25 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
    v10 = 1;
    if ( !v4 )
      goto LABEL_3;
    v27 = 0LL;
    v20 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v27);
    if ( v20(v9, AddressOf) >= 0
      && !(unsigned int)SHIsSameObject(v28, v27)
      && (*(int (__fastcall **)(_QWORD, struct IUnknown *, int *))(**(_QWORD **)(a1 + 264) + 80LL))(
           *(_QWORD *)(a1 + 264),
           v27,
           &v23) >= 0 )
    {
      v10 = v23 == 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
    if ( v10 )
    {
LABEL_3:
      v11 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
      if ( IsIconic(v11)
        || (v13 = *(_QWORD *)(a1 + 280), (v26 = v13) != 0)
        && (LODWORD(v27) = 0,
            v14 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, struct IUnknown **))(*(_QWORD *)v13 + 48LL),
            v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9),
            v14(v26, v15, 0LL, &v27) >= 0)
        && (_DWORD)v27 == 1 )
      {
        v10 = 0;
      }
    }
    LOBYTE(v12) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SkipCloakedWindowsWhenFallingBackToLastActiveWindow>::GetImpl'::`2'::impl,
      v12);
    if ( v29 != 1
      || (v16 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9),
          DwmGetWindowAttribute(v16, 0xEu, &pvAttribute, 4u) < 0)
      || !pvAttribute )
    {
      if ( v10 )
        break;
    }
LABEL_25:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    if ( ++v8 >= v6 )
      goto LABEL_13;
    v4 = v28;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 152LL))(v9) )
  {
    v18 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    if ( !CApplicationManagerUtility::IsValidAndVisibleWindow(v18, v19) )
    {
      v7 = v8;
      goto LABEL_25;
    }
  }
  v25 = 0LL;
  *v30 = v9;
  v22 = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_13:
  if ( v7 != v6 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(a1 + 184) + 16LL))(a1 + 184, v7);
  return v22;
}
