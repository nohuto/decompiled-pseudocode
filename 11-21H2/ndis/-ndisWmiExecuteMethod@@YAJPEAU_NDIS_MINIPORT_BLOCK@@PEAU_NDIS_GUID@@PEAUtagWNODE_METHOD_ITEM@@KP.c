/*
 * XREFs of ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C0011E38
 * Callers:
 *     ndisWMIDispatch @ 0x1C00102C0 (ndisWMIDispatch.c)
 *     NdisWdfExecuteMethod @ 0x1C005B150 (NdisWdfExecuteMethod.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B180 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisDereferenceWithTag @ 0x1C000D510 (NdisDereferenceWithTag.c)
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C00278C4 (WPP_RECORDER_SF_qZ.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C0089A64 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1C0089C94 (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1C0089FBC (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008EF04 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B98C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B9B6C (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C0139420 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *pNdisGuidMap,
        struct tagWNODE_METHOD_ITEM *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v8; // r12d
  signed int v9; // ebx
  signed __int32 v10; // eax
  __int64 OffsetInstanceName; // rax
  wchar_t *v12; // rdx
  struct _NDIS_CO_VC_PTR_BLOCK *v13; // r13
  struct _NDIS_CO_VC_PTR_BLOCK *v14; // rsi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  struct _NDIS_MINIPORT_BLOCK *v16; // r13
  GUID *p_Guid; // r8
  unsigned int v18; // edx
  __int64 v19; // rcx
  bool v20; // zf
  unsigned int Flags; // eax
  __int64 SizeDataBlock; // r8
  __int64 v23; // rcx
  char *v24; // r9
  UINT v25; // r10d
  void *v26; // rsi
  unsigned int v27; // edx
  NDIS_HANDLE RequestHandle; // rdx
  unsigned int Oid; // r8d
  unsigned int v30; // eax
  int v31; // ecx
  struct _NDIS_MINIPORT_BLOCK *v32; // rcx
  unsigned int v33; // eax
  int v34; // ecx
  unsigned int v35; // esi
  unsigned int v36; // ecx
  ULONG BytesWritten; // ecx
  ULONG v38; // r11d
  KIRQL v39; // al
  ULONG_PTR RefCountTracker; // rcx
  KIRQL v41; // r14
  int v42; // esi
  UINT BytesNeeded; // eax
  ULONG v45; // eax
  _LIST_ENTRY *p_WmiEnabledVcs; // r12
  _LIST_ENTRY *Flink; // rsi
  unsigned int v48; // edx
  ULONG v49; // eax
  __int64 v50; // rcx
  NDIS_HANDLE v51; // rdx
  __int64 v52; // rcx
  ULONG v53; // eax
  __int64 DataBlockOffset; // rcx
  ULONG MethodId; // eax
  int v56; // eax
  __int64 v57; // rdx
  ULONG v58; // eax
  signed int v59; // eax
  ULONG v60; // ecx
  __int64 v61; // rcx
  char *v62; // r8
  __m128i v63; // xmm2
  int v64; // edx
  unsigned int v65; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx
  char v67[8]; // [rsp+30h] [rbp-D0h]
  UINT v69; // [rsp+50h] [rbp-B0h]
  int v70; // [rsp+64h] [rbp-9Ch]
  NDIS_PORT_NUMBER v71; // [rsp+68h] [rbp-98h]
  struct _NDIS_MINIPORT_BLOCK *v72; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v73; // [rsp+78h] [rbp-88h]
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_OID_REQUEST v75; // [rsp+90h] [rbp-70h] BYREF
  __m128i v76; // [rsp+190h] [rbp+90h]
  int v77; // [rsp+1A0h] [rbp+A0h]

  v8 = a4;
  memset(&v75, 0, 0xF8uLL);
  v9 = 0;
  v70 = 0;
  v72 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x3Cu,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      a1);
  v10 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v10 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
  {
    v73 = 0LL;
LABEL_11:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths, &v72, 0, MPREF_WMI_EXEC);
LABEL_13:
    v16 = v72;
    if ( !pNdisGuidMap )
    {
      pNdisGuidMap = a1->pNdisGuidMap;
      p_Guid = &a3->WnodeHeader.Guid;
      if ( pNdisGuidMap )
      {
        v18 = 0;
        if ( a1->cNdisGuidMap )
        {
          while ( a3 == (struct tagWNODE_METHOD_ITEM *)-24LL )
          {
            if ( (pNdisGuidMap->Flags & 2) != 0 )
            {
              v20 = pNdisGuidMap->Oid == 0;
              goto LABEL_20;
            }
LABEL_21:
            ++v18;
            ++pNdisGuidMap;
            if ( v18 >= a1->cNdisGuidMap )
              goto LABEL_101;
          }
          v19 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&p_Guid->Data1;
          if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
            v19 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)a3->WnodeHeader.Guid.Data4;
          v20 = v19 == 0;
LABEL_20:
          if ( v20 )
            goto LABEL_23;
          goto LABEL_21;
        }
      }
LABEL_101:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0x3Eu,
          (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
          a1);
      v9 = -1073741811;
      goto LABEL_59;
    }
LABEL_23:
    Flags = pNdisGuidMap->Flags;
    if ( (Flags & 0x80u) == 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0x3Fu,
          (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
          a1);
      v9 = -1073741637;
      goto LABEL_59;
    }
    if ( (Flags & 0x200) == 0 )
    {
      DataBlockOffset = a3->DataBlockOffset;
      *(_DWORD *)&v75.NdisReserved[16] |= 8u;
      MethodId = a3->MethodId;
      *(_QWORD *)&v75.NdisReserved[32] = &ndisIntReqWmi;
      v75.Header = (NDIS_OBJECT_HEADER)15466902;
      *(_QWORD *)&v75.RequestType = 12LL;
      Oid = pNdisGuidMap->Oid;
      v75.DATA.QUERY_INFORMATION.BytesNeeded = MethodId;
      v75.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + DataBlockOffset;
      v75.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock;
      v75.DATA.QUERY_INFORMATION.BytesWritten = v8 - DataBlockOffset;
LABEL_134:
      v75.DATA.QUERY_INFORMATION.Oid = Oid;
LABEL_35:
      v30 = pNdisGuidMap->Oid + 50265846;
      if ( v30 <= 5 && (v31 = 43, _bittest(&v31, v30)) )
      {
        v33 = ndisOidPMAddRemove(a1, 0LL, &v75);
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            Oid,
            0x40u,
            (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
            (char)&v75,
            Oid,
            a1);
        if ( v73 || (v32 = v16) == 0LL )
          v32 = a1;
        v33 = ndisQuerySetMiniportEx(v32, v73, &v75, 0, 0LL, 0LL);
      }
      v35 = v33;
      if ( ((v33 + 1073676268) & 0xFFFFFFFD) != 0 )
      {
        if ( v33 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0x41u,
              (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
              a1);
          if ( (byte_1C00EE581 & 0x10) != 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v34,
              (unsigned int)&ExecuteMethodFailed,
              (_DWORD)a1 + 4008,
              (_DWORD)a1 + 4008,
              a1->IfIndex,
              a1->NetLuid.Value,
              v35,
              1,
              a3->MethodId);
          if ( (pNdisGuidMap->Flags & 0x200) != 0 )
          {
            if ( (v35 & 0xC0010000) == 0xC0010000 )
              v35 = (unsigned __int16)v35 | 0xC0230000;
          }
          else if ( v35 != 259 && v35 != -2147483643 )
          {
            v56 = -1073741823;
            if ( v35 != -1073741823 && v35 != -1073741670 && v35 != -1073741637 )
            {
              if ( v35 == -1073676267 )
                v56 = -1073741811;
              v9 = v56;
              goto LABEL_59;
            }
          }
          v9 = v35;
        }
        else
        {
          v36 = pNdisGuidMap->Oid;
          if ( v75.RequestType != NdisRequestMethod )
          {
            if ( v75.RequestType != NdisRequestSetInformation )
            {
              if ( ((v36 + 67042805) & 0xFFFFFFFD) != 0 )
              {
                if ( v36 + 67042802 <= 1 )
                {
                  v62 = (char *)a3 + a3->DataBlockOffset;
                  v63 = *(__m128i *)v62;
                  v64 = *((_DWORD *)v62 + 4);
                  *((_DWORD *)v62 + 7) = v64;
                  *(_DWORD *)v62 = _mm_cvtsi128_si32(v63);
                  *((_WORD *)v62 + 1) = 32;
                  v65 = _mm_cvtsi128_si32(_mm_srli_si128(v63, 8));
                  v76 = v63;
                  v77 = v64;
                  *((_DWORD *)v62 + 1) = _mm_cvtsi128_si32(_mm_srli_si128(v63, 4));
                  *((_DWORD *)v62 + 2) = v65 & 3;
                  *((_DWORD *)v62 + 3) = (v65 >> 2) & 3;
                  *((_DWORD *)v62 + 4) = (v65 >> 4) & 3;
                  *((_DWORD *)v62 + 5) = (unsigned __int8)v65 >> 6;
                  *((_DWORD *)v62 + 6) = _mm_cvtsi128_si32(_mm_srli_si128(v63, 12));
                  v38 = a3->DataBlockOffset + 32;
                  a3->SizeDataBlock = 32;
                  goto LABEL_50;
                }
                BytesWritten = v75.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_49:
                v38 = BytesWritten + a3->DataBlockOffset;
                a3->SizeDataBlock = BytesWritten;
LABEL_50:
                a3->WnodeHeader.BufferSize = v38;
                *a5 = v38;
LABEL_51:
                v9 = 0;
                goto LABEL_59;
              }
              ndisWmiXlateNdisOffloadToWmiOffload((char *)a3 + a3->DataBlockOffset);
              v58 = 296;
              goto LABEL_170;
            }
            if ( v36 != -50265846 && v36 != -50265843 )
            {
              v61 = a3->DataBlockOffset;
              *(_OWORD *)((char *)&a3->WnodeHeader.BufferSize + v61) = 0LL;
              *(ULONG *)((char *)&a3->WnodeHeader.BufferSize + v61) = 1048837;
              *((_BYTE *)&a3->WnodeHeader.HistoricalContext + v61) = v75.SupportedRevision;
              v38 = a3->DataBlockOffset + v70;
              v58 = v70;
              goto LABEL_171;
            }
            v58 = 196;
LABEL_170:
            v38 = v58 + a3->DataBlockOffset;
            goto LABEL_171;
          }
          v57 = a3->DataBlockOffset;
          if ( v36 == 66086 )
          {
            ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams((char *)a3 + v57);
            v58 = 1084;
            goto LABEL_170;
          }
          if ( v36 != 66085 )
          {
            v58 = v75.DATA.METHOD_INFORMATION.BytesWritten;
            v38 = v75.DATA.METHOD_INFORMATION.BytesWritten + v57;
LABEL_171:
            a3->SizeDataBlock = v58;
            goto LABEL_50;
          }
          v59 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
                  (char *)a3 + v57,
                  v75.DATA.METHOD_INFORMATION.BytesWritten);
          v9 = v59;
          if ( v59 == -1073676268 )
          {
            v48 = 56;
            if ( v8 < 0x38 )
              goto LABEL_114;
            v60 = a3->DataBlockOffset;
            a3->WnodeHeader.Flags |= 0x20u;
            a3->OffsetInstanceName = v60 + 32;
            goto LABEL_116;
          }
          if ( !v59 )
          {
            BytesWritten = 0;
            goto LABEL_49;
          }
          if ( (v59 & 0xC0010000) == 0xC0010000 )
            v9 = (unsigned __int16)v59 | 0xC0230000;
        }
LABEL_58:
        if ( v9 == 259 )
          goto LABEL_61;
        goto LABEL_59;
      }
      BytesNeeded = v75.DATA.METHOD_INFORMATION.BytesNeeded;
      if ( v75.RequestType != NdisRequestMethod )
        BytesNeeded = v75.DATA.QUERY_INFORMATION.BytesNeeded;
      v45 = a3->DataBlockOffset + BytesNeeded;
      if ( v8 >= 0x38 )
      {
        a3->WnodeHeader.BufferSize = 56;
        a3->WnodeHeader.Flags |= 0x20u;
        a3->OffsetInstanceName = v45 + 32;
        *a5 = 56;
        goto LABEL_51;
      }
      v9 = -1073741789;
      *a5 = 4;
LABEL_59:
      if ( v73 )
        ndisDereferenceVcPtr(v73);
      goto LABEL_61;
    }
    SizeDataBlock = a3->SizeDataBlock;
    if ( (unsigned int)SizeDataBlock >= 0x20 )
    {
      v23 = a3->DataBlockOffset;
      v24 = (char *)a3 + v23;
      if ( *((_BYTE *)&a3->WnodeHeader.BufferSize + v23) == 2 && v24[1] == 1 && *((_WORD *)v24 + 1) >= 0x20u )
      {
        v25 = *((_DWORD *)v24 + 6);
        v26 = (void *)*((_QWORD *)v24 + 2);
        v71 = *((_DWORD *)v24 + 1);
        v27 = pNdisGuidMap->Oid;
        v69 = v25;
        if ( (Flags & 0x2000000) != 0 )
        {
          if ( ((v27 + 67042805) & 0xFFFFFFFD) != 0 )
          {
            if ( v27 + 67042802 <= 1 && v8 - (unsigned int)v23 < 0x20 )
            {
              v48 = 56;
              if ( v8 >= 0x38 )
              {
                a3->WnodeHeader.Flags |= 0x20u;
                v49 = v23 + 32;
LABEL_115:
                a3->OffsetInstanceName = v49;
                v9 = 0;
LABEL_117:
                a3->WnodeHeader.BufferSize = 56;
                goto LABEL_118;
              }
              goto LABEL_114;
            }
          }
          else if ( v8 - (unsigned int)v23 < 0x128 )
          {
            v48 = 56;
            if ( v8 >= 0x38 )
            {
              a3->WnodeHeader.Flags |= 0x20u;
              v49 = v23 + 296;
              goto LABEL_115;
            }
LABEL_114:
            v9 = -1073741789;
            v48 = 4;
LABEL_118:
            *a5 = v48;
            goto LABEL_58;
          }
          *(_DWORD *)&v75.NdisReserved[16] |= 8u;
          RequestHandle = &ndisIntReqWmi;
          *(_QWORD *)&v75.NdisReserved[32] = &ndisIntReqWmi;
          v75.Header = (NDIS_OBJECT_HEADER)15466902;
          Oid = pNdisGuidMap->Oid;
          v75.DATA.QUERY_INFORMATION.Oid = Oid;
          v75.RequestType = NdisRequestQueryStatistics;
          v75.PortNumber = *((_DWORD *)v24 + 1);
          v75.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v23;
          v75.DATA.QUERY_INFORMATION.InformationBufferLength = v8 - v23;
          v75.RequestId = v26;
          if ( !v26 )
            RequestHandle = v75.RequestHandle;
          v75.RequestHandle = RequestHandle;
          v75.Timeout = v25;
          goto LABEL_35;
        }
        if ( v27 == 66086 && v8 - (unsigned int)v23 < 0x43C )
        {
          v48 = 56;
          if ( v8 >= 0x38 )
          {
            a3->WnodeHeader.Flags |= 0x20u;
            v49 = v23 + 1084;
            goto LABEL_115;
          }
          goto LABEL_114;
        }
        memmove((char *)a3 + v23, v24 + 32, SizeDataBlock - 32);
        if ( (pNdisGuidMap->Flags & 0x4000000) == 0 )
        {
          v51 = &ndisIntReqWmi;
          v52 = a3->DataBlockOffset;
          *(_DWORD *)&v75.NdisReserved[16] |= 8u;
          v75.PortNumber = v71;
          v53 = a3->MethodId;
          *(_QWORD *)&v75.NdisReserved[32] = &ndisIntReqWmi;
          v75.Header = (NDIS_OBJECT_HEADER)15466902;
          v75.RequestType = NdisRequestMethod;
          Oid = pNdisGuidMap->Oid;
          v75.DATA.QUERY_INFORMATION.BytesNeeded = v53;
          v75.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v52;
          v75.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock - 32;
          v75.DATA.QUERY_INFORMATION.BytesWritten = v8 - v52;
LABEL_130:
          v75.RequestId = v26;
          if ( !v26 )
            v51 = v75.RequestHandle;
          v75.RequestHandle = v51;
          v75.Timeout = v69;
          goto LABEL_134;
        }
        if ( a3->MethodId == 1 )
        {
          v50 = a3->DataBlockOffset;
          if ( v8 - (unsigned int)v50 < 0x10 )
          {
            v48 = 56;
            if ( v8 < 0x38 )
              goto LABEL_114;
            a3->WnodeHeader.Flags |= 0x20u;
            a3->OffsetInstanceName = v50 + 16;
LABEL_116:
            v9 = 0;
            goto LABEL_117;
          }
          *(_DWORD *)&v75.NdisReserved[16] |= 8u;
          v51 = &ndisIntReqWmi;
          *(_QWORD *)&v75.NdisReserved[32] = &ndisIntReqWmi;
          v75.Header = (NDIS_OBJECT_HEADER)15466902;
          Oid = pNdisGuidMap->Oid;
          v75.PortNumber = v71;
          v75.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v50;
          v70 = 16;
          v75.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock - 32;
          v75.RequestType = NdisRequestSetInformation;
          goto LABEL_130;
        }
      }
    }
    v9 = -1073741811;
    goto LABEL_59;
  }
  OffsetInstanceName = a3->OffsetInstanceName;
  v12 = (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName + 2);
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v13 = 0LL;
  v73 = 0LL;
  v14 = 0LL;
  String2.Buffer = v12;
  String2.MaximumLength = *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v12 && v12[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = a1->WmiEnabledVcs.Flink;
    while ( 1 )
    {
      if ( Flink == p_WmiEnabledVcs )
        goto LABEL_93;
      v13 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
        break;
      Flink = Flink->Flink;
      v13 = 0LL;
    }
    if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0xAu,
          (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
          a1);
      v9 = -1073741823;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
LABEL_93:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v12,
          18,
          11,
          (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
          (char)a1,
          (__int64)&String2);
      v9 = -1073741162;
    }
    v8 = a4;
    v14 = v13;
    if ( v9 < 0 )
      v14 = 0LL;
    v73 = v14;
  }
  else if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0xCu,
        (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
        a1);
    v9 = -1073741162;
    goto LABEL_55;
  }
  if ( v9 >= 0 )
  {
    if ( v14 )
      goto LABEL_13;
    goto LABEL_11;
  }
LABEL_55:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x12u,
      0x3Du,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      a1);
  v16 = v72;
LABEL_61:
  if ( v16 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x19u,
        (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
        v16);
    v39 = KeAcquireSpinLockRaiseToDpc(&v16->Ref.SpinLock);
    RefCountTracker = (ULONG_PTR)v16->RefCountTracker;
    v41 = v39;
    if ( RefCountTracker )
      NdisDereferenceWithTag(RefCountTracker, 0x62u);
    v42 = v16->Ref.ReferenceCount - 1;
    v16->Ref.ReferenceCount = v42;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v67 = v16->Ref.ReferenceCount;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xEu,
        (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
        (char)v16,
        *(_QWORD *)v67);
    }
    KeReleaseSpinLock(&v16->Ref.SpinLock, v41);
    if ( !v42 )
    {
      RemoveReadyEvent = v16->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x1Au,
        (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
        v16);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v67 = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x42u,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      (char)a1,
      *(_QWORD *)v67);
  }
  return (unsigned int)v9;
}
