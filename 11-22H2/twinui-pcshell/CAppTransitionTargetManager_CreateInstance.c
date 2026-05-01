/*
 * XREFs of CAppTransitionTargetManager_CreateInstance @ 0x18059C524
 * Callers:
 *     ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180598F00 (-_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCAppTransitionTargetManager@@UIAppTransitionTargetManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAppTransitionTargetManager@@@Z @ 0x18059A018 (--$MakeAndInitialize@VCAppTransitionTargetManager@@UIAppTransitionTargetManager@@$$V@Details@WRL.c)
 */

__int64 __fastcall CAppTransitionTargetManager_CreateInstance(IUnknown *punkSite, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  IUnknown *v6; // rcx
  IUnknown *punk; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CAppTransitionTargetManager,IAppTransitionTargetManager,>(&punk);
  if ( v5 >= 0 )
  {
    v5 = IUnknown_SetSite(punk, punkSite);
    if ( v5 >= 0 )
      v5 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))punk->lpVtbl->QueryInterface)(
             punk,
             &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
             a3);
  }
  v6 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  }
  return (unsigned int)v5;
}
