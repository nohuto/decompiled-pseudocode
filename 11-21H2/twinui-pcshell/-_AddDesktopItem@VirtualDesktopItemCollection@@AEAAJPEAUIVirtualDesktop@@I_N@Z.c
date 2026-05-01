/*
 * XREFs of ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804A9824
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A9310 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopIt.c)
 *     ?VirtualDesktopCreated@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x1804A9530 (-VirtualDesktopCreated@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180233DCE (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x1804A8EC8 (--4-$ObservableProperty@I@@QEAAAEBIAEBI@Z.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804A8F2C (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804A9AF4 (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopItemCollection::_AddDesktopItem(
        VirtualDesktopItemCollection *this,
        struct IUnknown *a2,
        int a3,
        unsigned __int8 a4)
{
  int v4; // r15d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, struct IUnknown *, GUID *, struct IVirtualDesktopItem **); // rbx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  VirtualDesktopItemCollection *v12; // rcx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, struct IUnknown **); // rbx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  struct IVirtualDesktopItem *v20; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IVirtualDesktopItem *v23; // [rsp+70h] [rbp+30h] BYREF
  int v24; // [rsp+80h] [rbp+40h] BYREF

  v24 = a3;
  v4 = a4;
  v20 = 0LL;
  v7 = *((_QWORD *)this + 20);
  v8 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, GUID *, struct IVirtualDesktopItem **))(*(_QWORD *)v7 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  v9 = v8(v7, a2, &GUID_8335a836_e567_41a4_8778_62f004524ceb, &v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v20 + 48LL))(v20);
    ObservableProperty<unsigned int>::operator=(v11, &v24);
    VirtualDesktopItemCollection::_SetTitle(v12, v20);
    v21 = 0LL;
    v13 = *((_QWORD *)this + 21);
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v13 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    v15 = v14(v13, *((_QWORD *)this + 24), &v21);
    v10 = v15;
    if ( v15 >= 0 )
    {
      LOBYTE(v23) = (unsigned int)SHIsSameObject(v21, a2) != 0;
      v18 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v20 + 56LL))(v20);
      ObservableProperty<bool>::operator=(v18, &v23);
      v23 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      v10 = ObservableObjectArray::_AddItem(this, (__int64 *)&v23, 2 * v4);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
      if ( v10 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
        goto LABEL_9;
      }
      v16 = (unsigned int)v10;
      v17 = 97LL;
    }
    else
    {
      v16 = (unsigned int)v15;
      v17 = 94LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)v16);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v9);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v10;
}
