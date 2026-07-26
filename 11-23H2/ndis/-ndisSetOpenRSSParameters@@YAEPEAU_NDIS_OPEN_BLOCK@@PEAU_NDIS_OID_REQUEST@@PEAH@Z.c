/*
 * XREFs of ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A639C
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A33A0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007C88 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CDB0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029E68 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memcmp @ 0x1C0038280 (memcmp.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C009EE5C (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 */

char __fastcall ndisSetOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  UINT InformationBufferLength; // r11d
  int v7; // ebx
  char v8; // r13
  PVOID *p_InformationBuffer; // r12
  _BYTE *InformationBuffer; // rsi
  unsigned __int8 v11; // dl
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // r9
  UINT v14; // eax
  int v15; // eax
  UINT v16; // r11d
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  unsigned __int16 v18; // r9
  UINT v19; // edx
  _NDIS_RECEIVE_SCALE_PARAMETERS *v20; // r14
  __int64 Pool2; // rax
  unsigned __int8 *v22; // rax
  unsigned __int8 v23; // r13
  __int16 v24; // r12
  unsigned __int64 v25; // rcx
  int v26; // ecx
  int v27; // eax
  __int64 Oid; // r14
  PVOID v29; // rax
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rbx
  int v32; // r12d
  unsigned __int8 v33; // r13
  int v34; // edx
  bool v35; // r8
  char v36; // si
  int v37; // ecx
  int v38; // eax
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v40; // r12d
  _NDIS_RECEIVE_SCALE_PARAMETERS *v41; // rax
  KIRQL v42; // dl
  int v43; // ebx
  bool v44; // zf
  __int64 v45; // [rsp+38h] [rbp-70h]
  int v46; // [rsp+50h] [rbp-58h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h] BYREF
  int v48; // [rsp+B8h] [rbp+10h]
  int *v49; // [rsp+C0h] [rbp+18h]
  size_t Size; // [rsp+C8h] [rbp+20h] BYREF

  v49 = a3;
  MiniportHandle = a1->MiniportHandle;
  LODWORD(Size) = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x73u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  LOBYTE(v48) = 1;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v7 = -1073676268;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v45) = -1073676268;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x74u,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        v45);
    }
    goto LABEL_6;
  }
  p_InformationBuffer = &a2->DATA.QUERY_INFORMATION.InformationBuffer;
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v11 = InformationBuffer[1];
  if ( v11 >= 2u )
  {
    v12 = *((_WORD *)InformationBuffer + 1);
    if ( v12 < 0x28u )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_13:
        v7 = -1073676268;
LABEL_6:
        v8 = v48;
LABEL_7:
        a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        goto LABEL_79;
      }
      v13 = 117;
LABEL_12:
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v13,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)MiniportHandle,
        a2);
      goto LABEL_13;
    }
    v14 = 40;
    if ( v11 >= 3u )
    {
      v14 = 44;
      if ( v12 < 0x2Cu )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_13;
        v13 = 118;
        goto LABEL_12;
      }
    }
    if ( InformationBufferLength < v14 )
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = v14;
      v7 = -1073676268;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v45) = -1073676268;
        WPP_RECORDER_SF_qqL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x77u,
          (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
          (char)MiniportHandle,
          (char)a2,
          v45);
      }
      goto LABEL_6;
    }
  }
  v15 = ndisCalculateRssParametersSize(
          (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
          (unsigned int *)&Size);
  v7 = v15;
  if ( v15 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v45) = v15;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x78u,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)MiniportHandle,
        (char)a2,
        v45);
    }
    goto LABEL_24;
  }
  NdisRSSParameters = a1->NdisRSSParameters;
  if ( !NdisRSSParameters && ((InformationBuffer[4] & 0x10) != 0 || !InformationBuffer[8]) )
    goto LABEL_6;
  if ( *((_WORD *)InformationBuffer + 6) > 0x200u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_32:
      v7 = -1073676267;
LABEL_24:
      v8 = v48;
      goto LABEL_7;
    }
    v18 = 121;
LABEL_31:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v18,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      a1);
    goto LABEL_32;
  }
  if ( *((_WORD *)InformationBuffer + 10) != 40 && (InformationBuffer[4] & 0x10) == 0 && InformationBuffer[8] )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v18 = 122;
    goto LABEL_31;
  }
  v19 = Size;
  if ( !(_DWORD)Size && (InformationBuffer[4] & 0x10) != 0 )
  {
    v19 = *((unsigned __int16 *)InformationBuffer + 1);
    LODWORD(Size) = v19;
  }
  v7 = 0;
  if ( v16 < v19 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = v19;
    v7 = -1073676268;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v45) = -1073676268;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x7Bu,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        v45);
    }
    goto LABEL_24;
  }
  v20 = 0LL;
  if ( NdisRSSParameters )
    v20 = NdisRSSParameters;
  if ( !MiniportHandle->RssParametersBuffer
    && (Pool2 = ExAllocatePool2(72LL, 2216LL, 1936868430),
        (MiniportHandle->RssParametersBuffer = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)Pool2) == 0LL)
    || !a1->RssParametersBuffer
    && (v22 = (unsigned __int8 *)ExAllocatePool2(72LL, 1108LL, 1936868430), (a1->RssParametersBuffer = v22) == 0LL) )
  {
    v7 = -1073741670;
    goto LABEL_6;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  if ( v20 )
  {
    v23 = InformationBuffer[1];
    if ( v20->Header.Revision == v23 )
    {
      if ( InformationBuffer[8] )
      {
        v24 = *((_WORD *)InformationBuffer + 2);
        if ( (v24 & 0x10) == 0
          && v20->IndirectionTableSize == *((_WORD *)InformationBuffer + 6)
          && !memcmp(
                &v20->Header.Type + v20->IndirectionTableOffset,
                &InformationBuffer[*((unsigned int *)InformationBuffer + 4)],
                v20->IndirectionTableSize)
          && v20->HashSecretKeySize == *((_WORD *)InformationBuffer + 10)
          && v20->BaseCpuNumber == *((_WORD *)InformationBuffer + 3)
          && v20->Flags == v24
          && !memcmp(
                &v20->Header.Type + v20->HashSecretKeyOffset,
                &InformationBuffer[*((unsigned int *)InformationBuffer + 6)],
                v20->HashSecretKeySize) )
        {
          v25 = *(_QWORD *)&v20->Header.Type - *(_QWORD *)InformationBuffer;
          if ( *(_QWORD *)&v20->Header.Type == *(_QWORD *)InformationBuffer )
            v25 = v20->HashInformation - (unsigned __int64)*((unsigned int *)InformationBuffer + 2);
          if ( !v25 )
          {
            if ( v23 < 2u
              || (v26 = *((_DWORD *)InformationBuffer + 8), v20->NumberOfProcessorMasks == v26)
              && (v27 = *((_DWORD *)InformationBuffer + 9), v20->ProcessorMasksEntrySize == v27)
              && !memcmp(
                    &v20->Header.Type + v20->ProcessorMasksOffset,
                    &InformationBuffer[*((unsigned int *)InformationBuffer + 7)],
                    (unsigned int)(v26 * v27))
              && (v23 < 3u
               || v20->DefaultProcessorNumber.Group == *((_WORD *)InformationBuffer + 20)
               && v20->DefaultProcessorNumber.Number == InformationBuffer[42]) )
            {
              MiniportHandle->MiniportThread = 0LL;
LABEL_72:
              KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
              goto LABEL_6;
            }
          }
        }
        p_InformationBuffer = &a2->DATA.QUERY_INFORMATION.InformationBuffer;
      }
    }
  }
  if ( (unsigned int)Size > 0x454 )
  {
    MiniportHandle->MiniportThread = 0LL;
    v7 = -1073676268;
    goto LABEL_72;
  }
  Oid = (__int64)MiniportHandle->RssParametersBuffer->Oid;
  memmove((void *)Oid, InformationBuffer, (unsigned int)Size);
  if ( ndisIsRssEnabledForMiniport(MiniportHandle) )
  {
    RssParametersBuffer = MiniportHandle->RssParametersBuffer;
    v32 = *(_DWORD *)(Oid + 8);
    v33 = RssParametersBuffer->Combined[1];
    v34 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8];
    LOBYTE(v48) = *(_BYTE *)(Oid + 1);
    v46 = (unsigned __int8)v32;
    v35 = 0;
    if ( v34 == (unsigned __int8)v32 )
      v35 = v33 == (unsigned __int8)v48;
    if ( *(_WORD *)&RssParametersBuffer->Combined[12] != *(_WORD *)(Oid + 12) )
      goto LABEL_91;
    v36 = 0;
    if ( (*(_WORD *)&RssParametersBuffer->Combined[4] & 0x10) == (*(_WORD *)(Oid + 4) & 0x10) )
      v36 = v35;
    if ( memcmp(
           &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[16]],
           (const void *)(Oid + *(unsigned int *)(Oid + 16)),
           *(unsigned __int16 *)(Oid + 12)) )
    {
LABEL_91:
      v36 = 0;
    }
    if ( v33 >= 2u && (unsigned __int8)v48 >= 2u )
    {
      v37 = *(_DWORD *)(Oid + 32);
      if ( *(_DWORD *)&RssParametersBuffer->Combined[32] != v37
        || (v38 = *(_DWORD *)(Oid + 36), *(_DWORD *)&RssParametersBuffer->Combined[36] != v38)
        || memcmp(
             &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[28]],
             (const void *)(Oid + *(unsigned int *)(Oid + 28)),
             (unsigned int)(v37 * v38)) )
      {
        v36 = 0;
      }
      if ( v33 >= 3u
        && (unsigned __int8)v48 >= 3u
        && (*(_WORD *)&RssParametersBuffer->Combined[40] != *(_WORD *)(Oid + 40)
         || RssParametersBuffer->Combined[42] != *(_BYTE *)(Oid + 42)) )
      {
        v36 = 0;
      }
    }
    if ( *(_WORD *)&RssParametersBuffer->Combined[20] != *(_WORD *)(Oid + 20)
      || memcmp(
           &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
           (const void *)(Oid + *(unsigned int *)(Oid + 24)),
           *(unsigned __int16 *)(Oid + 20)) )
    {
      v36 = 0;
    }
    OpenQueue = MiniportHandle->OpenQueue;
    v40 = v32 & 0xFFFF00;
    while ( OpenQueue )
    {
      v41 = OpenQueue->NdisRSSParameters;
      if ( v41 && OpenQueue != a1 )
        v40 |= v41->HashInformation & 0xFFFF00;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    v42 = NewIrql;
    *(_DWORD *)(Oid + 8) = v40 | v46;
    v43 = *(_DWORD *)&RssParametersBuffer->Combined[8];
    MiniportHandle->MiniportThread = 0LL;
    KeReleaseSpinLock(&MiniportHandle->Lock, v42);
    v8 = 0;
    v44 = v40 == (v43 & 0xFFFF00);
    p_InformationBuffer = &a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( v44 )
      v8 = v36;
    v7 = 0;
    if ( v8 == 1 )
      goto LABEL_7;
  }
  else
  {
    MiniportHandle->MiniportThread = 0LL;
    v8 = 0;
    KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
  }
  v29 = *p_InformationBuffer;
  *(_DWORD *)&a2->NdisReserved[16] |= 0x800u;
  MiniportHandle->SetInfoBuf = v29;
  MiniportHandle->SetInfoBufLen = a2->DATA.METHOD_INFORMATION.InputBufferLength;
  *p_InformationBuffer = MiniportHandle->RssParametersBuffer->Oid;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = Size;
LABEL_79:
  *v49 = v7;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Cu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v8,
      v7);
  if ( v7 && (byte_1C00F7644 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v7,
      1,
      (char)a1);
  return v8;
}
