/*
 * XREFs of ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1801B3054
 * Callers:
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x1801B1394 (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B1780 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800D6FF4 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 */

__int64 __fastcall KeyboardModifierState::UpdateKeyModifierArray(__int64 a1, int a2, char a3)
{
  unsigned __int64 appended; // rax
  __int64 v7; // rcx
  int v9; // eax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v12, 4uLL);
  v7 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
         (_QWORD *)(a1 + 16),
         v10,
         &v12,
         appended)[1];
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 24);
  if ( v7 == *(_QWORD *)(a1 + 24) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keyboar"
               "dmodifierstate.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 20);
    if ( a3 )
    {
      ++v9;
      *(_DWORD *)(a1 + 80) |= a2;
    }
    else if ( v9 )
    {
      if ( !--v9 )
        *(_DWORD *)(a1 + 80) &= ~a2;
    }
    *(_DWORD *)(v7 + 20) = v9;
    return 0LL;
  }
}
