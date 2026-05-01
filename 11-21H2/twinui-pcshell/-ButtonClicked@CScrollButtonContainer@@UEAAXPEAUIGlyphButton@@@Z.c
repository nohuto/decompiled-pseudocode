/*
 * XREFs of ?ButtonClicked@CScrollButtonContainer@@UEAAXPEAUIGlyphButton@@@Z @ 0x1804D3A70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollButtonContainer::ButtonClicked(CScrollButtonContainer *this, struct IUnknown *a2)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v4 = *((_QWORD *)this + 27);
  v5 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  if ( v5(v4, &GUID_f85ba9ec_771f_4806_ba39_f860056371e5, &v6) >= 0 )
  {
    if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 25)) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, 2 * (*((_DWORD *)this + 6) & 1u) + 1);
    }
    else if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 26)) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, 2 * (*((_DWORD *)this + 6) & 1u) + 2);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
}
