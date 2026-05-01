/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180037020
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18003CE4C (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180037124 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@1@V-$tuple@$$V@1@@-$_Tree_temp_node.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800371BC (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPos.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803DCE94 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
        __int64 **a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4)
{
  __int64 *v5; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  char v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 *v14; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-20h]
  unsigned __int64 *v16; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0;
  v5 = *a1;
  v7 = v5;
  v8 = (__int64 *)v5[1];
  v14 = v8;
  if ( !*((_BYTE *)v8 + 25) )
  {
    a4 = *a3;
    do
    {
      v14 = v8;
      if ( v8[4] < a4 )
      {
        v15 = 0;
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v7 = v8;
        v15 = 1;
        v8 = (__int64 *)*v8;
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || *a3 < v7[4] )
  {
    if ( a1[1] == (__int64 *)0x555555555555555LL )
      std::_Throw_tree_length_error();
    v16 = a3;
    v10 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
            (unsigned int)&v12,
            (_DWORD)a1,
            (_DWORD)v5,
            a4,
            (__int64)&v16);
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = 0LL;
    if ( v13 )
      std::_Deallocate<16,0>(v13, 48LL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
                      a1,
                      &v14,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
