/*
 * XREFs of ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180568098
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180567F60 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180126FC0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExePathToAppIdMapping::GetExePathFromAppId(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // r10
  char *v7; // rdx
  __int64 v8; // r8
  char *v9; // rcx
  __int64 **v10; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockShared((PSRWLOCK)a1);
  v14 = (RTL_SRWLOCK *)a1;
  v6 = **(__int64 ***)(a1 + 8);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = (char *)(v6 + 8);
    if ( (unsigned __int64)v6[11] >= 8 )
      v7 = *(char **)v7;
    v8 = *(_QWORD *)(a3 + 16);
    v9 = (char *)a3;
    if ( *(_QWORD *)(a3 + 24) >= 8uLL )
      v9 = *(char **)a3;
    if ( v8 == v6[10] && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v9, v7, v8) )
    {
      std::wstring::wstring(a2, (__int64)(v6 + 4));
      goto LABEL_20;
    }
    v10 = (__int64 **)v6[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
LABEL_20:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
  return a2;
}
