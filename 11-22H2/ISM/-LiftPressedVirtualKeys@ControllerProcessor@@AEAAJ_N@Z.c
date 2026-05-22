/*
 * XREFs of ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1801A4A0C
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x1801A6C84 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x1801A6EC8 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x1800AA6F4 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801A361C (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x1801A7E8C (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 */

__int64 __fastcall ControllerProcessor::LiftPressedVirtualKeys(ControllerProcessor *this, char a2)
{
  __int64 v2; // rbx
  ControllerProcessor *v4; // rsi
  unsigned __int16 v5; // di
  unsigned __int64 appended; // rax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 12);
  v4 = this;
LABEL_2:
  v2 = *(_QWORD *)v2;
  while ( v2 != *((_QWORD *)v4 + 12) )
  {
    v5 = *(_WORD *)(v2 + 16);
    if ( a2 )
    {
      if ( v5 == 196 || v5 == 27 || v5 == 208 || v5 == 7 )
        goto LABEL_2;
    }
    else if ( (unsigned __int16)(v5 - 37) > 3u )
    {
      goto LABEL_2;
    }
    appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)(v2 + 16), 2uLL);
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
      (__int64)v4 + 88,
      (_QWORD *)v2,
      appended & *((_QWORD *)v4 + 17));
    v2 = std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase((char *)v4 + 96);
    v7 = ControllerProcessor::BuildAndSendKeyboardInputInfo(v4, v5, 0);
    this = retaddr;
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7FE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v7,
        v9);
  }
  return 0LL;
}
