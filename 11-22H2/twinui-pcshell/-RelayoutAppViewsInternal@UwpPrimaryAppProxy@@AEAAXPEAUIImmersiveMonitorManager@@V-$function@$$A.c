/*
 * XREFs of ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1805A97B4
 * Callers:
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1805A8880 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1805A96A0 (-RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A6AXPEAUI.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1805A9980 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_530794d7bfa81a060c48b0654fb85d7f_@@QEBA@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1805A742C (--R_lambda_530794d7bfa81a060c48b0654fb85d7f_@@QEBA@AEBV-$com_ptr_t@UIApplicationView@@Uerr_excep.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1805A8444 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UwpPrimaryAppProxy::RelayoutAppViewsInternal(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD **v5; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  void *v12[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v14[5]; // [rsp+40h] [rbp-30h] BYREF

  v14[4] = a3;
  UwpPrimaryAppProxy::GetSortedConnectedMonitors(a1, (__int64)v12, a2);
  v5 = (_QWORD **)v12[0];
  v13 = *(_QWORD *)v12[0];
  v14[0] = &v13;
  v14[1] = (__int64 *)v12;
  v14[2] = a3;
  v6 = *(_QWORD **)(a1 + 56);
  v7 = *(_QWORD **)(a1 + 48);
  if ( v7 != v6 )
  {
    do
      _lambda_530794d7bfa81a060c48b0654fb85d7f_::operator()(v14, v7++);
    while ( v7 != v6 );
    v5 = (_QWORD **)v12[0];
  }
  *v5[1] = 0LL;
  v8 = *v5;
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8 + 2);
      std::_Deallocate<16,0>(v8, 0x18uLL);
      v8 = v9;
    }
    while ( v9 );
  }
  std::_Deallocate<16,0>(v12[0], 0x18uLL);
  v11 = (__int64 *)a3[7];
  if ( v11 )
  {
    LOBYTE(v10) = v11 != a3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 32))(v11, v10);
    a3[7] = 0LL;
  }
}
