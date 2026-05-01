/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x1804C8B08
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x1804C8AA4 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333a.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x1804C8DCC (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lamb.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v11; // edi

  *a4 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___(
                                                               v7,
                                                               v8,
                                                               a2,
                                                               a3);
    v10 = v9;
    if ( v9 )
    {
      v11 = (**v9)(v9, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
      goto LABEL_6;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v11 = -2147024882;
LABEL_6:
  if ( v10 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v10)[2])(v10);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a2);
  return v11;
}
