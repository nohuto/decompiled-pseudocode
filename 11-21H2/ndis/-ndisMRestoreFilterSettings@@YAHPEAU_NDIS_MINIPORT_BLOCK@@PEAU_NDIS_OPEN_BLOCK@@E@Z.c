/*
 * XREFs of ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C0016CD0
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C0068354 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013C13C (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019598 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C0099D84 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z @ 0x1C009A378 (-ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C009F348 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _LIST_ENTRY *a2,
        unsigned __int8 a3)
{
  struct _NDIS_OID_REQUEST *v3; // rsi
  struct _LIST_ENTRY *v4; // rdi
  unsigned int v5; // r12d
  unsigned int v7; // ebx
  char v8; // r14
  bool v9; // al
  unsigned int v10; // r15d
  _LIST_ENTRY *i; // rbx
  _NDIS_OPEN_BLOCK *k; // rax
  struct _NDIS_OID_REQUEST *v14; // rax
  int v15; // eax
  _LIST_ENTRY *NdisReserved; // rcx
  _LIST_ENTRY *Blink; // rax
  _NDIS_MEDIUM MediaType; // eax
  struct _NDIS_OID_REQUEST *v19; // rax
  struct _NDIS_OID_REQUEST *v20; // rbx
  int v21; // eax
  _LIST_ENTRY *v22; // rax
  _LIST_ENTRY *v23; // rbx
  _NDIS_MINIPORT_OFFLOAD *Offload; // r11
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _NDIS_OPEN_OFFLOAD *v26; // rcx
  unsigned int HeaderSize; // eax
  __int64 v28; // xmm1_8
  bool v29; // zf
  unsigned int v30; // eax
  unsigned int v31; // eax
  struct _NDIS_OID_REQUEST *v32; // rax
  struct _NDIS_OID_REQUEST *v33; // rbx
  int v34; // eax
  _LIST_ENTRY *v35; // rax
  _LIST_ENTRY *v36; // rbx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int Flink; // eax
  unsigned int v40; // ecx
  struct _NDIS_OID_REQUEST *v41; // rax
  struct _NDIS_OID_REQUEST *v42; // r14
  _LIST_ENTRY *v43; // rax
  int v44; // ecx
  _LIST_ENTRY *v45; // rcx
  _SINGLE_LIST_ENTRY *j; // rbx
  unsigned int Next; // eax
  unsigned int v48; // ecx
  struct _NDIS_OID_REQUEST *v49; // rax
  int v50; // ecx
  UCHAR *v51; // rax
  _LIST_ENTRY *v52; // rcx
  struct _NDIS_OID_REQUEST *v53; // rax
  struct _NDIS_OID_REQUEST *v54; // rbx
  int v55; // eax
  _LIST_ENTRY *v56; // rax
  _LIST_ENTRY *v57; // rbx
  unsigned __int8 v58; // r9
  _LIST_ENTRY *v59; // rcx
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
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      v61[0],
      a3);
    a3 = v62;
  }
  v8 = 1;
  v9 = !v4 && !a3;
  v63.Blink = &v63;
  v63.Flink = &v63;
  if ( !v9 && !a3 )
    goto LABEL_7;
  if ( a1->MediaType == NdisMedium802_3 )
  {
    v64 = -1;
    v14 = ndisMAllocateRequest(v4, 0x1010Eu, NdisRequestSetInformation, &v64, 4u);
    v3 = v14;
    if ( !v14 )
      goto LABEL_17;
    v14->Header.Type = -106;
    v14->Header.Size = 248;
    v14->Header.Revision = 1;
    v15 = *(_DWORD *)&v14->NdisReserved[16] | 2;
    *(_QWORD *)&v3->NdisReserved[32] = v4;
    *(_DWORD *)&v3->NdisReserved[16] = v15;
    if ( v4 )
    {
      LOBYTE(a2) = 6;
      ndisMReferenceOpen(v4, a2);
      *(_DWORD *)&v3->NdisReserved[16] |= 0x200u;
      v15 = *(_DWORD *)&v3->NdisReserved[16];
    }
    else
    {
      *(_QWORD *)&v3->NdisReserved[32] = &ndisIntReqRestore;
    }
    NdisReserved = (_LIST_ENTRY *)v3->NdisReserved;
    *(_DWORD *)&v3->NdisReserved[16] = v15 | 0x80000;
    Blink = v63.Blink;
    if ( v63.Blink->Flink != &v63 )
      goto LABEL_90;
    *(_QWORD *)&v3->NdisReserved[8] = v63.Blink;
    a2 = &v63;
    NdisReserved->Flink = &v63;
    v5 = 1;
    Blink->Flink = NdisReserved;
    MediaType = a1->MediaType;
    v63.Blink = (_LIST_ENTRY *)v3->NdisReserved;
    if ( MediaType == NdisMedium802_3 )
    {
      v19 = ndisMAllocateRequest(v4, 0x1010103u, NdisRequestSetInformation, 0LL, 0);
      v20 = v19;
      if ( !v19 )
        goto LABEL_15;
      v19->Header.Type = -106;
      v19->Header.Size = 248;
      v19->Header.Revision = 1;
      v21 = *(_DWORD *)&v19->NdisReserved[16] | 2;
      *(_QWORD *)&v20->NdisReserved[32] = v4;
      *(_DWORD *)&v20->NdisReserved[16] = v21;
      if ( v4 )
      {
        LOBYTE(a2) = 6;
        ndisMReferenceOpen(v4, a2);
        *(_DWORD *)&v20->NdisReserved[16] |= 0x200u;
        v21 = *(_DWORD *)&v20->NdisReserved[16];
      }
      else
      {
        *(_QWORD *)&v20->NdisReserved[32] = &ndisIntReqRestore;
      }
      *(_DWORD *)&v20->NdisReserved[16] = v21 | 0x80000;
      v3 = v20;
      v22 = v63.Blink;
      v23 = (_LIST_ENTRY *)v20->NdisReserved;
      if ( v63.Blink->Flink != &v63 )
        goto LABEL_90;
      v23->Blink = v63.Blink;
      v23->Flink = &v63;
      v5 = 2;
      v22->Flink = v23;
      v63.Blink = v23;
    }
  }
  Offload = a1->Offload;
  if ( !Offload || Offload->SupportsTopOffload != 1 )
    goto LABEL_7;
  OpenQueue = a1->OpenQueue;
  memset(&v65, 0, sizeof(v65));
  for ( LODWORD(a2) = 28; OpenQueue; OpenQueue = OpenQueue->MiniportNextOpen )
  {
    v26 = OpenQueue->Offload;
    if ( v26 && v26->AlreadySetEncapsulation )
    {
      if ( v8 )
      {
        if ( v26->SetEncapsulation.Header.Type != 0xA8
          || !v26->SetEncapsulation.Header.Revision
          || v26->SetEncapsulation.Header.Size < 0x1Cu )
        {
          goto LABEL_15;
        }
        v8 = 0;
        HeaderSize = v26->SetEncapsulation.IPv6.HeaderSize;
        v28 = *(_QWORD *)&v26->SetEncapsulation.IPv6.Enabled;
        *(_OWORD *)&v65.Header.Type = *(_OWORD *)&v26->SetEncapsulation.Header.Type;
        v65.IPv6.HeaderSize = HeaderSize;
        *(_QWORD *)&v65.IPv6.Enabled = v28;
      }
      else
      {
        if ( (unsigned int)ndisMergeEncapsulations(&v26->SetEncapsulation, &v65) )
          goto LABEL_15;
        LODWORD(a2) = 28;
      }
    }
  }
  if ( v65.Header.Type == 0xA8
    || (v29 = Offload->MiniportSetEncapsulation.Header.Type == 0xA8, v65.Header = (_NDIS_OBJECT_HEADER)1835432, !v29)
    || !Offload->MiniportSetEncapsulation.Header.Revision
    || Offload->MiniportSetEncapsulation.Header.Size < 0x1Cu
    || Offload->MiniportSetEncapsulation.IPv4.Enabled == 2 && Offload->MiniportSetEncapsulation.IPv6.Enabled == 2 )
  {
LABEL_7:
    v10 = a1->WakeUpEnable & 5;
    v64 = v10;
    if ( v4 )
    {
      for ( i = v4[31].Flink; i; i = i->Flink )
      {
        if ( i[1].Blink == v4 )
        {
          v37 = (unsigned int)i[3].Blink;
          v38 = v37 + 24;
          if ( v37 + 24 < v37 )
            goto LABEL_15;
          Flink = (unsigned int)i[4].Flink;
          v40 = Flink + v38;
          if ( v40 < Flink )
            goto LABEL_15;
          v41 = ndisMAllocateRequest(v4, 0xFD010104, NdisRequestSetInformation, &i[3], v40);
          v42 = v41;
          if ( !v41 )
            goto LABEL_15;
          v41->Header.Type = -106;
          LOBYTE(a2) = 6;
          v41->Header.Revision = 1;
          v41->Header.Size = 248;
          *(_DWORD *)&v41->NdisReserved[16] |= 2u;
          *(_QWORD *)&v41->NdisReserved[32] = v4;
          ndisMReferenceOpen(v4, a2);
          v43 = (_LIST_ENTRY *)v42->NdisReserved;
          v44 = *(_DWORD *)&v42->NdisReserved[16] | 0x200;
          *(_DWORD *)&v42->NdisReserved[16] = v44;
          *(_DWORD *)&v42->NdisReserved[16] = v44 & 0xFFFBFFFF;
          v45 = v63.Blink;
          if ( v63.Blink->Flink != &v63 )
            goto LABEL_90;
          *(_QWORD *)&v42->NdisReserved[8] = v63.Blink;
          a2 = &v63;
          v43->Flink = &v63;
          ++v5;
          v45->Flink = v43;
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
          goto LABEL_15;
        Next = (unsigned int)j[8].Next;
        v48 = Next + LODWORD(j[7].Next) + 24;
        if ( v48 < Next )
          goto LABEL_15;
        v49 = ndisMAllocateRequest(0LL, 0xFD010103, NdisRequestSetInformation, &j[6], v48);
        if ( !v49 )
          goto LABEL_15;
        v49->Header = (NDIS_OBJECT_HEADER)16253334;
        *(_DWORD *)&v49->NdisReserved[16] |= 2u;
        v3 = v49;
        v50 = *(_DWORD *)&v49->NdisReserved[16];
        *(_QWORD *)&v49->NdisReserved[32] = &ndisIntReqRestore;
        v51 = v49->NdisReserved;
        *((_DWORD *)v51 + 4) = v50 | 0xC0000;
        v52 = v63.Blink;
        if ( v63.Blink->Flink != &v63 )
          goto LABEL_90;
        *((_QWORD *)v51 + 1) = v63.Blink;
        a2 = &v63;
        *(_QWORD *)v51 = &v63;
        ++v5;
        v52->Flink = (_LIST_ENTRY *)v51;
        v63.Blink = (_LIST_ENTRY *)v51;
      }
    }
    for ( k = a1->OpenQueue; k; k = k->MiniportNextOpen )
    {
      if ( v4 != (struct _LIST_ENTRY *)k )
      {
        v10 |= k->WakeUpEnable;
        v64 = v10;
      }
    }
    if ( v10 == a1->WakeUpEnable )
      goto LABEL_15;
    v53 = ndisMAllocateRequest(v4, 0xFD010106, NdisRequestSetInformation, &v64, 4u);
    v54 = v53;
    if ( !v53 )
      goto LABEL_15;
    v53->Header.Type = -106;
    v53->Header.Size = 248;
    v53->Header.Revision = 1;
    v55 = *(_DWORD *)&v53->NdisReserved[16] | 2;
    *(_QWORD *)&v54->NdisReserved[32] = v4;
    *(_DWORD *)&v54->NdisReserved[16] = v55;
    if ( v4 )
    {
      LOBYTE(a2) = 6;
      ndisMReferenceOpen(v4, a2);
      *(_DWORD *)&v54->NdisReserved[16] |= 0x200u;
      v55 = *(_DWORD *)&v54->NdisReserved[16];
    }
    else
    {
      *(_QWORD *)&v54->NdisReserved[32] = &ndisIntReqRestore;
    }
    *(_DWORD *)&v54->NdisReserved[16] = v55 | 0x80000;
    v3 = v54;
    v56 = v63.Blink;
    v57 = (_LIST_ENTRY *)v54->NdisReserved;
    if ( v63.Blink->Flink == &v63 )
    {
      v57->Blink = v63.Blink;
      v57->Flink = &v63;
      ++v5;
      v56->Flink = v57;
      v63.Blink = v57;
      goto LABEL_15;
    }
LABEL_90:
    __fastfail(3u);
  }
  v30 = Offload->MiniportSetEncapsulation.IPv4.HeaderSize;
  *(_QWORD *)&v65.IPv4.Enabled = *(_QWORD *)&Offload->MiniportSetEncapsulation.IPv4.Enabled;
  v65.IPv6.EncapsulationType = HIDWORD(*(_QWORD *)&Offload->MiniportSetEncapsulation.IPv6.Enabled);
  v65.IPv6.Enabled = 2;
  v65.IPv4.HeaderSize = v30;
  v31 = Offload->MiniportSetEncapsulation.IPv6.HeaderSize;
  v65.IPv4.Enabled = 2;
  v65.IPv6.HeaderSize = v31;
  v32 = ndisMAllocateRequest(v4, 0x101010Au, NdisRequestSetInformation, &v65, 0x1Cu);
  v33 = v32;
  if ( v32 )
  {
    v32->Header.Type = -106;
    v32->Header.Size = 248;
    v32->Header.Revision = 1;
    v34 = *(_DWORD *)&v32->NdisReserved[16] | 2;
    *(_QWORD *)&v33->NdisReserved[32] = v4;
    *(_DWORD *)&v33->NdisReserved[16] = v34;
    if ( v4 )
    {
      LOBYTE(a2) = 6;
      ndisMReferenceOpen(v4, a2);
      *(_DWORD *)&v33->NdisReserved[16] |= 0x200u;
      v34 = *(_DWORD *)&v33->NdisReserved[16];
    }
    else
    {
      *(_QWORD *)&v33->NdisReserved[32] = &ndisIntReqRestore;
    }
    *(_DWORD *)&v33->NdisReserved[16] = v34 | 0x80000;
    v3 = v33;
    v35 = v63.Blink;
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
LABEL_15:
  if ( !v3 )
  {
LABEL_16:
    v7 = -1073741823;
    goto LABEL_17;
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
      v59 = v63.Flink;
      if ( v63.Flink == &v63 )
        goto LABEL_16;
      if ( v63.Flink->Blink != &v63 )
        goto LABEL_90;
      v60 = v63.Flink->Flink;
      if ( v63.Flink->Flink->Blink != v63.Flink )
        goto LABEL_90;
      v63.Flink = v63.Flink->Flink;
      v60->Blink = &v63;
      ExFreePoolWithTag(&v59[-5].Blink, 0);
    }
  }
  v7 = 0;
LABEL_17:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      64,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      v7);
  }
  return v7;
}
