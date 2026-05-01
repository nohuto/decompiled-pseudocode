/*
 * XREFs of ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18001D8CC
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18001DF70 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x18001D94C (-GetNextChainLinks@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEA.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___ @ 0x1803BE6C4 (Windows--Internal--ComTaskPool--QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1803BEEF0 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x1803BF7BC (--_GChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAX.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1803C38E8 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::_RemoveFromChain(CImmersiveApp *this)
{
  char *v1; // rdi
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  _DWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v1 = (char *)this + 176;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  if ( (int)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::GetNextChainLinks(v1, &v6) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 56LL))(v6, &v5) >= 0
    && v5 )
  {
    v2 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v2;
    if ( v2 )
      v3 = (_DWORD *)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier(v2);
    else
      v3 = 0LL;
    if ( v3 )
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(v1, v3);
      *v3 = 1;
      v7 = v3;
      if ( (int)Windows::Internal::ComTaskPool::QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___(v4, &v7) < 0 )
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(v3);
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
}
