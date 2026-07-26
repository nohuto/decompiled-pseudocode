/*
 * XREFs of ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0022B4C
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F620 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A098 (WPP_RECORDER_SF_D.c)
 */

unsigned __int8 __fastcall ndisSetMiniportPacketFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _X_FILTER *EthDB; // r13
  const struct _GUID *v7; // rdx
  char v8; // si
  unsigned int v9; // ebp
  unsigned int *p_RequestBuffer; // r15
  KIRQL v11; // dl
  int v12; // ecx
  unsigned __int8 v13; // bp
  int v14; // edx
  unsigned int v16; // ebp
  KIRQL NewIrql; // [rsp+78h] [rbp+10h] BYREF

  EthDB = 0LL;
  NewIrql = 0;
  v7 = &WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      a2);
    v7 = &WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids;
  }
  *a3 = 0;
  v8 = 1;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    v9 = *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( a1->MiniportMediaType == NdisMedium802_3 )
      EthDB = a1->EthDB;
    p_RequestBuffer = &a1->RequestBuffer;
    a1->RequestBuffer = v9;
    if ( EthDB )
    {
      if ( (v9 & 0xFFFFFF7F) != (EthDB->MiniportPacketFilter & 0xFFFFFF7F) )
      {
        *p_RequestBuffer = v9 & 0xFFFFFF7F;
        v8 = 0;
      }
      if ( (a1->Flags & 0x20000) == 0 )
        goto LABEL_10;
      v16 = v9 & 0xFFFFFF5F;
      if ( v16 == (EthDB->MiniportPacketFilter & 0xFFFFFF5F) )
        goto LABEL_10;
      *p_RequestBuffer = v16;
    }
    v8 = 0;
LABEL_10:
    v11 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v11);
    v12 = *(_DWORD *)&a2->NdisReserved[16];
    v13 = 0;
    if ( (v12 & 0x80000) == 0 )
      v13 = v8;
    if ( v13 )
    {
      if ( !*a3 )
        a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
    }
    else
    {
      *(_DWORD *)&a2->NdisReserved[16] = v12 | 0x800;
      a1->SetInfoBuf = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      a1->SetInfoBufLen = a2->DATA.METHOD_INFORMATION.InputBufferLength;
      a2->DATA.QUERY_INFORMATION.InformationBuffer = p_RequestBuffer;
      a2->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = v13;
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        11,
        60,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)a1,
        v13,
        *a3);
    }
    return v13;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
  *a3 = -1073676268;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v7,
      11,
      59,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      20);
  }
  return 1;
}
