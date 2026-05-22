/*
 * XREFs of ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x180105AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180103A88 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??$_Try_emplace@_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x180103C00 (--$_Try_emplace@_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_t.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x180105520 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180106F30 (-erase@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-.c)
 *     ?SuppressForDeviceDepartureImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x1801588F0 (-SuppressForDeviceDepartureImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 */

__int64 __fastcall SystemCursorService2::OnCursorDestroyed(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  CursorSuppressionProcessor *v9; // rcx
  __int64 v10; // rdi
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)a1, a2) )
  {
    v5 = a1 + 184;
    v13 = v3;
    v6 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64,>(
                                  (_QWORD *)(a1 + 184),
                                  (__int64)v12,
                                  (unsigned __int8 *)&v13)
                   + 24LL);
    v7 = *(_QWORD *)(a1 + 8);
    v14 = v6;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(v7 + 96))(a1 + 8) )
    {
      v8 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
             (float *)(a1 + 56),
             (__int64)v12,
             (unsigned __int8 *)&v14);
      v10 = *(_QWORD *)v8;
      if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 24LL) + 16LL) && CursorSuppressionProcessor::s_processor )
        CursorSuppressionProcessor::SuppressForDeviceDepartureImpl(v9, a2);
      *(_QWORD *)(*(_QWORD *)(v10 + 24) + 184LL) = 0LL;
    }
    v13 = v3;
    std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::erase(
      v5,
      &v13);
  }
  return 0LL;
}
