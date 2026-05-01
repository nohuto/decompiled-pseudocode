/*
 * XREFs of ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1804A99FC
 * Callers:
 *     ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1804A95A0 (-VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDeskto.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A8C5C (--$As@UIVirtualDesktopItemInternal@@@-$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804B6B40 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopItemCollection::_RemoveDesktopItem(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktop *a2)
{
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rbp
  int v6; // eax
  unsigned int v7; // ebx
  struct IVirtualDesktop *v8; // rbx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v5 = &v4[*((_QWORD *)this + 3)];
  while ( 1 )
  {
    if ( v4 == v5 )
      return 2147942487LL;
    v12 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(v4, &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v10 = 105LL;
      goto LABEL_10;
    }
    v8 = *(struct IVirtualDesktop **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 72LL))(v12, &v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    if ( v8 == a2 )
      break;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    ++v4;
  }
  v6 = ObservableObjectArray::_RemoveItem(this, v4, 1LL);
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_11;
  v10 = 108LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v7;
}
