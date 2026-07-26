/*
 * XREFs of ndisNblTrackerWatchdogWorkerRoutine @ 0x1C012E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x1C005BD40 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 */

void __fastcall ndisNblTrackerWatchdogWorkerRoutine(_DWORD *P)
{
  int v1; // edx
  int v3; // edx
  __int64 v4; // rdi

  v1 = P[2];
  if ( !v1 || (v3 = v1 - 3) == 0 || (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *(_QWORD *)P;
    if ( (_BYTE)KdDebuggerNotPresent )
      ndisMLiveBugCheck((struct _NDIS_MINIPORT_BLOCK *)v4, 48LL, v4, *(_QWORD *)(v4 + 3832), 0LL);
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v4, 0x68u);
  }
  ExFreePoolWithTag(P, 0);
}
