/*
 * XREFs of ?GetAllInputSites@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x18014C3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18014BC14 (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteHierarchyManager::GetAllInputSites(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // r14
  _QWORD **v5; // rdi
  _QWORD *i; // rbx
  __int64 *v7; // r8

  v4 = 0LL;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = (_QWORD **)a1[3];
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = i + 3;
    if ( v4 == *(__int64 **)(a2 + 16) )
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
        (__int64 **)a2,
        v4,
        v7);
    }
    else
    {
      *v4 = *v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v4);
      *(_QWORD *)(a2 + 8) += 8LL;
    }
    v4 = *(__int64 **)(a2 + 8);
  }
  return a2;
}
