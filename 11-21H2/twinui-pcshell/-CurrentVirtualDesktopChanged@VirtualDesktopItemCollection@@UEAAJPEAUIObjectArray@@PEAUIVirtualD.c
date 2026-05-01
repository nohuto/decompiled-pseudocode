/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1804A9020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A8C5C (--$As@UIVirtualDesktopItemInternal@@@-$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804A8F2C (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopItemCollection::CurrentVirtualDesktopChanged(
        VirtualDesktopItemCollection *this,
        struct IObjectArray *a2,
        struct IUnknown *a3,
        struct IUnknown *a4)
{
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // rsi
  int v9; // eax
  unsigned int v10; // ebx
  struct IUnknown **v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  struct IUnknown **v15; // rax
  int v16; // ebx
  char v18[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    (__int64)a4);
  v7 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this - 16);
  v8 = &v7[*((_QWORD *)this - 15)];
  while ( 1 )
  {
    if ( v7 == v8 )
      return 0LL;
    v19 = 0LL;
    v9 = Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(v7, (__int64 *)&v19);
    v10 = v9;
    if ( v9 < 0 )
      break;
    v11 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v19 + 72))(v19, &v20);
    v12 = SHIsSameObject(*v11, a3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
    v13 = *v19;
    if ( v12 )
    {
      v18[0] = 0;
      v14 = (*(__int64 (__fastcall **)(__int64 *))(v13 + 56))(v19);
    }
    else
    {
      v15 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 72))(v19, &v21);
      v16 = SHIsSameObject(*v15, a4);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
      if ( !v16 )
        goto LABEL_8;
      v18[0] = 1;
      v14 = (*(__int64 (__fastcall **)(__int64 *))(*v19 + 56))(v19);
    }
    ObservableProperty<bool>::operator=(v14, v18);
LABEL_8:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    ++v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  return v10;
}
