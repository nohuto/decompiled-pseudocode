/*
 * XREFs of ?v_DismissView@CPPIAllUpViewHost@@MEAAXXZ @ 0x1805640E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPPIAllUpViewHost::v_DismissView(CPPIAllUpViewHost *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = (__int64 *)((char *)this + 144);
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v1);
  }
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 19);
  }
}
