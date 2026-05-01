/*
 * XREFs of ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x180568818
 * Callers:
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1802E12CC (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x180567400 (-ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(
        struct IUnknown **this,
        int (__fastcall ***a2)(struct IObservableItem *, GUID *, __int64 *))
{
  char v4; // si
  int (__fastcall *v5)(struct IObservableItem *, GUID *, __int64 *); // rbx
  struct IApplicationView *v6; // rdx
  ApplicationViewHelpers *v7; // rbx
  int (__fastcall *v8)(ApplicationViewHelpers *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  struct IUnknown *v10; // rcx
  const WCHAR *v11; // rbx
  LPCWSTR *v12; // rax
  HWND v13; // rax
  HWND v14; // rax
  HWND WindowForView; // rbx
  struct IUnknown *v17; // [rsp+78h] [rbp+48h] BYREF
  ApplicationViewHelpers *v18; // [rsp+80h] [rbp+50h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v19 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  if ( v5((struct IObservableItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v19) >= 0 )
  {
    (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v19 + 24LL))(v19, &v18);
    v4 = 1;
    if ( this[25] )
    {
      v17 = 0LL;
      v7 = v18;
      v8 = *(int (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)v18 + 80LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v17);
      if ( v8(v7, AddressOf) >= 0 )
        v4 = (unsigned int)SHIsSameObject(v17, this[25]) != 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
      if ( !v4 )
        goto LABEL_22;
    }
    v10 = this[26];
    if ( v10 )
    {
      if ( ((int (__fastcall *)(struct IUnknown *, ApplicationViewHelpers *, struct IUnknown **))v10->lpVtbl[1].QueryInterface)(
             v10,
             v18,
             &v17) < 0
        || !(_DWORD)v17 )
      {
        goto LABEL_18;
      }
      v4 = 1;
    }
    v11 = (const WCHAR *)this[31];
    if ( v11 && *v11 )
    {
      v12 = (LPCWSTR *)((__int64 (__fastcall *)(int (__fastcall ***)(struct IObservableItem *, GUID *, __int64 *)))(*a2)[3])(a2);
      if ( FindStringOrdinal(0x400000u, *v12, -1, v11, -1, 1) < 0 )
        goto LABEL_18;
      v4 = 1;
    }
    if ( !*((_BYTE *)this + 280)
      || (v13 = (HWND)ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v18,
                        v6),
          !GetPropW(v13, (LPCWSTR)0xA920)) )
    {
      if ( !*((_BYTE *)this + 282)
        || (v14 = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v18,
                          v6),
            !GetPropW(v14, (LPCWSTR)0xA921)) )
      {
        if ( *((_BYTE *)this + 281) )
        {
          WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v18,
                                  v6);
          if ( !GetPropW(WindowForView, (LPCWSTR)0xA920) )
            v4 = GetPropW(WindowForView, (LPCWSTR)0xA921) != 0LL ? v4 : 0;
        }
        goto LABEL_22;
      }
    }
LABEL_18:
    v4 = 0;
LABEL_22:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v18);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  return v4;
}
