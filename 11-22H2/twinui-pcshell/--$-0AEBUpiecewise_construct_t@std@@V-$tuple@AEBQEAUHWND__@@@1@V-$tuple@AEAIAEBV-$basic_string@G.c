/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x180623E68
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x180624A28 (--$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0ExeData@@QEAA@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x180624D1C (--0ExeData@@QEAA@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5,
        __int64 *a6)
{
  _QWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int *v11; // r10
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v8 = operator new(0x70uLL);
  a1[1] = v8;
  v9 = *a6;
  v10 = a6[1];
  v11 = (unsigned int *)a6[2];
  v8[4] = **a5;
  ExeData::ExeData(v8 + 5, *v11, v10, v9);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
