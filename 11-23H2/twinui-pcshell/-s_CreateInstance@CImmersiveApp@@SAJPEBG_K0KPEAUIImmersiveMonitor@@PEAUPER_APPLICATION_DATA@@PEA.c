/*
 * XREFs of ?s_CreateInstance@CImmersiveApp@@SAJPEBG_K0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180028FEC
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000DE50 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x1800290A0 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::s_CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7,
        const struct _GUID *a8,
        void **a9)
{
  void **v9; // rdi
  int v10; // ebx
  const unsigned __int16 *v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  const unsigned __int16 *v14; // [rsp+70h] [rbp+30h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v12 = a1;
  v9 = a9;
  *a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
          (unsigned int)&a9,
          (unsigned int)&v12,
          (unsigned int)&v14,
          (unsigned int)&v15,
          (__int64)&a5,
          (__int64)&a6,
          (__int64)&a7,
          (__int64)&v13);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a9)(a9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a9);
  return (unsigned int)v10;
}
