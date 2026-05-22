/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@QEAA?A_TAEBV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@Z @ 0x18014CEDC
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x1800209E0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::emplace_back<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate> const &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 *result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate> const &>(
             a1,
             v4,
             a2);
  v5 = *a2;
  *v4 = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  result = a1[1];
  a1[1] = result + 1;
  return result;
}
