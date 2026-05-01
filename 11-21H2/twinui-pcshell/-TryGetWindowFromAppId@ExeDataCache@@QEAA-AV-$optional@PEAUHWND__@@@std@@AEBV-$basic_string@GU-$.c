/*
 * XREFs of ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x180568D58
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180567F60 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180126FC0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18042F274 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x1805673FC (--0ExeData@@QEAA@AEBU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExeDataCache::TryGetWindowFromAppId(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  char *v7; // rdx
  __int64 v8; // r8
  char *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-29h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-21h] BYREF
  __int64 v13; // [rsp+30h] [rbp-19h]
  _BYTE v14[8]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp+17h] BYREF

  AcquireSRWLockShared((PSRWLOCK)a1);
  v12 = (RTL_SRWLOCK *)a1;
  v6 = **(_QWORD **)(a1 + 8);
  v11 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v13 = *(_QWORD *)(v6 + 32);
    ExeData::ExeData((ExeData *)v14, (const struct ExeData *)(v6 + 40));
    v7 = (char *)v16;
    if ( v16[3] >= 8uLL )
      v7 = (char *)v16[0];
    v8 = *(_QWORD *)(a3 + 16);
    v9 = (char *)a3;
    if ( *(_QWORD *)(a3 + 24) >= 8uLL )
      v9 = *(char **)a3;
    if ( v8 == v16[2] && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v9, v7, v8) )
    {
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 1;
      std::wstring::_Tidy_deallocate((__int64)v16);
      std::wstring::_Tidy_deallocate((__int64)v15);
      goto LABEL_12;
    }
    std::wstring::_Tidy_deallocate((__int64)v16);
    std::wstring::_Tidy_deallocate((__int64)v15);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v11);
    v6 = v11;
  }
  *(_BYTE *)(a2 + 8) = 0;
LABEL_12:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  return a2;
}
