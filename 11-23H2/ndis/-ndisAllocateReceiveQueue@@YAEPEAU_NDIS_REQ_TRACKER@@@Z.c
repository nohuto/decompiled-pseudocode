/*
 * XREFs of ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00834A0
 * Callers:
 *     ?ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084860 (-ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023980 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024DC4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C005BB94 (WPP_RECORDER_SF_qdL_ea_1C005BB94.c)
 *     ?ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C008343C (-ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

char __fastcall ndisAllocateReceiveQueue(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // r13
  __int64 v2; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  int v4; // r15d
  __int64 v5; // r12
  char *InformationBuffer; // r14
  char v8; // si
  int InformationBufferLength; // eax
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // rdx
  char v12; // cl
  char v13; // al
  _BYTE *OidSourceHandle; // rax
  __int64 Pool2; // rax
  void *v16; // rcx
  size_t BytesRead; // r8
  _QWORD *v18; // rax
  char v19; // cl
  unsigned int NumReceiveQueues; // ecx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rax
  unsigned __int8 *AllocatedQueueIndices; // r15
  unsigned int AllocatedQueueIndicesLength; // r9d
  __int64 v24; // rax
  unsigned __int8 *v25; // rcx
  int v26; // r8d
  _BYTE *v27; // r14
  __int64 v28; // r10
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // r8d
  int v33; // eax
  KIRQL v34; // dl
  _QWORD *v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rax
  KIRQL v38; // dl
  UINT v39; // eax
  unsigned int Size; // [rsp+40h] [rbp-68h]
  unsigned int Size_4; // [rsp+44h] [rbp-64h]
  char *v43; // [rsp+48h] [rbp-60h]
  char v44; // [rsp+B0h] [rbp+8h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+10h] BYREF
  char v46; // [rsp+C0h] [rbp+18h]
  int v47; // [rsp+C8h] [rbp+20h]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0;
  v5 = 0LL;
  NewIrql = 0;
  v47 = 0;
  InformationBuffer = (char *)v1->DATA.QUERY_INFORMATION.InformationBuffer;
  v43 = InformationBuffer;
  v8 = 1;
  v46 = 0;
  v44 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0xEu,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      v3);
  InformationBufferLength = 1096;
  *((_DWORD *)a1 + 10) = -1073741637;
  v10 = *((_WORD *)InformationBuffer + 1);
  v11 = v10;
  if ( v10 >= 0x448u )
    v11 = 1096LL;
  if ( v11 >= v1->DATA.QUERY_INFORMATION.InformationBufferLength )
  {
    InformationBufferLength = v1->DATA.QUERY_INFORMATION.InformationBufferLength;
  }
  else if ( v10 < 0x448u )
  {
    InformationBufferLength = *((unsigned __int16 *)InformationBuffer + 1);
  }
  v1->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v12 = 2;
  v1->DATA.METHOD_INFORMATION.BytesRead = InformationBufferLength;
  if ( *((_DWORD *)InformationBuffer + 2) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v13 = 0;
    goto LABEL_57;
  }
  if ( !ndisReferenceMiniport(v3, 0x45u) )
    goto LABEL_13;
  v46 = 1;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
LABEL_18:
    if ( *((_DWORD *)InformationBuffer + 2) == 1 && !v5 )
      goto LABEL_20;
    Pool2 = ExAllocatePool2(64LL, 1224LL, 1970357326);
    v2 = Pool2;
    if ( !Pool2 )
    {
LABEL_23:
      *((_DWORD *)a1 + 10) = -1073741670;
      goto LABEL_21;
    }
    *(_DWORD *)(Pool2 + 48) = 0;
    v16 = (void *)(Pool2 + 128);
    BytesRead = v1->DATA.METHOD_INFORMATION.BytesRead;
    *(_QWORD *)(Pool2 + 64) = v3;
    *(_QWORD *)(Pool2 + 72) = v5;
    v18 = (_QWORD *)(Pool2 + 32);
    *(_DWORD *)(v2 + 80) = 1;
    v18[1] = v18;
    *v18 = v18;
    *(_QWORD *)(v2 + 96) = v2 + 88;
    *(_QWORD *)(v2 + 88) = v2 + 88;
    memmove(v16, InformationBuffer, BytesRead);
    v19 = 2;
    *(_WORD *)(v2 + 130) = v1->DATA.METHOD_INFORMATION.BytesRead;
    if ( *(_BYTE *)(v2 + 129) < 2u )
      v19 = *(_BYTE *)(v2 + 129);
    *(_BYTE *)(v2 + 129) = v19;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    NumReceiveQueues = v3->NumReceiveQueues;
    if ( NumReceiveQueues + 1 > 0x3BCBAD )
      goto LABEL_27;
    ReceiveFilterCurrentCapabilities = v3->ReceiveFilterCurrentCapabilities;
    if ( !ReceiveFilterCurrentCapabilities )
    {
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, NewIrql);
LABEL_20:
      *((_DWORD *)a1 + 10) = -1073741637;
LABEL_21:
      v13 = v44;
      goto LABEL_56;
    }
    if ( NumReceiveQueues == ReceiveFilterCurrentCapabilities->NumQueues )
    {
LABEL_27:
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, NewIrql);
      goto LABEL_23;
    }
    AllocatedQueueIndices = v3->AllocatedQueueIndices;
    AllocatedQueueIndicesLength = v3->AllocatedQueueIndicesLength;
    Size = AllocatedQueueIndicesLength;
    if ( AllocatedQueueIndices && (v24 = 0LL, AllocatedQueueIndicesLength) )
    {
      v25 = v3->AllocatedQueueIndices;
      v26 = 0;
      while ( *v25 == 0xFF )
      {
        v26 += 8;
        v24 = (unsigned int)(v24 + 1);
        ++v25;
        v47 = v26;
        if ( (unsigned int)v24 >= AllocatedQueueIndicesLength )
          goto LABEL_36;
      }
      v28 = (unsigned int)v24;
      v29 = 1;
      v30 = AllocatedQueueIndices[v24];
      v31 = 0;
      while ( (v29 & v30) != 0 )
      {
        v29 *= 2;
        if ( (unsigned int)++v31 >= 8 )
          goto LABEL_36;
      }
      v32 = v31 + v26;
      AllocatedQueueIndices[v28] = v29 | v30;
      v47 = v32;
    }
    else
    {
LABEL_36:
      Size_4 = AllocatedQueueIndicesLength + 64;
      v27 = (_BYTE *)ExAllocatePool2(66LL, AllocatedQueueIndicesLength + 64, 1970357326);
      if ( !v27 )
      {
        v3->MiniportThread = 0LL;
        KeReleaseSpinLock(&v3->Lock, NewIrql);
        InformationBuffer = v43;
        *((_DWORD *)a1 + 10) = -1073741670;
        goto LABEL_38;
      }
      memset(&v27[Size], 0, 0x40uLL);
      if ( AllocatedQueueIndices )
      {
        memmove(v27, AllocatedQueueIndices, Size);
        v27[Size] = 1;
        ExFreePoolWithTag(AllocatedQueueIndices, 0);
        v32 = v47;
      }
      else
      {
        *v27 = 3;
        v32 = 1;
        v47 = 1;
      }
      v3->AllocatedQueueIndices = v27;
      InformationBuffer = v43;
      v3->AllocatedQueueIndicesLength = Size_4;
    }
    *((_DWORD *)InformationBuffer + 3) = v32;
    *(_DWORD *)(v2 + 140) = v32;
    *(_DWORD *)(v2 + 48) = v32;
    v33 = ndisAddReceiveQueueToList(v3, (struct _NDIS_RECEIVE_QUEUE_BLOCK *)v2);
    *((_DWORD *)a1 + 10) = v33;
    if ( !v33 )
    {
      if ( v5 )
      {
        v35 = (_QWORD *)(v5 + 736);
        v36 = *(_QWORD *)(v5 + 736);
        v37 = (_QWORD *)(v2 + 16);
        if ( *(_QWORD *)(v36 + 8) != v5 + 736 )
          __fastfail(3u);
        *v37 = v36;
        *(_QWORD *)(v2 + 24) = v35;
        *(_QWORD *)(v36 + 8) = v37;
        *v35 = v37;
        ++*(_DWORD *)(v5 + 752);
      }
      v38 = NewIrql;
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, v38);
      *(_DWORD *)(v2 + 52) = 1;
      v13 = 0;
      v8 = 0;
      v46 = 0;
      goto LABEL_55;
    }
    v34 = NewIrql;
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, v34);
LABEL_38:
    v13 = v44;
LABEL_55:
    v4 = v47;
    goto LABEL_56;
  }
  v5 = (__int64)OidSourceHandle;
  if ( ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xAu) )
  {
    v44 = 1;
    goto LABEL_18;
  }
LABEL_13:
  *((_DWORD *)a1 + 10) = -1073676286;
  v13 = 0;
LABEL_56:
  v12 = 2;
LABEL_57:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v13 )
      ndisMDereferenceOpenUnlocked(v5, 0xAu);
    if ( v46 )
      ndisDereferenceMiniport(v3, 0x45u);
    if ( v2 )
      ExFreePoolWithTag((PVOID)v2, 0);
  }
  else
  {
    v39 = v1->DATA.METHOD_INFORMATION.BytesRead;
    v1->DATA.METHOD_INFORMATION.BytesWritten = v39;
    *((_WORD *)InformationBuffer + 1) = v39;
    if ( (unsigned __int8)InformationBuffer[1] < 2u )
      v12 = InformationBuffer[1];
    InformationBuffer[1] = v12;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0x19u,
      0xFu,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      (char)v3,
      *((_DWORD *)a1 + 10),
      v4);
  return v8;
}
