/*
 * XREFs of ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x18039E830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180020560 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_1e074cd5997424a950e43daab6bcbaaf_::operator() @ 0x180397154 (_lambda_1e074cd5997424a950e43daab6bcbaaf_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::RefreshMonitorMappings(CApplicationManager *this)
{
  void (__fastcall *v2)(char *, GUID *, IUnknown **); // rbx
  HRESULT v3; // r15d
  int v4; // edi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rbx
  unsigned int j; // r14d
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, __int64 *); // rbx
  __int64 *AddressOf; // rax
  char IsReportingEnabled; // al
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+38h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+40h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+48h] BYREF
  void *ppvOut; // [rsp+A8h] [rbp+50h] BYREF

  v18 = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  v18 = 2;
  v2 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 13) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v2((char *)this - 104, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v3 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = *((_DWORD *)this + 202);
    v15 = *((_QWORD *)this + 51);
    v5 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v16 = v4;
    v17[0] = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v17);
    v6 = *((_QWORD *)this + 61);
    for ( i = 0LL; i < v6; ++i )
    {
      if ( !lambda_1e074cd5997424a950e43daab6bcbaaf_::operator()(
              (__int64)&v16,
              *(__int64 **)(*((_QWORD *)this + 60) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v17);
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 53) + 32LL))(
      *((_QWORD *)this + 53),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v20);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 51) + 32LL))(*((_QWORD *)this + 51), &v18) >= 0 )
    {
      for ( j = 0; j < v18; ++j )
      {
        punk = 0LL;
        v9 = *((_QWORD *)this + 51);
        v10 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 40LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&punk);
        if ( v10(v9, j, AddressOf) >= 0 )
        {
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 punk,
                                 0LL);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, IUnknown *))(*(_QWORD *)v20 + 24LL))(
            v20,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            *((unsigned int *)this + 202),
            punk);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
      }
    }
    v13 = *((_QWORD *)this + 48);
    if ( v13 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 40LL))(v13, ppvOut);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v3;
}
