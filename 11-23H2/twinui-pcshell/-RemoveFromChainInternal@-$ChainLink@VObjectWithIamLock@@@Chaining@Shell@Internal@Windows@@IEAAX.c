/*
 * XREFs of ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1803C38E8
 * Callers:
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18001D8CC (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1803C37FC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@0@@Z @ 0x1802D0C58 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x1803BFC1C (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@W4ChainLinkEventTypeInternal@23456@@Z @ 0x1803BFCA0 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@_ea_1803BFCA0.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rbp
  __int64 *v4; // rdi
  __int64 v6; // r8

  v2 = *(__int64 **)(a1 + 40);
  v4 = *(__int64 **)(a1 + 32);
  if ( v2 - v4 )
  {
    while ( v4 != v2 )
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        a2,
        a1,
        *v4++,
        a1,
        0);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(a2, a1, 2);
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a2,
      a1,
      v6,
      a1,
      1u);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(a2, a1, 1);
    ++*(_DWORD *)(a1 + 64);
    *(_BYTE *)(a1 + 80) = 1;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISnappedWindow>>>(
    *(__int64 **)(a1 + 32),
    *(__int64 **)(a1 + 40));
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 56));
}
