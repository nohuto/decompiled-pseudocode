/*
 * XREFs of Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89__&_ @ 0x1804C8C8C
 * Callers:
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x1804C8A04 (CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_ @ 0x1804AA270 (_lambda_55e0f220ed6030f2589a6e9858a32f89_--_lambda_55e0f220ed6030f2589a6e9858a32f89_.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1804C8E40 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Mi.c)
 */

__int64 **__fastcall Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89____(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx

  *a1 = 0LL;
  v4 = (__int64 *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>(v4);
    *v5 = (__int64)off_18065F018;
    lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_(v5 + 2, a2);
    *((_DWORD *)v5 + 8) = 0;
    *((_DWORD *)v5 + 9) = 0;
    v5[5] = 0LL;
    *((_DWORD *)v5 + 12) = 0;
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    *a1 = v5;
  }
  return a1;
}
