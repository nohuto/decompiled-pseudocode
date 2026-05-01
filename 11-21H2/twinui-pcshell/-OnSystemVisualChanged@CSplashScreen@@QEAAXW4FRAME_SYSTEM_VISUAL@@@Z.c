/*
 * XREFs of ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180070404
 * Callers:
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180070364 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0001@@W4GHOST_STATUS@@@Z @ 0x180190A58 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180166A30 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x180167C4C (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--CAsyncCallbackWithLambda_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSplashScreen::OnSystemVisualChanged(__int64 a1, volatile int *a2)
{
  signed __int64 v3; // rax
  int v4; // r9d
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  void *v8; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  void *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)a2 <= 1 && ((_DWORD)a2 != 1) != *(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = (_DWORD)a2 != 1;
    if ( (_DWORD)a2 != 1 )
    {
      v9[0] = a1;
      v3 = *(_QWORD *)(a1 + 64);
      v4 = 0x7FFFFFFF;
      while ( v3 >= 0 )
      {
        if ( (_DWORD)v3 != 0x7FFFFFFF )
        {
          v5 = v3;
          v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v3 + 1, v3);
          if ( v5 != v3 )
            continue;
        }
        goto LABEL_9;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v3 + 16), a2);
LABEL_9:
      v10 = a1;
      v6 = *(_QWORD *)(a1 + 64);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != v4 )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_13;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), a2);
LABEL_13:
      v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
        v8 = (void *)CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216____::CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216____(
                       v8,
                       &v10);
      v11 = v8;
      if ( v8 )
      {
        if ( (*(int (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 120) + 232LL))(*(_QWORD *)(a1 + 120), v8) >= 0 )
          *(_BYTE *)(a1 + 129) = 1;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
      Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(v9);
    }
  }
}
