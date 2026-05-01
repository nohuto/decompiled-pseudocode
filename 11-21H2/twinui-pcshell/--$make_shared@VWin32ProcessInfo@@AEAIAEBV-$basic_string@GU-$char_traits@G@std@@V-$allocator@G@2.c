/*
 * XREFs of ??$make_shared@VWin32ProcessInfo@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32ProcessInfo@@@0@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x18056725C
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180569758 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Ref_count_obj2@VWin32ProcessInfo@@@std@@QEAA@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1805661A4 (--$-0AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Ref_count_obj2@VWi.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Win32ProcessInfo,unsigned int &,std::wstring const &>(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h]

  v8 = operator new(0x48uLL);
  v6 = std::_Ref_count_obj2<Win32ProcessInfo>::_Ref_count_obj2<Win32ProcessInfo>((__int64)v8, a2, a3);
  *a1 = v6 + 16;
  a1[1] = v6;
  return a1;
}
