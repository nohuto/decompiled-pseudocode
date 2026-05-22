/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180110CC0
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf89a77415____long_&__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___ @ 0x1800A1BC8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_21b91f8.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407____long_&__lambda_90b75ecb1bcd1b4e7d5d99e276904407___ @ 0x1800A1C68 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_90b75ec.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___ @ 0x1800A1DC4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_21b91f8ed7e4c7f4d9826ebf89a77415.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_90b75ecb1bcd1b4e7d5d99e276904407___ @ 0x1800A1EA4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_90b75ecb1bcd1b4e7d5d99e276904407.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18007F610 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r11

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
