/*
 * XREFs of ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8
 * Callers:
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAllocationBase@2@_K@Z @ 0x180021CF0 (-SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAlloca.c)
 *     ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180021EF0 (-RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?GetHandleOnDevice@CResourceProxy@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAI@Z @ 0x180023F60 (-GetHandleOnDevice@CResourceProxy@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAI@Z.c)
 *     ?_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUIDCompositionInteractionConfigurationPartner@@W4Enum@InteractionProperty@@@Z @ 0x180024118 (-_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUI.c)
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024678 (-ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?SetTransparentForInput@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJH@Z @ 0x180024700 (-SetTransparentForInput@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@U.c)
 *     ?EnablePixelSnapping@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJH@Z @ 0x180024800 (-EnablePixelSnapping@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAA.c)
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CProxyTable *__fastcall DirectComposition::CProxyTable::FromProxy(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = a1 & ~(DirectComposition::CProxyTable::s_pageSize - 1);
  if ( !v1
    || *(_DWORD *)((a1 & ~(DirectComposition::CProxyTable::s_pageSize - 1)) + 0x10) >= 0x100u
    || v1 != DirectComposition::CProxyTable::s_proxyTableList[*(unsigned int *)((a1 & ~(DirectComposition::CProxyTable::s_pageSize
                                                                                      - 1))
                                                                              + 0x10)]
    || (((_BYTE)a1 - (_BYTE)v1) & 0xF) != 0 )
  {
    return 0LL;
  }
  return (struct DirectComposition::CProxyTable *)v1;
}
