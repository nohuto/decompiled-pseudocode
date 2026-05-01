/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::Invoke @ 0x1802F6A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180030348 (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::Invoke(
        __int64 a1)
{
  signed int Glom; // eax
  unsigned int v2; // ebx

  Glom = CAppViewManager::_TransferAllWindowsToNextGlom(
           *(_QWORD *)(a1 + 16),
           *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
           *(_QWORD *)(a1 + 32),
           0xFFFFFFFE);
  v2 = Glom;
  if ( Glom < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(Glom);
  return v2;
}
