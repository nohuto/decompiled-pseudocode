/*
 * XREFs of ?v_InvokeElement@CGlyphButtonElement@@MEAA_NXZ @ 0x1804CC070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CGlyphButtonElement::v_InvokeElement(CGlyphButtonElement *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *((_QWORD *)this + 48);
  v3 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  if ( v3(v2, &GUID_b09cbbc9_d9b8_46fe_b3d5_2cd3bb04dda8, &v5) >= 0 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 40LL))(v5, (char *)this + 216);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return 1;
}
