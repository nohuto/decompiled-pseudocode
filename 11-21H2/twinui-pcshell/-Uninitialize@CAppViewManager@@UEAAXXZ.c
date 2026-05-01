/*
 * XREFs of ?Uninitialize@CAppViewManager@@UEAAXXZ @ 0x18017C280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAppViewManager::Uninitialize(CAppViewManager *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 24) )
  {
    v2 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v2);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
           &v2) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, *((unsigned int *)this + 24));
      *((_DWORD *)this + 24) = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v2);
  }
}
