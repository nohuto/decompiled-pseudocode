/*
 * XREFs of ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804BA9A0
 * Callers:
 *     ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1804BF320 (-RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C3010 (-RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewElementBase::RemoveAllDescendants(CMultitaskingViewElementBase *this)
{
  __int64 i; // rdi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 3); i; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * i - 8);
    v3 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    LOBYTE(v4) = i == 1;
    (*(void (__fastcall **)(CMultitaskingViewElementBase *, __int64, __int64))(*(_QWORD *)this + 72LL))(this, v3, v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
}
