/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x180567168
 * Callers:
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18056874C (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801B80A0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180340C88 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x180566538 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@1@V-$tuple@AEAIAEBV-$basic_string@G.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x180567118 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180567584 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@s.c)
 */

__int64 __fastcall std::map<HWND__ *,ExeData>::_Try_emplace<HWND__ * const &,unsigned int &,std::wstring const &,std::wstring const &>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r9
  _QWORD *v9; // r10
  __int64 v10; // r11
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+78h] [rbp-8h]

  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
    a1,
    (__int64)&v18,
    a3);
  if ( *(_BYTE *)(v19 + 25) || *v9 < *(_QWORD *)(v19 + 32) )
  {
    if ( a1[1] == 0x249249249249249LL )
      std::_Throw_tree_length_error();
    v11 = *a1;
    v17[0] = a6;
    v17[1] = a5;
    v17[2] = v10;
    *(_QWORD *)&v15 = v9;
    v12 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
            v16,
            (__int64)a1,
            v11,
            v8,
            (_QWORD **)&v15,
            v17);
    v13 = v12[1];
    v12[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(v16);
    v15 = v18;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum JavaOption>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v19;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
