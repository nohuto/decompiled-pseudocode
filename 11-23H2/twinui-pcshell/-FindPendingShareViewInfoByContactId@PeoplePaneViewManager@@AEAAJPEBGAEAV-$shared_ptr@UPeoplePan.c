/*
 * XREFs of ?FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B31BC
 * Callers:
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1804B5A60 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804B226C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindPendingShareViewInfoByContactId(RTL_SRWLOCK *a1, char *a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rsi
  _QWORD *i; // rbx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  v6 = a1 + 16;
  AcquireSRWLockShared(a1 + 16);
  Ptr = a1[18].Ptr;
  for ( i = a1[17].Ptr; i != Ptr; i += 2 )
  {
    v9 = *i;
    if ( *(_DWORD *)(*i + 60LL) == 1 && !*(_QWORD *)(v9 + 48) )
    {
      LOBYTE(v10) = std::wstring::compare((char *)v9, a2);
      if ( !v10 )
        break;
    }
  }
  if ( i == Ptr )
  {
    v11 = -2147023728;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(a3, i);
    v11 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v11;
}
