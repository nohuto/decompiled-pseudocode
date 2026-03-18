/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800B062C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x1800B0504 (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800B0730 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x1800B0794 (-TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42Inte.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        void *a4,
        unsigned int a5)
{
  int v6; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // esi
  CComposition *v13; // rbx
  int ManipulationManager; // eax
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = 0LL;
  v6 = *((_DWORD *)a3 + 4);
  if ( v6 == 1 || v6 == 2 || v6 == 3 )
  {
LABEL_4:
    v9 = 12LL;
    goto LABEL_5;
  }
  if ( v6 != 4 )
  {
    if ( v6 != 5 )
    {
      v15 = -2147024809;
      v18 = 320;
LABEL_19:
      v17 = v15;
      goto LABEL_20;
    }
    goto LABEL_4;
  }
  v9 = 4LL;
LABEL_5:
  v11 = v9;
  v10 = *((unsigned int *)a3 + 2) * v9;
  if ( !is_mul_ok(*((unsigned int *)a3 + 2), v11) )
  {
    v15 = -2147024362;
    v18 = 323;
    goto LABEL_19;
  }
  v12 = a5;
  if ( v10 != a5 )
  {
    v15 = -2003303421;
    v18 = 327;
    goto LABEL_19;
  }
  CInteraction::TraceUpdatedConfiguration(this, *((unsigned int *)a3 + 3));
  v13 = this[2];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  ManipulationManager = CComposition::GetManipulationManager(v13, &v19);
  v15 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v18 = 335;
    goto LABEL_17;
  }
  ManipulationManager = CManipulationManager::NotifyUpdateConfiguration(
                          (__int64)this,
                          (__int64)this,
                          *((_DWORD *)a3 + 3),
                          *((_DWORD *)a3 + 4),
                          *((_DWORD *)a3 + 2),
                          a4,
                          v12);
  v15 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v18 = 337;
LABEL_17:
    v17 = ManipulationManager;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v17, v18, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  return v15;
}
