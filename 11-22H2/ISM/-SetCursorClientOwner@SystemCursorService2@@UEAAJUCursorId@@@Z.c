/*
 * XREFs of ?SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z @ 0x180114E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801125C8 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??$_Try_emplace@_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x180112740 (--$_Try_emplace@_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_t.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x180114060 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 */

__int64 __fastcall SystemCursorService2::SetCursorClientOwner(float *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h]
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  v3 = (unsigned int)a2;
  if ( !SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)(a1 - 2), (unsigned int)a2) )
  {
    v4 = -2147418113;
    v5 = 191LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)v4);
    return v4;
  }
  v12 = v3;
  v7 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64,>(
                    (_QWORD *)a1 + 22,
                    (__int64)v10,
                    (unsigned __int8 *)&v12);
  v8 = *(_QWORD *)a1;
  v14 = *(_QWORD *)(v7 + 24);
  if ( !(*(unsigned __int8 (__fastcall **)(float *))(v8 + 96))(a1) )
  {
    v4 = -2147024809;
    v5 = 193LL;
    goto LABEL_3;
  }
  v9 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         a1 + 12,
         (__int64)v10,
         (unsigned __int8 *)&v14);
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 184LL) = HIDWORD(v13);
  return 0LL;
}
