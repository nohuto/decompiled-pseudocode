/*
 * XREFs of ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180181730
 * Callers:
 *     ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0003@@@Z @ 0x180190540 (-GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0003@.c)
 *     ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805F0610 (-QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
