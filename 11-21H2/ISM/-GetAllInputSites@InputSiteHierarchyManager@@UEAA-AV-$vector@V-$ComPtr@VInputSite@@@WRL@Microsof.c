/*
 * XREFs of ?GetAllInputSites@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1801237D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180002FB4 (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall InputSiteHierarchyManager::GetAllInputSites(_QWORD *a1, _QWORD *a2)
{
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  __int64 *v6; // r8
  __int64 *v7; // rdx

  (*(void (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = (_QWORD **)a1[3];
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = i + 3;
    v7 = (__int64 *)a2[1];
    if ( v7 == (__int64 *)a2[2] )
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
        a2,
        v7,
        v6);
    }
    else
    {
      *v7 = *v6;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v7);
      a2[1] += 8LL;
    }
  }
  return a2;
}
