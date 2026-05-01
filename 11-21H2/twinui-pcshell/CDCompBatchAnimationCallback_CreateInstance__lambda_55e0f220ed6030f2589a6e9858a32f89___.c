/*
 * XREFs of CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x1804C8A04
 * Callers:
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x1804C9760 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89__&_ @ 0x1804C8C8C (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89_(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v5; // esi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89____(
    &v7,
    a1);
  v4 = v7;
  if ( v7 )
    v5 = (**v7)(v7, &GUID_53204493_9170_4f30_be0e_211392a4618e, a2);
  else
    v5 = -2147024882;
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return v5;
}
