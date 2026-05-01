/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1804A95A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x1804A8EC8 (--4-$ObservableProperty@I@@QEAAAEBIAEBI@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1804A99FC (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804A9AF4 (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopItemCollection::VirtualDesktopDestroyed(
        VirtualDesktopItemCollection *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rbp
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IVirtualDesktopItem **); // rdi
  __int64 (__fastcall *v11)(_QWORD, GUID *, struct IVirtualDesktopItem **); // rbx
  int v12; // eax
  __int64 v13; // rax
  VirtualDesktopItemCollection *v14; // rcx
  int v15; // [rsp+20h] [rbp-18h] BYREF
  struct IVirtualDesktopItem *v16[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    (__int64)a4);
  v6 = VirtualDesktopItemCollection::_RemoveDesktopItem((VirtualDesktopItemCollection *)((char *)this - 144), a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v15 = 0;
  if ( *((_QWORD *)this - 15) )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v16[0] = 0LL;
      v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IVirtualDesktopItem **))(*((_QWORD *)this - 16) + 8 * v9);
      v11 = **v10;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
      v12 = v11(v10, &GUID_8335a836_e567_41a4_8778_62f004524ceb, v16);
      v7 = v12;
      if ( v12 < 0 )
        break;
      v13 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v16[0] + 48LL))(v16[0]);
      ObservableProperty<unsigned int>::operator=(v13, &v15);
      VirtualDesktopItemCollection::_SetTitle(v14, v16[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
      v9 = (unsigned int)(v9 + 1);
      v15 = v9;
      if ( (unsigned __int64)(unsigned int)v9 >= *((_QWORD *)this - 15) )
        return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
    return v7;
  }
  return 0LL;
}
