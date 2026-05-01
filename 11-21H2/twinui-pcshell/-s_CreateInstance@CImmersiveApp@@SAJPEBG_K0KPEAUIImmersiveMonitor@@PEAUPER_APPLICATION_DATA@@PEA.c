/*
 * XREFs of ?s_CreateInstance@CImmersiveApp@@SAJPEBG_K0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EF9B4
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E7794 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x1800EF2B0 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::s_CreateInstance(
        const unsigned __int16 *a1,
        unsigned __int64 a2,
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
  unsigned __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  const unsigned __int16 *v14; // [rsp+70h] [rbp+30h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v12 = a1;
  v9 = a9;
  *a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
          &a9,
          &v12,
          &v14,
          &v15,
          &a5,
          &a6,
          &a7,
          &v13);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a9)(a9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a9);
  return (unsigned int)v10;
}
