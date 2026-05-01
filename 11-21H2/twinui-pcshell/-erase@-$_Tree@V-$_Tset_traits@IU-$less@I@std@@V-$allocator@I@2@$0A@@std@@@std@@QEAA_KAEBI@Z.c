/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18058FEC0
 * Callers:
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18058F500 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x18015ED38 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18042F274 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18043A2AC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLigh.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        _QWORD *a1,
        unsigned int *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // r9
  _QWORD *v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned int v8; // ecx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  __int64 *v13; // rax
  _QWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v4 = (_QWORD *)*a1;
  v5 = (_QWORD *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *((_DWORD *)v7 + 7) >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < *((_DWORD *)v7 + 7) )
          v5 = v7;
        v4 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = (__int64 *)*v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *a2 >= *((_DWORD *)v6 + 7) )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  v9 = v4;
  v10 = 0LL;
  v14 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v14);
    v9 = v14;
  }
  v14 = v4;
  if ( v4 == (_QWORD *)*v2 && *((_BYTE *)v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
      (__int64)a1,
      (__int64)a1,
      v2[1]);
    v2[1] = v2;
    *v2 = v2;
    v2[2] = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v14);
      v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>>::_Extract(
              a1,
              v12);
      std::_Deallocate<16,0>(v13, 0x20uLL);
      v4 = v14;
    }
  }
  return v10;
}
