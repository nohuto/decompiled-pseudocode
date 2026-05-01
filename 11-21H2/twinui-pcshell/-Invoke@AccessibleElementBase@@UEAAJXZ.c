/*
 * XREFs of ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x1804CD180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x1804C5528 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804CD8F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::Invoke(AccessibleElementBase *this)
{
  AccessibleElementBase *v1; // rbx
  int Element; // ebx
  ElementHelpers *v3; // rbx
  struct IMultitaskingViewElement *v4; // rdx
  __int64 *v5; // rax
  ElementHelpers *v7; // [rsp+30h] [rbp+10h] BYREF
  ElementHelpers *v8; // [rsp+38h] [rbp+18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF

  v7 = 0LL;
  v1 = (AccessibleElementBase *)((char *)this - 24);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  Element = AccessibleElementBase::_GetElement(v1, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, (void **)&v7);
  if ( Element >= 0 )
  {
    v3 = v7;
    v8 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    while ( v3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(ElementHelpers *, _QWORD))(*(_QWORD *)v3 + 160LL))(v3, 0LL) )
      {
        ElementHelpers::SetFocusToElement(v3, v4);
        break;
      }
      v5 = (__int64 *)(*(__int64 (__fastcall **)(ElementHelpers *, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v9);
      Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)&v8, v5);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
      v3 = v8;
    }
    (*(void (__fastcall **)(ElementHelpers *))(*(_QWORD *)v7 + 312LL))(v7);
    Element = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  return (unsigned int)Element;
}
