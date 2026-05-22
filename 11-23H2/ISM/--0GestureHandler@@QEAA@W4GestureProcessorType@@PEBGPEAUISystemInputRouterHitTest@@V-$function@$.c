/*
 * XREFs of ??0GestureHandler@@QEAA@W4GestureProcessorType@@PEBGPEAUISystemInputRouterHitTest@@V?$function@$$A6AXPEAVGestureHandler@@W4GestureCompletedReason@@@Z@std@@@Z @ 0x180156564
 * Callers:
 *     std::_Ref_count_obj2_GestureHandler_::_Ref_count_obj2_GestureHandler__enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x18005FEAC (std--_Ref_count_obj2_GestureHandler_--_Ref_count_obj2_GestureHandler__enum_GestureProcessorType_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GestureHandler::GestureHandler(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rsi
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  v7 = a1 + 32;
  *(_QWORD *)(a1 + 88) = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a5 + 56);
  if ( v8 )
    *(_QWORD *)(v7 + 56) = (**v8)(v8, v7);
  *(_QWORD *)(a1 + 96) = a4;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)(a1 + 96));
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = 0LL;
  *(_OWORD *)(a1 + 168) = 0LL;
  *(_OWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 1LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_BYTE *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_OWORD *)(a1 + 256) = 0LL;
  v10 = *(_QWORD *)(a5 + 56);
  if ( v10 )
  {
    LOBYTE(v9) = v10 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v9);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return a1;
}
