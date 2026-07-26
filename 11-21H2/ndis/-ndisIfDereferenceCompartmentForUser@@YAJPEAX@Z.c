/*
 * XREFs of ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B3B78
 * Callers:
 *     ndisDispatchRequest @ 0x1C0005B98 (ndisDispatchRequest.c)
 *     ndisCmDeleteStateObject @ 0x1C0008DB0 (ndisCmDeleteStateObject.c)
 *     ndisCmSetThreadState @ 0x1C0008E80 (ndisCmSetThreadState.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B1CA0 (NdisSetSessionCompartmentId.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B2EEC (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C00B5990 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00B59E4 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     ndisIfDeleteCompartment @ 0x1C00B34A8 (ndisIfDeleteCompartment.c)
 */

__int64 __fastcall ndisIfDereferenceCompartmentForUser(_DWORD *a1)
{
  unsigned int v1; // edi
  char v3; // si
  KIRQL v4; // dl
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v3 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Du,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v5 = a1[12];
  if ( v5 <= 0 )
  {
    v1 = -1073741811;
  }
  else
  {
    v6 = v5 - 1;
    a1[12] = v6;
    if ( !v6 && (a1[10] & 2) != 0 )
      v3 = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( v3 )
    ndisIfDeleteCompartment(a1[4]);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Eu,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      v1,
      a1);
  return v1;
}
