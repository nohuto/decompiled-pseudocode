/*
 * XREFs of ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1803D8E24
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x1803D5170 (wil--details--ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___--_ScopeExitFn__lambda_d52e.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1803D8790 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18022B968 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1803D9AE0 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePendingShareViewInfoForContactId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2)
{
  char *Ptr; // rdi
  RTL_SRWLOCK *v5; // rsi
  char *i; // rbx
  _QWORD *v7; // rcx
  int v8; // eax
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v9, this + 16);
  Ptr = (char *)this[18].Ptr;
  v5 = this + 17;
  for ( i = (char *)this[17].Ptr; i != Ptr; i += 16 )
  {
    v7 = *(_QWORD **)i;
    if ( *(_DWORD *)(*(_QWORD *)i + 60LL) == 1 && !v7[6] )
    {
      LOBYTE(v8) = std::wstring::compare(v7, (__int64)a2);
      if ( !v8 )
        break;
    }
  }
  if ( i != Ptr )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(v5, &v10, i);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
}
