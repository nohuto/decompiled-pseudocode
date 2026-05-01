/*
 * XREFs of ?GetActiveApps@Win32AppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x180625670
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA?A_T$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803F7A48 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Win32AppStateManager::GetActiveApps(__int64 a1, __int64 *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[1] = (__int64)a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 56);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 56));
  v10[2] = (__int64)v4;
  v5 = **(_QWORD **)(a1 + 64);
  v10[0] = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    std::wstring::wstring(v11, *(_QWORD *)(v5 + 64));
    std::vector<std::wstring>::emplace_back<std::wstring>(a2, (__int64)v11);
    std::wstring::_Tidy_deallocate((__int64)v11);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
      v10,
      v6,
      v7,
      v8);
    v5 = v10[0];
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return a2;
}
