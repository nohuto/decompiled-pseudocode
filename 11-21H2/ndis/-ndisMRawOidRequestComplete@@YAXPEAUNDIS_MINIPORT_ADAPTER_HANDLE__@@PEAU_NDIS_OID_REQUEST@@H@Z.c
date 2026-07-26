/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00B096C
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C003A320 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 *     ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C003A3A0 (-ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009088 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009D58 (-ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C00239B0 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C00B06AC (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 */

void __fastcall ndisMRawOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  struct _NDIS_OID_REQUEST *v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  NdisWatchdogState *v9; // rcx
  struct _NDIS_OID_REQUEST *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v10 = a2;
  if ( ndisOidNeedArmWatchDog(a2, (struct _NDIS_MINIPORT_BLOCK *)a1) )
  {
    v7 = *(_QWORD *)(v6 + 3760);
    v8 = *(_QWORD *)(v7 + 352);
    if ( !v8 || *(_QWORD *)(v8 + 64) == *(_QWORD *)(v7 + 176) )
      v9 = (NdisWatchdogState *)*((_QWORD *)a1 + 682);
    else
      v9 = *(NdisWatchdogState **)(v6 + 5464);
    if ( v9 != (NdisWatchdogState *)-1LL )
      NdisWatchdogState::CancelTimer(v9);
  }
  if ( (*(_DWORD *)&v3->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)a1, v3, 1, &v10);
    v3 = v10;
  }
  if ( (*(_DWORD *)&v3->NdisReserved[16] & 0x400) != 0 )
  {
    *(_DWORD *)&v3->NdisReserved[8] = a3;
    KeSetEvent((PRKEVENT)&v3->NdisReserved[40], 0, 0);
  }
  else
  {
    if ( !*((_BYTE *)a1 + 6052) )
    {
      if ( *((_QWORD *)a1 + 556) )
        ndisClearBusy((__int64)a1, 1, 33);
    }
    ndisMOidRequestCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v3, a3, 0LL);
  }
}
