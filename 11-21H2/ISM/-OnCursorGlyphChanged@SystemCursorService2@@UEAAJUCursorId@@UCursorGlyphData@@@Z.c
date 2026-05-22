/*
 * XREFs of ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800ECF50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18000C0C0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800B5CC8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800EAF2C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800EC8A0 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800EDC6C (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorService2::OnCursorGlyphChanged(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  SystemCursor2 *v13; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-28h]
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v17; // [rsp+6Ch] [rbp+14h]
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = HIDWORD(a2);
  v5 = (unsigned int)a2;
  if ( !SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)a1, (unsigned int)a2) )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)0x8000FFFFLL);
    return v6;
  }
  v18 = v5;
  *(_QWORD *)v12 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                            (float *)(a1 + 184),
                                            (__int64)&v13,
                                            &v18)
                             + 24LL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 96LL))(a1 + 8) )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
           (float *)(a1 + 56),
           (__int64)v15,
           (unsigned __int8 *)v12);
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
      &v13,
      (_QWORD *)(*(_QWORD *)v8 + 24LL));
    if ( *((_QWORD *)v13 + 23) != v17 )
    {
      v6 = -2147024891;
      v9 = 2147942405LL;
      v10 = 321LL;
      goto LABEL_9;
    }
    v11 = SystemCursor2::SetShape(v13, a3, 0);
    v6 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 322LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
        (const char *)v9);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      return v6;
    }
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  return 0LL;
}
