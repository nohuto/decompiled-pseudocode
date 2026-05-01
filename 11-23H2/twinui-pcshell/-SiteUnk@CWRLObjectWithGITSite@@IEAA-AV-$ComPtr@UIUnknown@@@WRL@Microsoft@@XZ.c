/*
 * XREFs of ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801BDC3C
 * Callers:
 *     _lambda_10d04f2f2676f3bcd785d385c5de414a_::operator() @ 0x1801D0810 (_lambda_10d04f2f2676f3bcd785d385c5de414a_--operator().c)
 *     ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@@Z @ 0x1801D6BE0 (-GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802CF350 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180746AD0 (-QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CWRLObjectWithGITSite::SiteUnk(__int64 a1, __int64 *a2)
{
  void (__fastcall *v4)(__int64, GUID *, __int64 *); // rbx

  *a2 = 0LL;
  v4 = *(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  v4(a1, &GUID_00000000_0000_0000_c000_000000000046, a2);
  return a2;
}
