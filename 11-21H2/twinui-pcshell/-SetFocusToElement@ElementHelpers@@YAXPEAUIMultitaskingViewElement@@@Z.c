/*
 * XREFs of ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x1804C5528
 * Callers:
 *     ?KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804C6AC0 (-KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x1804CD180 (-Invoke@AccessibleElementBase@@UEAAJXZ.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1804DA13C (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ElementHelpers::SetFocusToElement(ElementHelpers *this, struct IMultitaskingViewElement *a2)
{
  ElementHelpers *v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // [rsp+30h] [rbp+10h] BYREF
  ElementHelpers *v5; // [rsp+38h] [rbp+18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF

  v2 = this;
  v5 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
  (*(void (__fastcall **)(ElementHelpers *, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v4);
  while ( v4 )
  {
    (*(void (__fastcall **)(__int64, ElementHelpers *))(*(_QWORD *)v4 + 288LL))(v4, v2);
    Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)&v5, &v4);
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v6);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=(&v4, v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
    v2 = v5;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
}
