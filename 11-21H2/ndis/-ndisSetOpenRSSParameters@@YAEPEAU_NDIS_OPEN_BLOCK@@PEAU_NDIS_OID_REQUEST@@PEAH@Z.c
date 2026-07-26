/*
 * XREFs of ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0028268
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0028030 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C0027EA8 (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029554 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

char __fastcall ndisSetOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  UINT InformationBufferLength; // r14d
  _BYTE *InformationBuffer; // rbx
  unsigned __int8 v8; // cl
  unsigned __int16 v9; // dx
  UINT v10; // eax
  int v11; // eax
  int v12; // edi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  UINT v14; // edx
  _NDIS_RECEIVE_SCALE_PARAMETERS *v15; // r14
  unsigned __int8 v16; // r13
  __int16 v17; // r12
  unsigned __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  char v21; // r14
  __int64 Oid; // r14
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rbx
  unsigned __int8 v25; // r8
  int v26; // r13d
  int v27; // edx
  bool v28; // al
  bool v29; // r8
  char v30; // r12
  int v31; // ecx
  int v32; // eax
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v34; // r13d
  _NDIS_RECEIVE_SCALE_PARAMETERS *v35; // rax
  KIRQL v36; // dl
  int v37; // ebx
  unsigned __int16 v38; // r9
  unsigned __int16 v39; // r9
  __int64 Pool2; // rax
  unsigned __int8 *v41; // rax
  PVOID v42; // rax
  __int64 v43; // [rsp+38h] [rbp-70h]
  UINT Size; // [rsp+50h] [rbp-58h]
  int Size_4; // [rsp+54h] [rbp-54h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h] BYREF
  int v47; // [rsp+B8h] [rbp+10h]
  int *v48; // [rsp+C0h] [rbp+18h]
  unsigned int v49; // [rsp+C8h] [rbp+20h] BYREF

  v48 = a3;
  MiniportHandle = a1->MiniportHandle;
  v49 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x73u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  LOBYTE(v47) = 1;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v12 = -1073676268;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v43) = -1073676268;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x74u,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        v43);
    }
    goto LABEL_41;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v8 = InformationBuffer[1];
  if ( v8 < 2u )
    goto LABEL_9;
  v9 = *((_WORD *)InformationBuffer + 1);
  if ( v9 < 0x28u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_81:
      v12 = -1073676268;
      goto LABEL_41;
    }
    v38 = 117;
LABEL_80:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v38,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      a2);
    goto LABEL_81;
  }
  v10 = 40;
  if ( v8 >= 3u )
  {
    v10 = 44;
    if ( v9 < 0x2Cu )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_81;
      v38 = 118;
      goto LABEL_80;
    }
  }
  if ( InformationBufferLength < v10 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = v10;
    v12 = -1073676268;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v43) = -1073676268;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x77u,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        (char)MiniportHandle,
        (char)a2,
        v43);
    }
    goto LABEL_41;
  }
LABEL_9:
  v11 = ndisCalculateRssParametersSize(
          (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
          &v49);
  v12 = v11;
  if ( v11 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v43) = v11;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x78u,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        (char)MiniportHandle,
        (char)a2,
        v43);
    }
    goto LABEL_90;
  }
  NdisRSSParameters = a1->NdisRSSParameters;
  if ( !NdisRSSParameters && ((InformationBuffer[4] & 0x10) != 0 || !InformationBuffer[8]) )
  {
LABEL_41:
    v21 = v47;
LABEL_42:
    a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    goto LABEL_43;
  }
  if ( *((_WORD *)InformationBuffer + 6) > 0x200u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_89;
    v39 = 121;
LABEL_88:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v39,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      a1);
LABEL_89:
    v12 = -1073676267;
LABEL_90:
    v21 = v47;
    goto LABEL_42;
  }
  if ( *((_WORD *)InformationBuffer + 10) != 40 && (InformationBuffer[4] & 0x10) == 0 && InformationBuffer[8] )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_89;
    v39 = 122;
    goto LABEL_88;
  }
  v14 = v49;
  Size = v49;
  if ( !v49 && (InformationBuffer[4] & 0x10) != 0 )
  {
    v14 = *((unsigned __int16 *)InformationBuffer + 1);
    Size = v14;
  }
  v12 = 0;
  if ( InformationBufferLength < v14 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = v14;
    v12 = -1073676268;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v43) = -1073676268;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x7Bu,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        v43);
    }
    goto LABEL_90;
  }
  v15 = 0LL;
  if ( NdisRSSParameters )
    v15 = a1->NdisRSSParameters;
  if ( !MiniportHandle->RssParametersBuffer
    && (Pool2 = ExAllocatePool2(72LL, 2216LL, 1936868430),
        (MiniportHandle->RssParametersBuffer = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)Pool2) == 0LL)
    || !a1->RssParametersBuffer
    && (v41 = (unsigned __int8 *)ExAllocatePool2(72LL, 1108LL, 1936868430), (a1->RssParametersBuffer = v41) == 0LL) )
  {
    v12 = -1073741670;
    goto LABEL_41;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  if ( v15 )
  {
    v16 = InformationBuffer[1];
    if ( v15->Header.Revision == v16 )
    {
      if ( InformationBuffer[8] )
      {
        v17 = *((_WORD *)InformationBuffer + 2);
        if ( (v17 & 0x10) == 0
          && v15->IndirectionTableSize == *((_WORD *)InformationBuffer + 6)
          && !memcmp(
                &v15->Header.Type + v15->IndirectionTableOffset,
                &InformationBuffer[*((unsigned int *)InformationBuffer + 4)],
                v15->IndirectionTableSize)
          && v15->HashSecretKeySize == *((_WORD *)InformationBuffer + 10)
          && v15->BaseCpuNumber == *((_WORD *)InformationBuffer + 3)
          && v15->Flags == v17
          && !memcmp(
                &v15->Header.Type + v15->HashSecretKeyOffset,
                &InformationBuffer[*((unsigned int *)InformationBuffer + 6)],
                v15->HashSecretKeySize) )
        {
          v18 = *(_QWORD *)&v15->Header.Type - *(_QWORD *)InformationBuffer;
          if ( *(_QWORD *)&v15->Header.Type == *(_QWORD *)InformationBuffer )
            v18 = v15->HashInformation - (unsigned __int64)*((unsigned int *)InformationBuffer + 2);
          if ( !v18 )
          {
            if ( v16 < 2u
              || (v19 = *((_DWORD *)InformationBuffer + 8), v15->NumberOfProcessorMasks == v19)
              && (v20 = *((_DWORD *)InformationBuffer + 9), v15->ProcessorMasksEntrySize == v20)
              && !memcmp(
                    &v15->Header.Type + v15->ProcessorMasksOffset,
                    &InformationBuffer[*((unsigned int *)InformationBuffer + 7)],
                    (unsigned int)(v19 * v20))
              && (v16 < 3u
               || v15->DefaultProcessorNumber.Group == *((_WORD *)InformationBuffer + 20)
               && v15->DefaultProcessorNumber.Number == InformationBuffer[42]) )
            {
              MiniportHandle->MiniportThread = 0LL;
LABEL_40:
              KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
              goto LABEL_41;
            }
          }
        }
      }
    }
  }
  if ( Size > 0x454 )
  {
    MiniportHandle->MiniportThread = 0LL;
    v12 = -1073676268;
    goto LABEL_40;
  }
  Oid = (__int64)MiniportHandle->RssParametersBuffer->Oid;
  memmove((void *)Oid, InformationBuffer, Size);
  if ( ndisIsRssEnabledForMiniport(MiniportHandle) )
  {
    RssParametersBuffer = MiniportHandle->RssParametersBuffer;
    v25 = *(_BYTE *)(Oid + 1);
    v26 = *(_DWORD *)(Oid + 8);
    v27 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8];
    v28 = RssParametersBuffer->Combined[1] == v25;
    LOBYTE(v47) = RssParametersBuffer->Combined[1];
    LOBYTE(v49) = v25;
    v29 = 0;
    if ( v27 == (unsigned __int8)v26 )
      v29 = v28;
    Size_4 = (unsigned __int8)v26;
    if ( *(_WORD *)&RssParametersBuffer->Combined[12] != *(_WORD *)(Oid + 12) )
      goto LABEL_111;
    v30 = 0;
    if ( (*(_WORD *)&RssParametersBuffer->Combined[4] & 0x10) == (*(_WORD *)(Oid + 4) & 0x10) )
      v30 = v29;
    if ( memcmp(
           &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[16]],
           (const void *)(Oid + *(unsigned int *)(Oid + 16)),
           *(unsigned __int16 *)(Oid + 12)) )
    {
LABEL_111:
      v30 = 0;
    }
    if ( (unsigned __int8)v47 >= 2u && (unsigned __int8)v49 >= 2u )
    {
      v31 = *(_DWORD *)(Oid + 32);
      if ( *(_DWORD *)&RssParametersBuffer->Combined[32] != v31
        || (v32 = *(_DWORD *)(Oid + 36), *(_DWORD *)&RssParametersBuffer->Combined[36] != v32)
        || memcmp(
             &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[28]],
             (const void *)(Oid + *(unsigned int *)(Oid + 28)),
             (unsigned int)(v31 * v32)) )
      {
        v30 = 0;
      }
      if ( (unsigned __int8)v47 >= 3u
        && (unsigned __int8)v49 >= 3u
        && (*(_WORD *)&RssParametersBuffer->Combined[40] != *(_WORD *)(Oid + 40)
         || RssParametersBuffer->Combined[42] != *(_BYTE *)(Oid + 42)) )
      {
        v30 = 0;
      }
    }
    if ( *(_WORD *)&RssParametersBuffer->Combined[20] != *(_WORD *)(Oid + 20)
      || memcmp(
           &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
           (const void *)(Oid + *(unsigned int *)(Oid + 24)),
           *(unsigned __int16 *)(Oid + 20)) )
    {
      v30 = 0;
    }
    OpenQueue = MiniportHandle->OpenQueue;
    v34 = v26 & 0xFFFF00;
    while ( OpenQueue )
    {
      v35 = OpenQueue->NdisRSSParameters;
      if ( v35 && OpenQueue != a1 )
        v34 |= v35->HashInformation & 0xFFFF00;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    v36 = NewIrql;
    *(_DWORD *)(Oid + 8) = v34 | Size_4;
    v37 = *(_DWORD *)&RssParametersBuffer->Combined[8];
    MiniportHandle->MiniportThread = 0LL;
    KeReleaseSpinLock(&MiniportHandle->Lock, v36);
    v21 = 0;
    if ( v34 == (v37 & 0xFFFF00) )
      v21 = v30;
    if ( v21 == 1 )
      goto LABEL_42;
  }
  else
  {
    MiniportHandle->MiniportThread = 0LL;
    v21 = 0;
    KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
  }
  v42 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *(_DWORD *)&a2->NdisReserved[16] |= 0x800u;
  MiniportHandle->SetInfoBuf = v42;
  MiniportHandle->SetInfoBufLen = a2->DATA.METHOD_INFORMATION.InputBufferLength;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = MiniportHandle->RssParametersBuffer->Oid;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = Size;
LABEL_43:
  *v48 = v12;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Cu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v21,
      v12);
  if ( v12 && (byte_1C00EE584 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      (unsigned int)&SetOpenRSSCapsFailed,
      (_DWORD)MiniportHandle + 4008,
      (_DWORD)MiniportHandle + 4008,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v12,
      1,
      (char)a1);
  return v21;
}
