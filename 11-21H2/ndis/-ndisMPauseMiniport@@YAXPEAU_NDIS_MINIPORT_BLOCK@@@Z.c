/*
 * XREFs of ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0103FB4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0107914 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C013A0D0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMPauseMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int m_pauseReasons; // ebx
  char v3; // dl

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Cu,
      0xDu,
      (struct _GUID *)&WPP_6f1fdeeae41b37a0f4719f2e2ad1af8e_Traceguids,
      a1);
  m_pauseReasons = a1->Bindings.Miniport.m_pauseReasons;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v3 = 0x80;
  if ( (m_pauseReasons & 8) == 0 )
    v3 = 1;
  ndisMPauseMiniportInner(a1, v3);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Cu,
      0xEu,
      (struct _GUID *)&WPP_6f1fdeeae41b37a0f4719f2e2ad1af8e_Traceguids,
      a1);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a1->Bindings.Miniport.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
