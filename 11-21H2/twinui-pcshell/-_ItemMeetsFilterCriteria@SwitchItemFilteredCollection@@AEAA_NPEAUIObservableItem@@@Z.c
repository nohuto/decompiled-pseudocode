/*
 * XREFs of ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x1804ABDB0
 * Callers:
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180232C8C (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804AA840 (-ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(
        SwitchItemFilteredCollection *this,
        int (__fastcall ***a2)(struct IObservableItem *, GUID *, __int64 *))
{
  char v4; // si
  int (__fastcall *v5)(struct IObservableItem *, GUID *, __int64 *); // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  ApplicationViewHelpers *v8; // rbx
  int (__fastcall *v9)(ApplicationViewHelpers *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  const WCHAR *v13; // rbx
  LPCWSTR *v14; // rax
  struct IApplicationView *v15; // rdx
  HWND v16; // rax
  HWND v17; // rax
  HWND WindowForView; // rbx
  struct IUnknown *v20; // [rsp+78h] [rbp+48h] BYREF
  ApplicationViewHelpers *v21; // [rsp+80h] [rbp+50h] BYREF
  __int64 v22; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v22 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  if ( v5((struct IObservableItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v22) >= 0 )
  {
    (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v22 + 24LL))(v22, &v21);
    v4 = 1;
    if ( !*((_QWORD *)this + 25) )
      goto LABEL_6;
    v20 = 0LL;
    v8 = v21;
    v9 = *(int (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)v21 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v20);
    if ( v9(v8, AddressOf) >= 0 )
      v4 = (unsigned int)SHIsSameObject(v20, *((struct IUnknown **)this + 25)) != 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    if ( v4 )
    {
LABEL_6:
      v11 = *((_QWORD *)this + 26);
      if ( v11 )
      {
        if ( (*(int (__fastcall **)(__int64, ApplicationViewHelpers *, struct IUnknown **))(*(_QWORD *)v11 + 24LL))(
               v11,
               v21,
               &v20) < 0
          || (v4 = 1, !(_DWORD)v20) )
        {
          v4 = 0;
        }
      }
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
      0,
      v6,
      v7);
    if ( v4 )
    {
      v13 = (const WCHAR *)*((_QWORD *)this + 31);
      if ( v13 )
      {
        if ( *v13 )
        {
          v14 = (LPCWSTR *)((__int64 (__fastcall *)(int (__fastcall ***)(struct IObservableItem *, GUID *, __int64 *)))(*a2)[3])(a2);
          v4 = FindStringOrdinal(0x400000u, *v14, -1, v13, -1, 1) >= 0;
        }
      }
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl,
      1u,
      3u,
      v12);
    if ( v4 )
    {
      if ( *((_BYTE *)this + 280)
        && (v16 = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v21,
                          v15),
            GetPropW(v16, (LPCWSTR)0xA920))
        || *((_BYTE *)this + 282)
        && (v17 = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v21,
                          v15),
            GetPropW(v17, (LPCWSTR)0xA921)) )
      {
        v4 = 0;
      }
      else if ( *((_BYTE *)this + 281) )
      {
        WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v21,
                                v15);
        if ( !GetPropW(WindowForView, (LPCWSTR)0xA920) )
          v4 = GetPropW(WindowForView, (LPCWSTR)0xA921) != 0LL ? v4 : 0;
      }
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return v4;
}
