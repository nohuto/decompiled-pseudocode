/*
 * XREFs of ?GetActiveApps@UwpAppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x180565790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801753EC (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18042F274 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1805650F8 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall UwpAppStateManager::GetActiveApps(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r14
  RTL_SRWLOCK *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-10h]
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp+28h] BYREF

  v12 = a2;
  v9 = 0LL;
  v4 = 0LL;
  v10 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 48);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 48));
  v11 = v5;
  v6 = **(_QWORD ***)(a1 + 56);
  v12 = v6;
  v7 = 0LL;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( v7 == v4 )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(&v9, v7, v6[8]);
      v4 = v10;
      v7 = (_QWORD *)*((_QWORD *)&v9 + 1);
    }
    else
    {
      std::wstring::wstring((__int64)v7, v6[8]);
      v7 += 4;
      *((_QWORD *)&v9 + 1) = v7;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v12);
    v6 = v12;
  }
  *a2 = v9;
  a2[1] = v7;
  a2[2] = v4;
  v9 = 0LL;
  v10 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  std::vector<std::wstring>::_Tidy((__int64)&v9);
  return a2;
}
