/*
 * XREFs of ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0023C54
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001E9A0 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 */

unsigned __int8 __fastcall ndisSetMiniportPacketFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _X_FILTER *EthDB; // r13
  struct _NDIS_OID_REQUEST *v5; // rbx
  char v7; // si
  unsigned int v8; // ebp
  unsigned int *p_RequestBuffer; // r15
  KIRQL v10; // dl
  int v11; // ecx
  unsigned __int8 v12; // bp
  int v13; // edx
  unsigned int v15; // ebp
  KIRQL NewIrql; // [rsp+78h] [rbp+10h] BYREF

  EthDB = 0LL;
  NewIrql = 0;
  v5 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      a2);
  *a3 = 0;
  v7 = 1;
  if ( v5->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    v8 = *(_DWORD *)v5->DATA.QUERY_INFORMATION.InformationBuffer;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( a1->MiniportMediaType == NdisMedium802_3 )
      EthDB = a1->EthDB;
    p_RequestBuffer = &a1->RequestBuffer;
    a1->RequestBuffer = v8;
    if ( EthDB )
    {
      if ( (v8 & 0xFFFFFF7F) != (EthDB->MiniportPacketFilter & 0xFFFFFF7F) )
      {
        *p_RequestBuffer = v8 & 0xFFFFFF7F;
        v7 = 0;
      }
      if ( (a1->Flags & 0x20000) == 0 )
        goto LABEL_10;
      v15 = v8 & 0xFFFFFF5F;
      if ( v15 == (EthDB->MiniportPacketFilter & 0xFFFFFF5F) )
        goto LABEL_10;
      *p_RequestBuffer = v15;
    }
    v7 = 0;
LABEL_10:
    v10 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
    v11 = *(_DWORD *)&v5->NdisReserved[16];
    v12 = 0;
    if ( (v11 & 0x80000) == 0 )
      v12 = v7;
    if ( v12 )
    {
      if ( !*a3 )
        v5->DATA.QUERY_INFORMATION.BytesWritten = 4;
    }
    else
    {
      *(_DWORD *)&v5->NdisReserved[16] = v11 | 0x800;
      a1->SetInfoBuf = v5->DATA.QUERY_INFORMATION.InformationBuffer;
      a1->SetInfoBufLen = v5->DATA.METHOD_INFORMATION.InputBufferLength;
      v5->DATA.QUERY_INFORMATION.InformationBuffer = p_RequestBuffer;
      v5->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = v12;
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        11,
        60,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        (char)a1,
        v12,
        *a3);
    }
    return v12;
  }
  v5->DATA.QUERY_INFORMATION.BytesNeeded = 4;
  *a3 = -1073676268;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      59,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      20);
  }
  return 1;
}
