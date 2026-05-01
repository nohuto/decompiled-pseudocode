/*
 * XREFs of ?SetFocused@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1804C7330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1804BAC60 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopContainerElement::SetFocused(CVirtualDesktopContainerElement *this, char a2)
{
  void (__fastcall *v3)(CVirtualDesktopContainerElement *, _QWORD); // rbx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) )
  {
    if ( !*((_QWORD *)this + 21) )
    {
      v3 = *(void (__fastcall **)(CVirtualDesktopContainerElement *, _QWORD))(*(_QWORD *)this + 288LL);
      v4 = (_QWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, __int64 *, _QWORD, __int64, _DWORD))(*(_QWORD *)this + 272LL))(
                       this,
                       &v5,
                       0LL,
                       7LL,
                       0);
      v3(this, *v4);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
    }
  }
}
