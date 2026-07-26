/*
 * XREFs of ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0087D20
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A33A0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CDB0 (WPP_RECORDER_SF_qqL.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069E08 (-ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0086190 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C00863AC (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00868AC (-ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C0086994 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C0086D70 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1C0086F18 (-ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z.c)
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0087CA0 (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 *     WPP_RECORDER_SF_dqqL @ 0x1C0088E70 (WPP_RECORDER_SF_dqqL.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C009EE5C (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSv1ParametersForMiniportV2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3,
        int a4)
{
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *InformationBuffer; // r13
  int v5; // r15d
  unsigned __int16 v8; // r12
  bool v9; // cc
  unsigned __int16 Flags; // cx
  int IndirectionTableSize; // edx
  int v12; // edi
  int v13; // eax
  KIRQL v14; // dl
  unsigned __int16 v15; // r9
  UCHAR Revision; // al
  char v17; // di
  unsigned int v18; // ecx
  size_t v19; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v20; // rax
  char v21; // r9
  struct _PROCESSOR_NUMBER DefaultProcessorNumber; // ebx
  unsigned __int16 v23; // r8
  bool v24; // zf
  unsigned __int16 v25; // cx
  unsigned int MaxNumRssProcessors; // eax
  struct _PROCESSOR_NUMBER *v27; // rax
  KIRQL v28; // dl
  unsigned __int8 result; // al
  bool v30; // [rsp+50h] [rbp-29h]
  bool v31; // [rsp+51h] [rbp-28h]
  char IsTargetNonDefaultVPort; // [rsp+52h] [rbp-27h]
  struct _PROCESSOR_NUMBER v33; // [rsp+54h] [rbp-25h] BYREF
  unsigned __int16 v34; // [rsp+58h] [rbp-21h]
  unsigned int v35; // [rsp+5Ch] [rbp-1Dh] BYREF
  void *Src; // [rsp+60h] [rbp-19h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v37; // [rsp+68h] [rbp-11h] BYREF
  struct _NDIS_VPORT_BLOCK *v38; // [rsp+70h] [rbp-9h] BYREF
  void *v39; // [rsp+78h] [rbp-1h]
  struct _PROCESSOR_NUMBER *v40; // [rsp+80h] [rbp+7h]
  struct _PROCESSOR_NUMBER *v41; // [rsp+88h] [rbp+Fh]
  size_t Size; // [rsp+90h] [rbp+17h] BYREF
  char v43; // [rsp+E8h] [rbp+6Fh]
  KIRQL NewIrql; // [rsp+F8h] [rbp+7Fh] BYREF

  InformationBuffer = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v5 = 0;
  Src = 0LL;
  v33 = 0;
  NewIrql = 0;
  v8 = 0;
  v9 = InformationBuffer->Header.Revision <= 2u;
  v41 = 0LL;
  v40 = 0LL;
  v34 = 0;
  v38 = 0LL;
  v30 = 0;
  v31 = 0;
  v39 = 0LL;
  v37 = 0LL;
  if ( !v9 )
    InformationBuffer->DefaultProcessorNumber.Reserved = 0;
  Flags = InformationBuffer->Flags;
  if ( (Flags & 0x10) != 0 || !LOBYTE(InformationBuffer->HashInformation) )
  {
    v43 = 0;
    goto LABEL_11;
  }
  v43 = 1;
  if ( (Flags & 4) != 0
    || (IndirectionTableSize = InformationBuffer->IndirectionTableSize,
        v8 = (unsigned __int16)IndirectionTableSize >> 2,
        (unsigned __int16)IndirectionTableSize >> 2)
    && ((unsigned __int16)(v8 - 1) & ((unsigned __int16)IndirectionTableSize >> 2)) == 0 )
  {
LABEL_11:
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    v13 = ndisAllocateCombinedRSSParameters(
            a1,
            a2,
            &v38,
            &v37,
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&Size,
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&Src);
    v14 = NewIrql;
    v12 = v13;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v14);
    if ( v12 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_51;
      v15 = 13;
LABEL_14:
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v15,
        (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
        (char)a1,
        (char)a2,
        v12);
      goto LABEL_51;
    }
    IsTargetNonDefaultVPort = ndisIsTargetNonDefaultVPort(a2, (NDIS_OBJECT_HEADER *)&v35);
    v12 = ndisCalculateRssParametersSize(InformationBuffer, (unsigned int *)&v33.Group);
    if ( v12 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_51;
      v15 = 14;
      goto LABEL_14;
    }
    Revision = InformationBuffer->Header.Revision;
    v17 = 0;
    if ( Revision == 1 )
    {
      v18 = 28;
    }
    else if ( Revision == 2 )
    {
      v18 = 40;
    }
    else
    {
      v17 = 1;
      v18 = 44;
    }
    v19 = (unsigned int)v33;
    if ( *(_DWORD *)&v33 <= v18 )
      v19 = v18;
    Size = v19;
    memmove(Src, InformationBuffer, (unsigned int)v19);
    v20 = v37;
    v21 = 0;
    DefaultProcessorNumber = v37->DefaultProcessorNumber;
    v33 = DefaultProcessorNumber;
    if ( v43 )
    {
      v23 = InformationBuffer->Flags;
      v5 = ~(_BYTE)v23 & 2 | 1;
      if ( (v23 & 8) == 0 )
      {
        v5 = ~(unsigned __int8)InformationBuffer->Flags & 2 | 5;
        v39 = &InformationBuffer->Header.Type + InformationBuffer->HashSecretKeyOffset;
      }
      if ( v17 && (v23 & 0x20) == 0 )
      {
        v33 = InformationBuffer->DefaultProcessorNumber;
        v33.Reserved = 0;
        v24 = !ndisAreProcessorsEqual(DefaultProcessorNumber, v33);
        v20 = v37;
        v31 = v24;
      }
      if ( (v23 & 4) == 0 )
      {
        v41 = (struct _PROCESSOR_NUMBER *)(&v20->Header.Type + v20->IndirectionTableOffset);
        v25 = v20->IndirectionTableSize >> 2;
        v34 = v25;
        v8 = *((_WORD *)Src + 6) >> 2;
        v40 = (struct _PROCESSOR_NUMBER *)((char *)Src + *((unsigned int *)Src + 4));
        v30 = v8 < v25;
        if ( v8 > v25 )
        {
          v5 |= 0x10u;
          v30 = v8 < v25;
        }
      }
    }
    if ( IsTargetNonDefaultVPort == v21 )
    {
      MaxNumRssProcessors = ndisGetMaxNumRssProcessors(a1);
      v21 = 0;
    }
    else
    {
      MaxNumRssProcessors = v38->VPortParams.NumQueuePairs;
    }
    v35 = MaxNumRssProcessors;
    if ( v43 != v21 && a1->RssV2Initialized == v21 )
    {
      v12 = ndisInternalSetRSSInitialize(a1, a2);
      if ( v12 )
        goto LABEL_51;
      a1->RssV2Initialized = 1;
    }
    v12 = ndisInternalSetRSSv2Parameters(
            a1,
            a2,
            v5,
            v35,
            v8,
            InformationBuffer->HashInformation,
            InformationBuffer->HashSecretKeySize,
            v39);
    if ( v12 )
      goto LABEL_51;
    if ( v43 )
    {
      if ( v31 )
      {
        v27 = (struct _PROCESSOR_NUMBER *)((char *)Src + 40);
      }
      else
      {
        if ( (InformationBuffer->Flags & 4) != 0 )
          goto LABEL_50;
        v27 = &v33;
      }
      v12 = ndisInternalSetRSSv2IndirectionTable(a1, a2, v34, v41, DefaultProcessorNumber, v8, v40, v27);
      if ( v12 )
        goto LABEL_51;
      if ( v30 )
      {
        v12 = ndisInternalSetRSSv2Parameters(a1, a2, v5 & 1 | 0x10u, 0, v8, 0, 0, 0LL);
        if ( v12 )
          goto LABEL_51;
      }
    }
LABEL_50:
    v12 = 0;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    memmove(v37, Src, Size);
    ndisSetCombinedRSSParameters(a1, a2, v38, v37);
    v28 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v28);
    goto LABEL_51;
  }
  v12 = -1073741811;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), IndirectionTableSize, (_DWORD)a3, a4);
LABEL_51:
  result = 1;
  a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  *a3 = v12;
  return result;
}
