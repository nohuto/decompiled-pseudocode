/*
 * XREFs of ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180129DF8
 * Callers:
 *     ?DetachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800CBB8C (-DetachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800CBEE0 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x18012B4C0 (-SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801A6BB8 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x180129E7C (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?GetFirstContactIndexForDeviceId@ManipulationInjector@@AEAAIK@Z @ 0x180129F58 (-GetFirstContactIndexForDeviceId@ManipulationInjector@@AEAAIK@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x18012A4BC (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18012B3EC (-IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18012B430 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall ManipulationInjector::EndManipulation(ManipulationInjector *this, unsigned int a2)
{
  unsigned int v3; // edx

  if ( ManipulationInjector::IsInContactForDeviceId(this, a2) || ManipulationInjector::IsHoveringForDeviceId(this, v3) )
  {
    if ( *((_DWORD *)this + 22) == 64 && *((_DWORD *)this + 12) > 1u )
    {
      *((_DWORD *)this + 38 * ManipulationInjector::GetFirstContactIndexForDeviceId(this, v3) + 31) = 0x40000;
      ManipulationInjector::InjectAndScrub(this);
      if ( *((_BYTE *)this + 13) )
        DbgPrint("Releasing drag contact\n");
    }
    else
    {
      ManipulationInjector::EndManipulationInternal(this, 0, 0);
    }
  }
}
