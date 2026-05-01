/*
 * XREFs of ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1804B5B90
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x1804B1ED8 (wil--details--ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___--_ScopeExitFn__lambda_d52e.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1804B54C0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1804B675C (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePendingShareViewInfoForContactId(RTL_SRWLOCK *this, char *a2)
{
  RTL_SRWLOCK *v2; // rdi
  char *Ptr; // rsi
  RTL_SRWLOCK *v6; // r14
  char *i; // rbx
  __int64 v8; // rcx
  int v9; // eax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  Ptr = (char *)this[18].Ptr;
  v6 = this + 17;
  for ( i = (char *)this[17].Ptr; i != Ptr; i += 16 )
  {
    v8 = *(_QWORD *)i;
    if ( *(_DWORD *)(*(_QWORD *)i + 60LL) == 1 && !*(_QWORD *)(v8 + 48) )
    {
      LOBYTE(v9) = std::wstring::compare((char *)v8, a2);
      if ( !v9 )
        break;
    }
  }
  if ( i != Ptr )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(v6, &v10, i);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
