/*
 * XREFs of ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x180038DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x180038EC4 (-TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiv.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800EBACC (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800EBB08 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801232BC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qSd @ 0x1802EC42C (WPP_SF_qSd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::TransferAllWindowsBetweenGloms(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal *a3,
        const struct TransferWindowOptions *a4)
{
  CImmersiveAppFinderByApplication *v8; // rax
  __int64 v9; // r8
  bool v10; // bl
  bool v11; // bl
  char v13; // bl
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  _BYTE v17[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF
  char v19; // [rsp+48h] [rbp-20h]
  char v20; // [rsp+70h] [rbp+8h] BYREF

  v8 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)&v20, a2);
  v10 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
               (char *)this + 464,
               v8,
               v9,
               v17) < 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  if ( v10 )
  {
    do
    {
      v18 = 0LL;
      v19 = 1;
      v11 = (int)CApplicationManager::TransferWindowBetweenGlomsWorker(
                   (CApplicationManager *)((char *)this - 240),
                   (const struct CTaskWindowFinder *)&v18,
                   a2,
                   a3,
                   a4) >= 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18 + 1);
    }
    while ( v11 );
    if ( ((*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 280LL))(a2) & 1) != 0 )
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 240, a2, 0LL);
    return 0LL;
  }
  else
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v13 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2);
      v14 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
      WPP_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 2), v15, v16, (_DWORD)a2, v14, v13);
    }
    return 2147947423LL;
  }
}
