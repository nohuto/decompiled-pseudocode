/*
 * XREFs of ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x18005F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800282C0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CImmersiveApp::ReconcileAutorotationPreferences(CImmersiveApp *this)
{
  char *v2; // rsi
  void (__fastcall *v3)(char *, GUID *, struct IUnknown **); // rbx
  void (__fastcall *v4)(char *, GUID *, struct IUnknown **); // rbx
  struct IUnknown *v5; // [rsp+48h] [rbp+28h] BYREF
  void *v6; // [rsp+50h] [rbp+30h] BYREF

  v2 = (char *)this - 64;
  v5 = 0LL;
  v3 = *(void (__fastcall **)(char *, GUID *, struct IUnknown **))(*((_QWORD *)this - 8) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  v3(v2, &GUID_00000000_0000_0000_c000_000000000046, &v5);
  LOBYTE(v3) = v5 != 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  if ( (_BYTE)v3 && (*((_BYTE *)this + 464) & 2) != 0 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
    v5 = 0LL;
    v4 = *(void (__fastcall **)(char *, GUID *, struct IUnknown **))(*(_QWORD *)v2 + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    v4(v2, &GUID_00000000_0000_0000_c000_000000000046, &v5);
    LOBYTE(v4) = (int)IAMPrivate_QueryObject(
                        v5,
                        &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                        &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                        &v6) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    if ( (_BYTE)v4 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 32LL))(v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  }
}
