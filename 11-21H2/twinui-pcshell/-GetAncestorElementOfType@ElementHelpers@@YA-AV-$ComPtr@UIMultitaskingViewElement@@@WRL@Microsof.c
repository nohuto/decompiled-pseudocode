/*
 * XREFs of ?GetAncestorElementOfType@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@W4AnimationCoordinatorItemType@@@Z @ 0x1804C5080
 * Callers:
 *     ?ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804D9F90 (-ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem.c)
 *     ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804DA4A0 (-ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableIt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ElementHelpers::GetAncestorElementOfType(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  while ( *a1 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*a1 + 400LL))(*a1) != 6 )
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 24LL))(*a1, &v5);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=(a1, v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  return a1;
}
