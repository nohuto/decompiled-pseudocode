/*
 * XREFs of ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0
 * Callers:
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 *     ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180021EF0 (-RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUIDCompositionInteractionConfigurationPartner@@W4Enum@InteractionProperty@@@Z @ 0x180024118 (-_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUI.c)
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?SetTransparentForInput@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJH@Z @ 0x180024700 (-SetTransparentForInput@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@U.c)
 *     ?EnablePixelSnapping@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJH@Z @ 0x180024800 (-EnablePixelSnapping@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAA.c)
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ??1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ @ 0x180030F54 (--1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ.c)
 *     ??1CPrimitive@DirectComposition@@MEAA@XZ @ 0x180032364 (--1CPrimitive@DirectComposition@@MEAA@XZ.c)
 *     ?SetReferenceArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBI_K@Z @ 0x180033800 (-SetReferenceArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBI_K@Z.c)
 *     ?SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestructionObject@2@@Z @ 0x180063C1C (-SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestru.c)
 *     ?HintSize@CDevice@DirectComposition@@UEAAJII@Z @ 0x18007CEA0 (-HintSize@CDevice@DirectComposition@@UEAAJII@Z.c)
 *     ?Message_TimeEvent@CAnimationInstance@DirectComposition@@QEAAJII@Z @ 0x1800E8EB8 (-Message_TimeEvent@CAnimationInstance@DirectComposition@@QEAAJII@Z.c)
 *     ?Unlock@CDevice@DirectComposition@@UEAAXXZ @ 0x1800F6960 (-Unlock@CDevice@DirectComposition@@UEAAXXZ.c)
 *     ??1CYCbCrSurface@DirectComposition@@MEAA@XZ @ 0x1800FEB7C (--1CYCbCrSurface@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDeviceLock::Leave(DirectComposition::CDeviceLock *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 12))-- == 1 )
    {
      if ( *((_BYTE *)this + 52) )
      {
        *((_BYTE *)this + 52) = 0;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  }
}
