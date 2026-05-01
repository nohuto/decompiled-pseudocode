/*
 * XREFs of ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x1803A1450
 * Callers:
 *     <none>
 * Callees:
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000CD04 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x18000D48C (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18000E214 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x1803A161C (-TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiv.c)
 *     WPP_SF_qSd @ 0x1803A4C54 (WPP_SF_qSd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::TransferAllWindowsBetweenGloms(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *),
        struct IImmersiveApplicationInternal *a3,
        const struct TransferWindowOptions *a4)
{
  int v8; // eax
  __int64 v9; // r8
  bool v10; // bl
  bool v11; // bl
  char v13; // bl
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  char v17; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF
  char v19; // [rsp+48h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v8 = (unsigned int)CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                       (CImmersiveAppFinderByApplication *)&v20,
                       a2);
  v10 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
               (int)this + 464,
               v8,
               v9,
               (int)&v17) < 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
  if ( v10 )
  {
    do
    {
      v18 = 0LL;
      v19 = 1;
      v11 = (int)CApplicationManager::TransferWindowBetweenGlomsWorker(
                   (CApplicationManager *)((char *)this - 240),
                   (const struct CTaskWindowFinder *)&v18,
                   (struct IImmersiveApplicationInternal *)a2,
                   a3,
                   a4) >= 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18 + 1);
    }
    while ( v11 );
    if ( (((__int64 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[35])(a2) & 1) != 0 )
      CApplicationManager::_ForgetApplicationNoLock(
        (CApplicationManager *)((char *)this - 240),
        (struct IImmersiveApplicationInternal *)a2,
        0);
    return 0LL;
  }
  else
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[20])(a2);
      v14 = ((__int64 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[3])(a2);
      WPP_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 2), v15, v16, (_DWORD)a2, v14, v13);
    }
    return 2147947423LL;
  }
}
