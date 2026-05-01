/*
 * XREFs of Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0___ @ 0x18042B750
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___ @ 0x18042BB94 (MakeXamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18041CEA4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::_lambda_baaea9c5454d5217874bd274f7881db0_ @ 0x18042D064 (_lambda_baaea9c5454d5217874bd274f7881db0_--_lambda_baaea9c5454d5217874bd274f7881db0_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>((__int64)v4);
    *v5 = off_1807AE1E8;
    v5[4] = off_1807AE178;
    lambda_baaea9c5454d5217874bd274f7881db0_::_lambda_baaea9c5454d5217874bd274f7881db0_(v5 + 6, a2);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
