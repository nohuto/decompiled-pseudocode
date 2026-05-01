/*
 * XREFs of ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x1803BFC1C
 * Callers:
 *     ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x1803C00C4 (-AppendChainLinkInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJ.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1803C38E8 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 * Callees:
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1803BF3B4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIChainL.c)
 *     ??4?$ComPtr@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAV?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@Z @ 0x1803BF404 (--4-$ComPtr@V-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@Q.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 result; // rax

  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>>::operator=(
    (__int64 *)(a1 + 8),
    a2);
  for ( i = a1 + 16; ; i += 24LL )
  {
    v9 = i;
    if ( !*(_QWORD *)i )
      break;
    result = a1 + 40;
    if ( v9 == a1 + 40 )
      return result;
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=((__int64 *)i, a3);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=((__int64 *)(i + 8), a4);
  result = a5;
  *(_DWORD *)(i + 16) = a5;
  return result;
}
