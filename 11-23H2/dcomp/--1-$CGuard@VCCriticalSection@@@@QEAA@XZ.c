/*
 * XREFs of ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0
 * Callers:
 *     ?DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z @ 0x180010B88 (-DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z.c)
 *     ?remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800119D0 (-remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken.c)
 *     ??1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ @ 0x18003C660 (--1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?GetForCurrentView@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositionCapabilities@234@@Z @ 0x18003CBC0 (-GetForCurrentView@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositi.c)
 *     ?CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z @ 0x18003FF34 (-CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z.c)
 *     ?AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAllocation@DirectComposition@@PEAI@Z @ 0x1800404C4 (-AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAl.c)
 *     ?add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x180067D64 (-add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU-$ITypedEventHandler@PEAVC.c)
 *     ?GetForWindow@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUICompositionCapabilities@234@@Z @ 0x18011B950 (-GetForWindow@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUICo.c)
 *     ?WnfCapabilitiesChangeCallback@CWnfSubscriber@Composition@UI@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18011B9F0 (-WnfCapabilitiesChangeCallback@CWnfSubscriber@Composition@UI@Windows@@CAJU_WNF_STATE_NAME@@KPEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall CGuard<CCriticalSection>::~CGuard<CCriticalSection>(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *a1 = 0LL;
  }
}
