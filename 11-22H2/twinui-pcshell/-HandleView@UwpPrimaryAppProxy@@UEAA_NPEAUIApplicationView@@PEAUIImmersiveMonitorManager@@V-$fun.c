/*
 * XREFs of ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1805A8880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIApplicationView@@@Z @ 0x1805A7184 (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1805A71CC (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1805A7FCC (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?GetAppHostId@UwpPrimaryAppProxy@@AEAA_KPEAUIApplicationView@@@Z @ 0x1805A80E0 (-GetAppHostId@UwpPrimaryAppProxy@@AEAA_KPEAUIApplicationView@@@Z.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1805A97B4 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UwpPrimaryAppProxy::HandleView(RTL_SRWLOCK *a1, struct IApplicationView *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  UwpPrimaryAppProxy *v9; // rcx
  __int64 v10; // rcx
  __int64 AppHostId; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[64]; // [rsp+30h] [rbp-68h] BYREF
  struct IUnknown **v18; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+20h]

  v19 = a4;
  if ( !(*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1)
    || (AppHostId = UwpPrimaryAppProxy::GetAppHostId(v9, a2), AppHostId == -1) )
  {
    v10 = *(_QWORD *)(a4 + 56);
    if ( v10 )
    {
LABEL_18:
      LOBYTE(v8) = v10 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v8);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 0;
  }
  AcquireSRWLockExclusive(a1 + 5);
  v16[1] = (__int64)&a1[5];
  if ( a1[6].Ptr != a1[7].Ptr )
  {
    if ( a1[9].Ptr == (PVOID)AppHostId )
      goto LABEL_7;
    if ( a1 != (RTL_SRWLOCK *)-40LL )
      ReleaseSRWLockExclusive(a1 + 5);
    v10 = *(_QWORD *)(a4 + 56);
    if ( v10 )
      goto LABEL_18;
    return 0;
  }
  a1[9].Ptr = (PVOID)AppHostId;
LABEL_7:
  v16[0] = (__int64)a2;
  UwpPrimaryAppProxy::FindAppView((__int64)a1, &v18, (struct IUnknown *)a2);
  if ( v18 == a1[7].Ptr )
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
      (__int64)&a1[6],
      v16);
    v13 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
            (__int64)v17,
            a4);
    UwpPrimaryAppProxy::RelayoutAppViewsInternal(a1, a3, v13);
  }
  if ( a1 != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(a1 + 5);
  v14 = *(_QWORD *)(a4 + 56);
  if ( v14 )
  {
    LOBYTE(v12) = v14 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v12);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 1;
}
