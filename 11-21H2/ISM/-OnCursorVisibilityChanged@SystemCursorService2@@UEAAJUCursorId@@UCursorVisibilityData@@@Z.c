/*
 * XREFs of ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800ED270
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
 *     ?GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ @ 0x1800ECBD0 (-GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800EDAD0 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorService2::OnCursorVisibilityChanged(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  SystemCursor2 *v10; // rcx
  char EffectiveVisibiltyState; // al
  SystemCursor2 *v12; // rcx
  char v13; // dl
  int v14; // eax
  int v15[2]; // [rsp+20h] [rbp-38h] BYREF
  SystemCursor2 *v16; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v17; // [rsp+30h] [rbp-28h]
  _BYTE v18[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v20; // [rsp+6Ch] [rbp+14h]
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v20 = HIDWORD(a2);
  v5 = (unsigned int)a2;
  if ( !SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)a1, (unsigned int)a2) )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)0x8000FFFFLL);
    return v6;
  }
  v21 = v5;
  *(_QWORD *)v15 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                            (float *)(a1 + 184),
                                            (__int64)&v16,
                                            &v21)
                             + 24LL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 96LL))(a1 + 8) )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
           (float *)(a1 + 56),
           (__int64)v18,
           (unsigned __int8 *)v15);
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
      &v16,
      (_QWORD *)(*(_QWORD *)v8 + 24LL));
    if ( *((_QWORD *)v16 + 23) != v20 )
    {
      v6 = -2147024891;
      v9 = 289LL;
      goto LABEL_10;
    }
    SystemCursor2::GetEffectiveVisibiltyState(v16);
    *((_BYTE *)v10 + 177) = a3;
    EffectiveVisibiltyState = SystemCursor2::GetEffectiveVisibiltyState(v10);
    if ( v13 != EffectiveVisibiltyState )
    {
      v14 = SystemCursor2::SetEffectiveVisibility(v12, EffectiveVisibiltyState);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)(unsigned int)v14);
        v9 = 290LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)v6);
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
        return v6;
      }
    }
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
  }
  return 0LL;
}
