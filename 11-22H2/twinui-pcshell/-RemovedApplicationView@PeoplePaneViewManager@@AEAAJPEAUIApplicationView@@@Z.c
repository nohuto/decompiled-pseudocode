/*
 * XREFs of ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B5CDC
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800F6500 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1804B57D8 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1804B675C (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::RemovedApplicationView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rbp
  const unsigned __int16 **i; // rsi
  PVOID Ptr; // rdi
  int (__fastcall *v7)(PVOID, struct IApplicationView **); // rbx
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // r8
  struct IApplicationView *v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+10h] BYREF

  v4 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  v12 = v4;
  for ( i = (const unsigned __int16 **)this[17].Ptr;
        i != this[18].Ptr && *((struct IApplicationView **)*i + 4) != a2;
        i += 2 )
  {
    ;
  }
  if ( i != this[18].Ptr )
  {
    v11 = 0LL;
    Ptr = this[43].Ptr;
    v7 = *(int (__fastcall **)(PVOID, struct IApplicationView **))(*(_QWORD *)Ptr + 72LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
    if ( v7(Ptr, &v11) >= 0 && v11 == a2 )
    {
      v8 = *i;
      if ( *((_QWORD *)*i + 3) >= 8uLL )
        v8 = *(const unsigned __int16 **)v8;
      PeoplePaneViewManager::NotifyListeners((__int64)this, 3uLL, v8, *((_DWORD *)*i + 10));
    }
    v9 = *i;
    if ( *((_QWORD *)*i + 3) >= 8uLL )
      v9 = *(const unsigned __int16 **)v9;
    PeoplePaneViewManager::NotifyListeners((__int64)this, 1uLL, v9, *((_DWORD *)*i + 10));
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[17], &v12, i);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
