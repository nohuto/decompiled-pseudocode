/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___ @ 0x1806188AC
 * Callers:
 *     ?Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z @ 0x180618F98 (-Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___::CAnimationCallbackHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___ @ 0x1806189FC (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lamb.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v5; // rax
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v9; // edi
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  *a4 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___::CAnimationCallbackHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___(
                                                               v5,
                                                               v6,
                                                               &v11,
                                                               0LL);
    v8 = v7;
    if ( v7 )
    {
      v9 = (**v7)(v7, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
      goto LABEL_6;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v9 = -2147024882;
LABEL_6:
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  return v9;
}
