/*
 * XREFs of ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1804B5AEC
 * Callers:
 *     wil::details::lambda_call__lambda_5b46dc554b956bb59933b70216409099___::_lambda_call__lambda_5b46dc554b956bb59933b70216409099___ @ 0x1804B1F04 (wil--details--lambda_call__lambda_5b46dc554b956bb59933b70216409099___--_lambda_call__lambda_5b46.c)
 *     _lambda_1e2111a03014b93961ed011eca3e3935_::operator() @ 0x1804B22BC (_lambda_1e2111a03014b93961ed011eca3e3935_--operator().c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1804B4CE0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1804B675C (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePaneViewInfoForContactId(RTL_SRWLOCK *this, char *a2)
{
  RTL_SRWLOCK *v2; // rdi
  char **Ptr; // rsi
  RTL_SRWLOCK *v6; // r14
  char **i; // rbx
  int v8; // eax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  Ptr = (char **)this[18].Ptr;
  v6 = this + 17;
  for ( i = (char **)this[17].Ptr; i != Ptr; i += 2 )
  {
    if ( !*((_DWORD *)*i + 15) )
    {
      LOBYTE(v8) = std::wstring::compare(*i, a2);
      if ( !v8 )
        break;
    }
  }
  if ( i != Ptr )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(v6, &v9, i);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
