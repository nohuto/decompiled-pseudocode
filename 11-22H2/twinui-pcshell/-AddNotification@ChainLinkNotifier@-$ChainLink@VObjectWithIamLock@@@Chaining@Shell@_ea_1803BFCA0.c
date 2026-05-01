/*
 * XREFs of ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@W4ChainLinkEventTypeInternal@23456@@Z @ 0x1803BFCA0
 * Callers:
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1803C38E8 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 * Callees:
 *     ??4?$ComPtr@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAV?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@Z @ 0x1803BF404 (--4-$ComPtr@V-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@Q.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rbx
  __int64 result; // rax

  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>>::operator=(
    (__int64 *)(a1 + 8),
    a2);
  v5 = a1 + 64;
  result = v5 + 16;
  while ( v5 != result )
  {
    if ( !*(_BYTE *)(v5 + 4) )
    {
      *(_DWORD *)v5 = a3;
      *(_BYTE *)(v5 + 4) = 1;
      return result;
    }
    v5 += 8LL;
  }
  return result;
}
