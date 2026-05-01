/*
 * XREFs of ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x180130890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall TabletModeCoverWindow::SetSite(HWND *this, struct IUnknown *a2)
{
  char v4; // al
  bool v5; // bl
  void (__fastcall *v7)(TabletModeCoverWindow *, GUID *, __int64 *); // rbx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a2 )
  {
    v8 = 0LL;
    v7 = (void (__fastcall *)(TabletModeCoverWindow *, GUID *, __int64 *))*((_QWORD *)*this + 4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    v7((TabletModeCoverWindow *)this, &GUID_00000000_0000_0000_c000_000000000046, &v8);
    v4 = 3;
    if ( v8 )
      v5 = 1;
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  if ( v5 )
  {
    (*(void (__fastcall **)(HWND, HWND, _QWORD))(*(_QWORD *)this[24] + 24LL))(this[24], this[13], 0LL);
    DestroyWindow(this[13]);
    this[13] = 0LL;
  }
  return CWRLObjectWithGITSite::SetSite((CWRLObjectWithGITSite *)this, a2);
}
