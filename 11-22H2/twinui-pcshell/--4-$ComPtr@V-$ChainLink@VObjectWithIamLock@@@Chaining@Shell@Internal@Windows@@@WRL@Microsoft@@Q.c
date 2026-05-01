/*
 * XREFs of ??4?$ComPtr@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAV?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@Z @ 0x1803BF404
 * Callers:
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x1803BFC1C (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@W4ChainLinkEventTypeInternal@23456@@Z @ 0x1803BFCA0 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@_ea_1803BFCA0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  return a1;
}
