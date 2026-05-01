/*
 * XREFs of ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B30FC
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1804B2DA0 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1804B4500 (-IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1804B4CE0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1804B59D0 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804B226C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindPaneViewInfoByContactId(RTL_SRWLOCK *a1, char *a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  char **Ptr; // rsi
  char **i; // rbx
  int v9; // eax
  unsigned int v10; // ebx

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  v6 = a1 + 16;
  AcquireSRWLockShared(a1 + 16);
  Ptr = (char **)a1[18].Ptr;
  for ( i = (char **)a1[17].Ptr; i != Ptr; i += 2 )
  {
    if ( !*((_DWORD *)*i + 15) )
    {
      LOBYTE(v9) = std::wstring::compare(*i, a2);
      if ( !v9 )
        break;
    }
  }
  if ( i == Ptr )
  {
    v10 = -2147023728;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(a3, i);
    v10 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v10;
}
