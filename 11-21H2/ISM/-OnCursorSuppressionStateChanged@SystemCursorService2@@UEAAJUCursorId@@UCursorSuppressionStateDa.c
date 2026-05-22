/*
 * XREFs of ?OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateData@@@Z @ 0x1800ED190
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18000C0C0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800EAF2C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800EC8A0 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 *     ?SetSuppressionState@SystemCursor2@@QEAAJ_N@Z @ 0x1800EDF78 (-SetSuppressionState@SystemCursor2@@QEAAJ_N@Z.c)
 */

__int64 __fastcall SystemCursorService2::OnCursorSuppressionStateChanged(__int64 a1, unsigned int a2, bool a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  if ( !SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)a1, a2) )
  {
    v6 = -2147418113;
    v7 = 300LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v14 = v3;
  v9 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                (float *)(a1 + 184),
                                (__int64)v12,
                                &v14)
                 + 24LL);
  v10 = *(_QWORD *)(a1 + 8);
  v15 = v9;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v10 + 96))(a1 + 8) )
  {
    v11 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
            (float *)(a1 + 56),
            (__int64)v12,
            (unsigned __int8 *)&v15);
    v6 = SystemCursor2::SetSuppressionState(*(SystemCursor2 **)(*(_QWORD *)v11 + 24LL), a3);
    if ( v6 < 0 )
    {
      v7 = 305LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
