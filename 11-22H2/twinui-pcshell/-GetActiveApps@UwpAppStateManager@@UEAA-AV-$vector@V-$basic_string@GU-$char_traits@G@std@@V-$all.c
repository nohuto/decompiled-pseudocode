/*
 * XREFs of ?GetActiveApps@UwpAppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x180623050
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801AF188 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x180622998 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall UwpAppStateManager::GetActiveApps(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  RTL_SRWLOCK *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int128 v13; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-8h]
  _QWORD *v15; // [rsp+68h] [rbp+28h] BYREF

  v15 = a2;
  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 48);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 48));
  v6 = **(_QWORD **)(a1 + 56);
  v15 = (_QWORD *)v6;
  v7 = 0LL;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( v7 == v4 )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(&v13, v7, *(_QWORD *)(v6 + 64));
      v4 = v14;
      v7 = (_QWORD *)*((_QWORD *)&v13 + 1);
    }
    else
    {
      std::wstring::wstring(v7, *(_QWORD *)(v6 + 64));
      v7 += 4;
      *((_QWORD *)&v13 + 1) = v7;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&v15,
      v8,
      v9,
      v10);
    v6 = (__int64)v15;
  }
  v14 = 0LL;
  v11 = v13;
  v13 = 0uLL;
  *a2 = v11;
  a2[1] = v7;
  a2[2] = v4;
  if ( v5 )
    ReleaseSRWLockShared(v5);
  std::vector<std::wstring>::_Tidy((__int64)&v13);
  return a2;
}
