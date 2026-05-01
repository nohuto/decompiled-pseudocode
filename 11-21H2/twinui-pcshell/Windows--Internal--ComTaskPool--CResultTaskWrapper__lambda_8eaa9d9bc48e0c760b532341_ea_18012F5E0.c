/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea_____lambda_8eaa9d9bc48e0c760b532341ceadabea___ @ 0x18012F5E0
 * Callers:
 *     ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18012F4C0 (-NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea_____lambda_8eaa9d9bc48e0c760b532341ceadabea___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)a1 = off_18063A2F8;
  *(_QWORD *)(a1 + 40) = a2;
  return a1;
}
