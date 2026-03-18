/*
 * XREFs of ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x1800B0504
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800B062C (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPD.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800AC7F0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800AD2E8 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800B05E4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     memcpy_0 @ 0x18011B668 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        unsigned int Size)
{
  void *v7; // rsi
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi

  v7 = 0LL;
  v11 = operator new(0x48uLL);
  v13 = (__int64)v11;
  if ( !v11 )
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x2DFu, 0LL);
    return v21;
  }
  memset_0(v11, 0, 0x48uLL);
  *(_DWORD *)v13 = 7;
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 )
  {
    *(_QWORD *)(v13 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(v13 + 16, a2);
  *(_QWORD *)(v13 + 56) = 0LL;
  *(_DWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 40) = a3;
  *(_DWORD *)(v13 + 44) = a4;
  if ( Size )
  {
    v17 = operator new(Size);
    v7 = v17;
    if ( !v17 )
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x2ECu, 0LL);
      goto LABEL_11;
    }
    memcpy_0(v17, Src, Size);
    *(_QWORD *)(v13 + 56) = v7;
  }
  v19 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v16, v15, v13);
  v21 = v19;
  if ( v19 >= 0 )
    return v21;
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2F8u, 0LL);
LABEL_11:
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v13);
  if ( v7 )
    operator delete(v7);
  return v21;
}
