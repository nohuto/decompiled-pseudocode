/*
 * XREFs of ?EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180625370
 * Callers:
 *     <none>
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ?EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180625404 (-EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@.c)
 */

void __fastcall Win32AppStateManager::EnumerateAppStateData(
        RTL_SRWLOCK *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+18h]

  v4 = this + 7;
  AcquireSRWLockShared(this + 7);
  v10 = v4;
  v5 = *(_QWORD *)this[8].Ptr;
  v9 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    Win32AppInfo::EnumerateAppViews(*(Win32AppInfo **)(v5 + 64), a2);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
      &v9,
      v6,
      v7,
      v8);
    v5 = v9;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
}
