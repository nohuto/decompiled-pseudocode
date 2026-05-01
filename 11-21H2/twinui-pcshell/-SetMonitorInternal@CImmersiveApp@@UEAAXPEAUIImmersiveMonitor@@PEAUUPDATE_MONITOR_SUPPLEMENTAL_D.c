/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180075220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x18005150C (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800746A0 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::SetMonitorInternal(__int64 *a1, struct IUnknown *a2, __int64 *a3, char a4)
{
  struct IUnknown *v8; // rdi
  int v9; // r15d
  struct IUnknown *v10; // rbx
  void (__fastcall *v12)(__int64 *, __int64); // rbx
  __int64 AddressOf; // rax
  BOOL v14; // r14d
  void (__fastcall *v15)(__int64 *, GUID *, struct IUnknown **); // rbx
  char IsReportingEnabled; // al
  void (__fastcall *v17)(__int64 *, __int64); // rbx
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-38h] BYREF
  void *v22[2]; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v23; // [rsp+50h] [rbp-20h] BYREF
  struct IUnknown *v24; // [rsp+58h] [rbp-18h] BYREF
  struct IUnknown *v25[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v8 = 0LL;
  v9 = a4 & 8;
  v10 = 0LL;
  v23 = 0LL;
  if ( (a4 & 8) != 0 )
  {
    Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)&v23, a1 + 83);
    v10 = v23;
  }
  else
  {
    v8 = (struct IUnknown *)a1[82];
    if ( v8 )
    {
      ((void (__fastcall *)(__int64))v8->lpVtbl->AddRef)(a1[82]);
      v10 = v8;
      v8 = 0LL;
      v25[0] = 0LL;
      v23 = v10;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v25);
    }
  }
  if ( !(unsigned int)SHIsSameObject(a2, v10)
    && ((a4 & 1) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 400))(a1)) )
  {
    v25[0] = v8;
    v12 = *(void (__fastcall **)(__int64 *, __int64))(*a1 + 464);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v25);
    v12(a1, AddressOf);
    Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((char *)a1 + (v9 != 0 ? 664LL : 656LL), a2);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 400))(a1) && (a4 & 6) != 0 )
    {
      v14 = (a4 & 2) == 0;
      v20 = 0LL;
      if ( a3 )
      {
        v20 = *a3;
      }
      else
      {
        v22[0] = v8;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v22);
        v21 = 0LL;
        v15 = *(void (__fastcall **)(__int64 *, GUID *, struct IUnknown **))(*(a1 - 8) + 32);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        v15(a1 - 8, &GUID_00000000_0000_0000_c000_000000000046, &v21);
        IAMPrivate_QueryObject(
          v21,
          (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v22[0] + 120LL))(v22[0], &v20);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v22);
        v8 = 0LL;
      }
      IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                             a2,
                             0LL);
      v19 = v14;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*a1 + 264))(
        a1,
        (unsigned int)(IsReportingEnabled != 0) + 1,
        (unsigned int)v20,
        HIDWORD(v20));
    }
    v24 = v8;
    v17 = *(void (__fastcall **)(__int64 *, __int64))(*a1 + 464);
    v18 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v24);
    v17(a1, v18);
    if ( !(unsigned int)SHIsSameObject(v25[0], v24) )
    {
      if ( (struct IUnknown *)a1[84] == v8 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7A6,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)0x8000FFFFLL,
          v19);
      LODWORD(v22[0]) = 17;
      v22[1] = v8;
      CImmersiveApp::_ScheduleApplicationNotifications(
        (CImmersiveApp *)(a1 - 14),
        (const struct APP_CHANGE_INFO *const)v22,
        1uLL);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v25);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
}
