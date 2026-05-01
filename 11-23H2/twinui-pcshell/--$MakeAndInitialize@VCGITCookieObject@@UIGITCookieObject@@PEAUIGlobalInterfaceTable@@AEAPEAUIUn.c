/*
 * XREFs of ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x18013158C
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18013136C (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??0CGITCookieObject@@QEAA@XZ @ 0x180131650 (--0CGITCookieObject@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CGITCookieObject@@QEAAJPEAUIGlobalInterfaceTable@@PEAUIUnknown@@@Z @ 0x1801316E0 (-RuntimeClassInitialize@CGITCookieObject@@QEAAJPEAUIGlobalInterfaceTable@@PEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGITCookieObject,IGITCookieObject,IGlobalInterfaceTable *,IUnknown * &>(
        _QWORD *a1,
        struct IGlobalInterfaceTable **a2,
        struct IUnknown **a3)
{
  CGITCookieObject *v6; // rax
  CGITCookieObject *v7; // rbx
  int v8; // edi

  *a1 = 0LL;
  v6 = (CGITCookieObject *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = CGITCookieObject::CGITCookieObject(v6);
    v8 = CGITCookieObject::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(CGITCookieObject *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_243c720f_5a91_4b39_88bb_c16e6ec1d313,
             a1);
    if ( v7 )
      (*(void (__fastcall **)(CGITCookieObject *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
