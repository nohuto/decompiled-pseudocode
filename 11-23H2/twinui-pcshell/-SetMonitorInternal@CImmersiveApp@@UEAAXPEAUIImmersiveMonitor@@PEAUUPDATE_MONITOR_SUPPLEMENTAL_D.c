/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18005EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180020560 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800282C0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D7A4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x180107680 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveApp::SetMonitorInternal(_QWORD *a1, struct IUnknown *a2, __int64 *a3, char a4)
{
  _QWORD *v8; // r12
  void (__fastcall *v10)(_QWORD *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  BOOL v12; // esi
  void (__fastcall *v13)(_QWORD *, GUID *, struct IUnknown **); // rbx
  char IsReportingEnabled; // al
  void (__fastcall *v15)(_QWORD *, __int64 *); // rbx
  __int64 *v16; // rax
  int v17; // [rsp+20h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v19; // [rsp+38h] [rbp-38h] BYREF
  void *v20[2]; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v21; // [rsp+50h] [rbp-20h] BYREF
  struct IUnknown *v22; // [rsp+58h] [rbp-18h] BYREF
  struct IUnknown *v23[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v23[0] = 0LL;
  v8 = &a1[(a4 & 8) != 0];
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(v23, v8 + 82);
  if ( !(unsigned int)SHIsSameObject(a2, v23[0])
    && ((a4 & 1) == 0 || !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 400LL))(a1)) )
  {
    v22 = 0LL;
    v10 = *(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 464LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v22);
    v10(a1, AddressOf);
    Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=(v8 + 82, a2);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 400LL))(a1) && (a4 & 6) != 0 )
    {
      v12 = (a4 & 2) == 0;
      v18 = 0LL;
      if ( a3 )
      {
        v18 = *a3;
      }
      else
      {
        v20[0] = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v20);
        v19 = 0LL;
        v13 = *(void (__fastcall **)(_QWORD *, GUID *, struct IUnknown **))(*(a1 - 8) + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        v13(a1 - 8, &GUID_00000000_0000_0000_c000_000000000046, &v19);
        IAMPrivate_QueryObject(
          v19,
          (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          v20);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v20[0] + 120LL))(v20[0], &v18);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v20);
      }
      IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                             a2,
                             0LL);
      v17 = v12;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*a1 + 264LL))(
        a1,
        (unsigned int)(IsReportingEnabled != 0) + 1,
        (unsigned int)v18,
        HIDWORD(v18));
    }
    v21 = 0LL;
    v15 = *(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 464LL);
    v16 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v21);
    v15(a1, v16);
    if ( !(unsigned int)SHIsSameObject(v22, v21) )
    {
      if ( !a1[84] )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7A7,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)0x8000FFFFLL,
          v17);
      LODWORD(v20[0]) = 17;
      v20[1] = 0LL;
      CImmersiveApp::_ScheduleApplicationNotifications(
        (CImmersiveApp *)(a1 - 14),
        (const struct APP_CHANGE_INFO *)v20,
        1uLL);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v23);
}
