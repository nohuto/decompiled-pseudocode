/*
 * XREFs of ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1803D67F0
 * Callers:
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x1803D6260 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 *     ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z @ 0x1803D7390 (-GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z.c)
 *     ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x1803D7450 (-GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803D55B0 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationViewId(RTL_SRWLOCK *a1, int a2, __int64 *a3)
{
  std::_Ref_count_base **Ptr; // rsi
  std::_Ref_count_base **v7; // rbx
  unsigned int v8; // ebx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+8h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  AcquireSRWLockShared(a1 + 16);
  Ptr = (std::_Ref_count_base **)a1[18].Ptr;
  v11 = a1 + 16;
  v7 = (std::_Ref_count_base **)a1[17].Ptr;
  *(_OWORD *)v10 = 0LL;
  while ( v7 != Ptr )
  {
    if ( *((_QWORD *)*v7 + 6) )
    {
      if ( ~*((_DWORD *)*v7 + 12) == a2 )
        break;
    }
    else
    {
      std::shared_ptr<FlyoutView>::operator=((__int64 *)v10, v7);
    }
    v7 += 2;
  }
  if ( v7 != a1[18].Ptr )
    goto LABEL_11;
  if ( v10[0] )
  {
    v7 = v10;
LABEL_11:
    std::shared_ptr<FlyoutView>::operator=(a3, v7);
    v8 = 0;
    goto LABEL_12;
  }
  v8 = -2147023728;
LABEL_12:
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return v8;
}
