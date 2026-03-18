/*
 * XREFs of ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x18002F914
 * Callers:
 *     ?MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x18002F890 (-MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z.c)
 *     ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x180267874 (-TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace@U?$pair@_KPEAVCCursorState@@@std@@@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@_KPEAVCCursorState@@@1@@Z @ 0x18002F9F4 (--$_Emplace@U-$pair@_KPEAVCCursorState@@@std@@@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$le.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x1800302F4 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator.c)
 *     ??4?$com_ptr_t@VCCursorState@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCursorState@@@Z @ 0x180030324 (--4-$com_ptr_t@VCCursorState@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCursorState@@@Z.c)
 *     ??0CCursorState@@QEAA@XZ @ 0x180030374 (--0CCursorState@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180198AAC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCursorManager::EnsureCursorState(
        CCursorManager *this,
        unsigned __int64 a2,
        struct CCursorState **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rdx
  CCursorState *v7; // rax
  CCursorState *v8; // rax
  const char *v9; // r9
  struct CCursorState *v10; // rbx
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct CCursorState *v16; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+28h] BYREF

  v17 = a2;
  v3 = 0;
  v16 = 0LL;
  if ( a2 )
  {
    std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Find_lower_bound<unsigned __int64>(
      &xmmword_1803D3988,
      v13,
      &v17);
    v6 = v14;
    if ( *(_BYTE *)(v14 + 25) || a2 < *(_QWORD *)(v14 + 32) )
      v6 = xmmword_1803D3988;
    if ( v6 == (_QWORD)xmmword_1803D3988 )
    {
      v7 = (CCursorState *)DefaultHeap::AllocClear(0x110uLL);
      if ( v7 )
        v8 = CCursorState::CCursorState(v7);
      else
        v8 = 0LL;
      wil::com_ptr_t<CCursorState,wil::err_returncode_policy>::operator=(&v16, v8);
      v10 = v16;
      if ( !v16 )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          (void *)0x2B,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
          v9);
      v12[0] = a2;
      v12[1] = v16;
      std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Emplace<std::pair<unsigned __int64,CCursorState *>>(
        &xmmword_1803D3988,
        v13,
        v12);
    }
    else
    {
      wil::com_ptr_t<CCursorState,wil::err_returncode_policy>::operator=(&v16, *(_QWORD *)(v6 + 40));
      v10 = v16;
    }
    *a3 = v10;
  }
  else
  {
    v3 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
      (const char *)0x80070057LL);
  }
  return v3;
}
