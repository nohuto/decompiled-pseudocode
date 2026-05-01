/*
 * XREFs of ?FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1803D6518
 * Callers:
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1803D8D10 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18022B968 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803D55B0 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindPendingShareViewInfoByContactId(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  _QWORD *Ptr; // rsi
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *v9; // rcx
  int v10; // eax
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  AcquireSRWLockShared(a1 + 16);
  Ptr = a1[18].Ptr;
  v12 = a1 + 16;
  v7 = a1[17].Ptr;
  v8 = 0;
  while ( v7 != Ptr )
  {
    v9 = (_QWORD *)*v7;
    if ( *(_DWORD *)(*v7 + 60LL) == 1 && !v9[6] )
    {
      LOBYTE(v10) = std::wstring::compare(v9, a2);
      if ( !v10 )
        break;
    }
    v7 += 2;
  }
  if ( v7 == Ptr )
    v8 = -2147023728;
  else
    std::shared_ptr<FlyoutView>::operator=(a3, v7);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  return v8;
}
