/*
 * XREFs of ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00B0854
 * Callers:
 *     ?ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00ADAD0 (-ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAU.c)
 *     ?ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00ADD10 (-ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQ.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C00B06AC (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 */

void __fastcall ndisMRawDirectOidRequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  KIRQL v6; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( !a1->WdfCxPowerManagement && a1->SelectiveSuspend )
    ndisClearBusy((__int64)a1, 1, 50);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v6 = NewIrql;
  --a1->DirectOidRequestCount;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  ndisMOidRequestCompleteInternal(a1, a2, a3, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Au,
      (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
      (char)a1,
      a2);
}
