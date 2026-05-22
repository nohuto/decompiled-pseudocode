/*
 * XREFs of ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x1800A040C
 * Callers:
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800A3070 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x180158FE0 (-GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA-AU-$pair@KK@std@@PEAVInputCont.c)
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x1801BB0F8 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E740 (-InternalRelease@-$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIWindowsMessageDeliveryProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180021DC0 (--$As@UIWindowsMessageDeliveryProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IWindowsMessageDeliveryProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8),
                  &v8) >= 0 )
        break;
      v4 += 16LL;
    }
    while ( v4 != v5 );
    v3 = v8;
  }
  v6 = (v3 - 8) & -(__int64)(v3 != 0);
  *a2 = v6;
  if ( v6 )
    (**(void (__fastcall ***)(__int64))(v6 + 16))(v6 + 16);
  Microsoft::WRL::ComPtr<IWindowsMessageDeliveryProxy>::InternalRelease(&v8);
  return a2;
}
