/*
 * XREFs of ??$?0AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Ref_count_obj2@VUwpAppPackageInfo@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180564D04
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180565D60 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj2<UwpAppPackageInfo>::_Ref_count_obj2<UwpAppPackageInfo>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v6; // [rsp+28h] [rbp-40h] BYREF
  __int64 v7; // [rsp+88h] [rbp+20h]

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<UwpAppPackageInfo>::`vftable';
  v3 = a1 + 16;
  v7 = std::wstring::wstring((__int64)&v6, a2);
  std::wstring::wstring(v3, v7);
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(v3 + 32) = v4;
  std::wstring::_Tidy_deallocate(v7);
  return a1;
}
