/*
 * XREFs of ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C001704C
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C006D734 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01488FC (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0017254 (WPP_RECORDER_SF_qqd_ea_1C0017254.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F73C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C009FD98 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z @ 0x1C00A03D8 (-ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C00A5750 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        unsigned __int8 a3)
{
  struct _NDIS_OID_REQUEST *v3; // rsi
  struct _NDIS_OPEN_BLOCK *v4; // rdi
  unsigned int v5; // r12d
  unsigned int v7; // ebx
  bool v8; // al
  unsigned int v9; // r15d
  _SINGLE_LIST_ENTRY *i; // rbx
  _NDIS_OPEN_BLOCK *k; // rax
  struct _NDIS_OID_REQUEST *v13; // rax
  __int64 v14; // rdx
  _LIST_ENTRY *NdisReserved; // rax
  _LIST_ENTRY *Blink; // rcx
  struct _NDIS_OID_REQUEST *v17; // rax
  struct _NDIS_OID_REQUEST *v18; // rbx
  __int64 v19; // rdx
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *v21; // rbx
  _NDIS_MINIPORT_OFFLOAD *Offload; // r11
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  char v24; // r14
  _NDIS_OPEN_OFFLOAD *v25; // rcx
  unsigned int HeaderSize; // eax
  __int64 v27; // xmm1_8
  bool v28; // zf
  unsigned int v29; // eax
  __int64 v30; // xmm0_8
  unsigned int v31; // eax
  struct _NDIS_OID_REQUEST *v32; // rax
  struct _NDIS_OID_REQUEST *v33; // rbx
  __int64 v34; // rdx
  _LIST_ENTRY *v35; // rax
  _LIST_ENTRY *v36; // rbx
  unsigned int Next; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  struct _NDIS_OID_REQUEST *v41; // rax
  struct _NDIS_OID_REQUEST *v42; // r14
  __int64 v43; // rdx
  _LIST_ENTRY *v44; // rax
  _LIST_ENTRY *v45; // rcx
  _SINGLE_LIST_ENTRY *j; // rbx
  unsigned int v47; // eax
  unsigned int v48; // ecx
  struct _NDIS_OID_REQUEST *v49; // rax
  struct _NDIS_OID_REQUEST *v50; // r14
  _LIST_ENTRY *v51; // rax
  _LIST_ENTRY *v52; // rcx
  struct _NDIS_OID_REQUEST *v53; // rax
  struct _NDIS_OID_REQUEST *v54; // rbx
  __int64 v55; // rdx
  _LIST_ENTRY *v56; // rax
  _LIST_ENTRY *v57; // rbx
  unsigned __int8 v58; // r9
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v60; // rax
  char v61[8]; // [rsp+30h] [rbp-39h]
  unsigned __int8 v62; // [rsp+40h] [rbp-29h]
  struct _LIST_ENTRY v63; // [rsp+48h] [rbp-21h] BYREF
  int v64; // [rsp+58h] [rbp-11h] BYREF
  struct _NDIS_OFFLOAD_ENCAPSULATION v65; // [rsp+60h] [rbp-9h] BYREF

  v3 = 0LL;
  v62 = a3;
  v4 = a2;
  v5 = 0;
  v7 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v61[0] = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      63,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      v61[0],
      a3);
    a3 = v62;
  }
  v8 = !v4 && !a3;
  v63.Blink = &v63;
  v63.Flink = &v63;
  if ( !v8 && !a3 )
    goto LABEL_7;
  if ( a1->MediaType == NdisMedium802_3 )
  {
    v64 = -1;
    v13 = ndisMAllocateRequest(v4, 0x1010Eu, NdisRequestSetInformation, &v64, 4u);
    v3 = v13;
    if ( !v13 )
      goto LABEL_18;
    v13->Header.Type = -106;
    v13->Header.Revision = 1;
    v13->Header.Size = 248;
    *(_DWORD *)&v13->NdisReserved[16] |= 2u;
    *(_QWORD *)&v13->NdisReserved[32] = v4;
    EtwActivityIdControl(3u, (LPGUID)&v13->NdisReserved[96]);
    if ( v4 )
    {
      LOBYTE(v14) = 6;
      ndisMReferenceOpen(v4, v14);
      *(_DWORD *)&v3->NdisReserved[16] |= 0x200u;
    }
    else
    {
      *(_QWORD *)&v3->NdisReserved[32] = &ndisIntReqRestore;
    }
    NdisReserved = (_LIST_ENTRY *)v3->NdisReserved;
    *(_DWORD *)&v3->NdisReserved[16] |= 0x80000u;
    Blink = v63.Blink;
    if ( v63.Blink->Flink != &v63 )
      goto LABEL_90;
    *(_QWORD *)&v3->NdisReserved[8] = v63.Blink;
    NdisReserved->Flink = &v63;
    v5 = 1;
    Blink->Flink = NdisReserved;
    v63.Blink = (_LIST_ENTRY *)v3->NdisReserved;
  }
  if ( a1->MediaType == NdisMedium802_3 )
  {
    v17 = ndisMAllocateRequest(v4, 0x1010103u, NdisRequestSetInformation, 0LL, 0);
    v18 = v17;
    if ( !v17 )
      goto LABEL_16;
    v17->Header.Type = -106;
    v17->Header.Revision = 1;
    v17->Header.Size = 248;
    *(_DWORD *)&v17->NdisReserved[16] |= 2u;
    *(_QWORD *)&v17->NdisReserved[32] = v4;
    EtwActivityIdControl(3u, (LPGUID)&v17->NdisReserved[96]);
    if ( v4 )
    {
      LOBYTE(v19) = 6;
      ndisMReferenceOpen(v4, v19);
      *(_DWORD *)&v18->NdisReserved[16] |= 0x200u;
    }
    else
    {
      *(_QWORD *)&v18->NdisReserved[32] = &ndisIntReqRestore;
    }
    *(_DWORD *)&v18->NdisReserved[16] |= 0x80000u;
    v20 = v63.Blink;
    v3 = v18;
    v21 = (_LIST_ENTRY *)v18->NdisReserved;
    if ( v63.Blink->Flink != &v63 )
      goto LABEL_90;
    v21->Blink = v63.Blink;
    v21->Flink = &v63;
    ++v5;
    v20->Flink = v21;
    v63.Blink = v21;
  }
  Offload = a1->Offload;
  if ( !Offload || Offload->SupportsTopOffload != 1 )
    goto LABEL_7;
  OpenQueue = a1->OpenQueue;
  v24 = 1;
  memset(&v65, 0, sizeof(v65));
  for ( ; OpenQueue; OpenQueue = OpenQueue->MiniportNextOpen )
  {
    v25 = OpenQueue->Offload;
    if ( v25 && v25->AlreadySetEncapsulation )
    {
      if ( v24 )
      {
        if ( v25->SetEncapsulation.Header.Type != 0xA8
          || !v25->SetEncapsulation.Header.Revision
          || v25->SetEncapsulation.Header.Size < 0x1Cu )
        {
          goto LABEL_16;
        }
        v24 = 0;
        HeaderSize = v25->SetEncapsulation.IPv6.HeaderSize;
        v27 = *(_QWORD *)&v25->SetEncapsulation.IPv6.Enabled;
        *(_OWORD *)&v65.Header.Type = *(_OWORD *)&v25->SetEncapsulation.Header.Type;
        v65.IPv6.HeaderSize = HeaderSize;
        *(_QWORD *)&v65.IPv6.Enabled = v27;
      }
      else if ( (unsigned int)ndisMergeEncapsulations(&v25->SetEncapsulation, &v65) )
      {
        goto LABEL_16;
      }
    }
  }
  if ( v65.Header.Type == 0xA8
    || (v28 = Offload->MiniportSetEncapsulation.Header.Type == 0xA8, v65.Header = (_NDIS_OBJECT_HEADER)1835432, !v28)
    || !Offload->MiniportSetEncapsulation.Header.Revision
    || Offload->MiniportSetEncapsulation.Header.Size < 0x1Cu
    || Offload->MiniportSetEncapsulation.IPv4.Enabled == 2 && Offload->MiniportSetEncapsulation.IPv6.Enabled == 2 )
  {
LABEL_7:
    v9 = a1->WakeUpEnable & 5;
    v64 = v9;
    if ( v4 )
    {
      for ( i = v4->PatternList.Next; i; i = i->Next )
      {
        if ( (struct _NDIS_OPEN_BLOCK *)i[3].Next == v4 )
        {
          Next = (unsigned int)i[7].Next;
          v38 = Next + 24;
          if ( Next + 24 < Next )
            goto LABEL_16;
          v39 = (unsigned int)i[8].Next;
          v40 = v39 + v38;
          if ( v40 < v39 )
            goto LABEL_16;
          v41 = ndisMAllocateRequest(v4, 0xFD010104, NdisRequestSetInformation, &i[6], v40);
          v42 = v41;
          if ( !v41 )
            goto LABEL_16;
          v41->Header.Type = -106;
          v41->Header.Revision = 1;
          v41->Header.Size = 248;
          *(_DWORD *)&v41->NdisReserved[16] |= 2u;
          *(_QWORD *)&v41->NdisReserved[32] = v4;
          EtwActivityIdControl(3u, (LPGUID)&v41->NdisReserved[96]);
          LOBYTE(v43) = 6;
          ndisMReferenceOpen(v4, v43);
          *(_DWORD *)&v42->NdisReserved[16] |= 0x200u;
          v44 = (_LIST_ENTRY *)v42->NdisReserved;
          *(_DWORD *)&v42->NdisReserved[16] &= ~0x40000u;
          v45 = v63.Blink;
          if ( v63.Blink->Flink != &v63 )
            goto LABEL_90;
          *(_QWORD *)&v42->NdisReserved[8] = v63.Blink;
          v44->Flink = &v63;
          ++v5;
          v45->Flink = v44;
          v3 = v42;
          v63.Blink = (_LIST_ENTRY *)v42->NdisReserved;
        }
      }
    }
    else
    {
      for ( j = a1->PatternList.Next; j; j = j->Next )
      {
        if ( LODWORD(j[7].Next) >= 0xFFFFFFE8 )
          goto LABEL_16;
        v47 = (unsigned int)j[8].Next;
        v48 = v47 + LODWORD(j[7].Next) + 24;
        if ( v48 < v47 )
          goto LABEL_16;
        v49 = ndisMAllocateRequest(0LL, 0xFD010103, NdisRequestSetInformation, &j[6], v48);
        v50 = v49;
        if ( !v49 )
          goto LABEL_16;
        v49->Header.Type = -106;
        v49->Header.Revision = 1;
        v49->Header.Size = 248;
        *(_DWORD *)&v49->NdisReserved[16] |= 2u;
        *(_QWORD *)&v49->NdisReserved[32] = 0LL;
        EtwActivityIdControl(3u, (LPGUID)&v49->NdisReserved[96]);
        v3 = v50;
        *(_QWORD *)&v50->NdisReserved[32] = &ndisIntReqRestore;
        v51 = (_LIST_ENTRY *)v50->NdisReserved;
        *(_DWORD *)&v50->NdisReserved[16] |= 0xC0000u;
        v52 = v63.Blink;
        if ( v63.Blink->Flink != &v63 )
          goto LABEL_90;
        *(_QWORD *)&v50->NdisReserved[8] = v63.Blink;
        v51->Flink = &v63;
        ++v5;
        v52->Flink = v51;
        v63.Blink = (_LIST_ENTRY *)v50->NdisReserved;
      }
    }
    for ( k = a1->OpenQueue; k; k = k->MiniportNextOpen )
    {
      if ( v4 != k )
      {
        v9 |= k->WakeUpEnable;
        v64 = v9;
      }
    }
    if ( v9 == a1->WakeUpEnable )
      goto LABEL_16;
    v53 = ndisMAllocateRequest(v4, 0xFD010106, NdisRequestSetInformation, &v64, 4u);
    v54 = v53;
    if ( !v53 )
      goto LABEL_16;
    v53->Header.Type = -106;
    v53->Header.Revision = 1;
    v53->Header.Size = 248;
    *(_DWORD *)&v53->NdisReserved[16] |= 2u;
    *(_QWORD *)&v53->NdisReserved[32] = v4;
    EtwActivityIdControl(3u, (LPGUID)&v53->NdisReserved[96]);
    if ( v4 )
    {
      LOBYTE(v55) = 6;
      ndisMReferenceOpen(v4, v55);
      *(_DWORD *)&v54->NdisReserved[16] |= 0x200u;
    }
    else
    {
      *(_QWORD *)&v54->NdisReserved[32] = &ndisIntReqRestore;
    }
    *(_DWORD *)&v54->NdisReserved[16] |= 0x80000u;
    v56 = v63.Blink;
    v3 = v54;
    v57 = (_LIST_ENTRY *)v54->NdisReserved;
    if ( v63.Blink->Flink == &v63 )
    {
      v57->Blink = v63.Blink;
      v57->Flink = &v63;
      ++v5;
      v56->Flink = v57;
      v63.Blink = v57;
      goto LABEL_16;
    }
LABEL_90:
    __fastfail(3u);
  }
  v29 = Offload->MiniportSetEncapsulation.IPv4.HeaderSize;
  *(_QWORD *)&v65.IPv4.Enabled = *(_QWORD *)&Offload->MiniportSetEncapsulation.IPv4.Enabled;
  v30 = *(_QWORD *)&Offload->MiniportSetEncapsulation.IPv6.Enabled;
  v65.IPv4.HeaderSize = v29;
  v31 = Offload->MiniportSetEncapsulation.IPv6.HeaderSize;
  v65.IPv6.EncapsulationType = HIDWORD(v30);
  v65.IPv6.Enabled = 2;
  v65.IPv6.HeaderSize = v31;
  v65.IPv4.Enabled = 2;
  v32 = ndisMAllocateRequest(v4, 0x101010Au, NdisRequestSetInformation, &v65, 0x1Cu);
  v33 = v32;
  if ( v32 )
  {
    v32->Header.Type = -106;
    v32->Header.Revision = 1;
    v32->Header.Size = 248;
    *(_DWORD *)&v32->NdisReserved[16] |= 2u;
    *(_QWORD *)&v32->NdisReserved[32] = v4;
    EtwActivityIdControl(3u, (LPGUID)&v32->NdisReserved[96]);
    if ( v4 )
    {
      LOBYTE(v34) = 6;
      ndisMReferenceOpen(v4, v34);
      *(_DWORD *)&v33->NdisReserved[16] |= 0x200u;
    }
    else
    {
      *(_QWORD *)&v33->NdisReserved[32] = &ndisIntReqRestore;
    }
    *(_DWORD *)&v33->NdisReserved[16] |= 0x80000u;
    v35 = v63.Blink;
    v3 = v33;
    v36 = (_LIST_ENTRY *)v33->NdisReserved;
    if ( v63.Blink->Flink != &v63 )
      goto LABEL_90;
    v36->Blink = v63.Blink;
    v36->Flink = &v63;
    ++v5;
    v35->Flink = v36;
    v63.Blink = v36;
    goto LABEL_7;
  }
LABEL_16:
  if ( !v3 )
  {
LABEL_17:
    v7 = -1073741823;
    goto LABEL_18;
  }
  v58 = v62;
  if ( v62 )
  {
    *(_DWORD *)&v3->NdisReserved[16] |= 0x100u;
    a1->Flags |= 0x1000000u;
  }
  if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v63, v5, v58) != 259 )
  {
    while ( 1 )
    {
      Flink = v63.Flink;
      if ( v63.Flink == &v63 )
        goto LABEL_17;
      if ( v63.Flink->Blink != &v63 )
        goto LABEL_90;
      v60 = v63.Flink->Flink;
      if ( v63.Flink->Flink->Blink != v63.Flink )
        goto LABEL_90;
      v63.Flink = v63.Flink->Flink;
      v60->Blink = &v63;
      ExFreePoolWithTag(&Flink[-5].Blink, 0);
    }
  }
  v7 = 0;
LABEL_18:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v61 = v7;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x40u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      *(_QWORD *)v61);
  }
  return v7;
}
