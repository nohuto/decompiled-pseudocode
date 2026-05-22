/*
 * XREFs of ??0SystemCursor2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@PEBUCursorDeviceInfo@@@Z @ 0x1800EB33C
 * Callers:
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@@?$_Ref_count_obj2@VSystemCursor2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@$$QEAPEAUCursorDeviceInfo@@@Z @ 0x1800EA84C (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@@-$_Ref_count_obj2@VSystem.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursorShape2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@1@@Z @ 0x1800EB29C (--0-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursorShape2@@@std@@V-$_Uhash_compare@_KU-$has.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursor2::SystemCursor2(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rcx
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+54h] [rbp+1Ch]

  *(_QWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 100;
  *(_BYTE *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 32512LL;
  *(_QWORD *)(a1 + 48) = 32512LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( a2[1] )
  {
    *(_QWORD *)(a1 + 56) = *a2;
    v5 = a2[1];
    *(_QWORD *)(a1 + 64) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  }
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v6 = a1 + 88;
  v10 = HIDWORD(v6);
  v9 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>,0>>(
    v6,
    &v9);
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_WORD *)(a1 + 176) = 257;
  *(_BYTE *)(a1 + 178) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 192) = 1065353216;
  v7 = (std::_Ref_count_base *)a2[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
