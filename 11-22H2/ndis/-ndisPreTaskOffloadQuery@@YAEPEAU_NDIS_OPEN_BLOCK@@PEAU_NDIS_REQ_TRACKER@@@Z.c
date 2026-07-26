/*
 * XREFs of ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A4964
 * Callers:
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3A50 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     ?ndisFillOffloadCapsInTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F5E8 (-ndisFillOffloadCapsInTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009FA54 (-ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreTaskOffloadQuery(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_REQ_TRACKER *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rsi
  char v4; // r15
  __int64 v5; // rax
  struct _NDIS_MINIPORT_BLOCK **v6; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  _DWORD *InformationBuffer; // rcx
  UINT TaskBytes; // r14d
  KIRQL v11; // dl
  __int64 v12; // [rsp+40h] [rbp-28h]
  KIRQL NewIrql; // [rsp+78h] [rbp+10h] BYREF

  v2 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a2 + 4);
  NewIrql = 0;
  v4 = (char)a1;
  v5 = *((_QWORD *)a2 + 2);
  v6 = (struct _NDIS_MINIPORT_BLOCK **)(v5 + 32);
  if ( !v5 )
    v6 = (struct _NDIS_MINIPORT_BLOCK **)a2;
  v7 = *v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB2u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v7,
      (char)a1,
      1,
      *((_DWORD *)a2 + 10));
  if ( !v7->Offload )
    goto LABEL_15;
  if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength < 0x1C )
  {
    *((_DWORD *)a2 + 10) = -1073676266;
    v2->DATA.QUERY_INFORMATION.BytesNeeded = ndisGetTaskBytes(v7);
    goto LABEL_16;
  }
  InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
  if ( *InformationBuffer != 1
    || InformationBuffer[1] != 28
    || InformationBuffer[4] != 2
    || (InformationBuffer[5] & 1) == 0
    || InformationBuffer[6] != 14 )
  {
    goto LABEL_15;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
  TaskBytes = ndisGetTaskBytes(v7);
  if ( TaskBytes == 28 )
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, NewIrql);
LABEL_15:
    *((_DWORD *)a2 + 10) = -1073741637;
    goto LABEL_16;
  }
  if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= TaskBytes )
  {
    ndisFillOffloadCapsInTasks(v7, v2);
    v11 = NewIrql;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v11);
    *((_DWORD *)a2 + 10) = 0;
  }
  else
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, NewIrql);
    *((_DWORD *)a2 + 10) = -1073676266;
    v2->DATA.QUERY_INFORMATION.BytesNeeded = TaskBytes;
  }
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = *((_DWORD *)a2 + 10);
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB3u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v7,
      v4,
      1,
      v12);
  }
  return 1;
}
