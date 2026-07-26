/*
 * XREFs of ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C008E338
 * Callers:
 *     ndisWMIDispatch @ 0x1C000F9B0 (ndisWMIDispatch.c)
 *     NdisWdfExecuteMethod @ 0x1C00603C0 (NdisWdfExecuteMethod.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C0009210 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0011978 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C008ECBC (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C008F70C (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1C008F93C (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1C008FC64 (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094ED0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BE9A0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_METHOD_ITEM *a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _NDIS_GUID *v6; // r14
  signed int InstanceName; // ebx
  struct _NDIS_CO_VC_PTR_BLOCK *v10; // rcx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned int Flags; // eax
  __int64 SizeDataBlock; // rdx
  __int64 v14; // rcx
  char *v15; // rbx
  unsigned int v16; // edx
  unsigned int v17; // edx
  ULONG v18; // eax
  NDIS_HANDLE RequestHandle; // rsi
  int v20; // r8d
  unsigned int Oid; // edx
  NDIS_PORT_NUMBER v22; // eax
  ULONG *p_DataBlockOffset; // rbx
  __int64 v24; // rcx
  ULONG v25; // ecx
  NDIS_HANDLE v26; // rsi
  char *v27; // rax
  __int64 v28; // rcx
  ULONG v29; // eax
  __int64 DataBlockOffset; // rcx
  ULONG MethodId; // eax
  unsigned int v32; // eax
  int v33; // ecx
  __int64 v34; // rcx
  signed int v35; // esi
  ULONG *v36; // rax
  struct _NDIS_MINIPORT_BLOCK *v37; // rcx
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  ULONG BytesWritten; // eax
  signed int v42; // eax
  ULONG v43; // ecx
  ULONG v44; // ecx
  ULONG v45; // r11d
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // ecx
  char *v49; // r8
  __m128i v50; // xmm2
  int v51; // edx
  unsigned int v52; // ecx
  ULONG v53; // ecx
  UINT BytesNeeded; // eax
  ULONG v55; // eax
  __int64 v57; // [rsp+30h] [rbp-D0h]
  struct _NDIS_CO_VC_PTR_BLOCK *v58; // [rsp+50h] [rbp-B0h]
  UINT v59; // [rsp+58h] [rbp-A8h]
  int v60; // [rsp+60h] [rbp-A0h]
  NDIS_PORT_NUMBER v61; // [rsp+64h] [rbp-9Ch]
  struct _NDIS_CO_VC_PTR_BLOCK *v62; // [rsp+68h] [rbp-98h] BYREF
  void *v63; // [rsp+70h] [rbp-90h]
  struct _NDIS_MINIPORT_BLOCK *v64; // [rsp+78h] [rbp-88h]
  struct _NDIS_MINIPORT_BLOCK *v65; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_GUID *v66; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_OID_REQUEST v67; // [rsp+90h] [rbp-70h] BYREF
  __m128i v68; // [rsp+190h] [rbp+90h]
  int v69; // [rsp+1A0h] [rbp+A0h]

  v6 = a2;
  v66 = a2;
  v58 = 0LL;
  v62 = 0LL;
  memset(&v67, 0, 0xF8uLL);
  v60 = 0;
  v64 = 0LL;
  v65 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x3Cu,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_9;
  InstanceName = ndisWmiFindInstanceName(
                   &v62,
                   a1,
                   (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                   *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
  if ( InstanceName < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x3Du,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    v10 = 0LL;
    v62 = 0LL;
    goto LABEL_121;
  }
  v58 = v62;
  if ( !v62 )
  {
LABEL_9:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v65, 0, MPREF_WMI_EXEC);
      v64 = v65;
    }
  }
  if ( !v6 )
  {
    if ( (int)ndisWmiGetGuid(&v66, a1, &a3->WnodeHeader.Guid, 0) < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0x3Eu,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a1);
      goto LABEL_15;
    }
    v6 = v66;
  }
  Flags = v6->Flags;
  if ( (Flags & 0x80u) == 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x3Fu,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    InstanceName = -1073741637;
    goto LABEL_120;
  }
  if ( (Flags & 0x200) == 0 )
  {
    *(_DWORD *)&v67.NdisReserved[16] |= 8u;
    *(_QWORD *)&v67.NdisReserved[32] = &ndisIntReqWmi;
    EtwActivityIdControl(3u, (LPGUID)&v67.NdisReserved[96]);
    v67.PortNumber = 0;
    p_DataBlockOffset = &a3->DataBlockOffset;
    DataBlockOffset = a3->DataBlockOffset;
    MethodId = a3->MethodId;
    v67.Header = (NDIS_OBJECT_HEADER)15466902;
    v67.RequestType = NdisRequestMethod;
    Oid = v6->Oid;
    v67.DATA.QUERY_INFORMATION.BytesNeeded = MethodId;
    v67.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + DataBlockOffset;
    v67.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock;
    v67.DATA.QUERY_INFORMATION.BytesWritten = a4 - DataBlockOffset;
LABEL_57:
    v67.DATA.QUERY_INFORMATION.Oid = Oid;
    goto LABEL_58;
  }
  SizeDataBlock = a3->SizeDataBlock;
  if ( (unsigned int)SizeDataBlock >= 0x20 )
  {
    v14 = a3->DataBlockOffset;
    v15 = (char *)a3 + v14;
    if ( *((_BYTE *)&a3->WnodeHeader.BufferSize + v14) == 2 && v15[1] == 1 && *((_WORD *)v15 + 1) >= 0x20u )
    {
      v61 = *((_DWORD *)v15 + 1);
      v63 = (void *)*((_QWORD *)v15 + 2);
      v59 = *((_DWORD *)v15 + 6);
      if ( (Flags & 0x2000000) != 0 )
      {
        v16 = v6->Oid;
        if ( ((v16 + 67042805) & 0xFFFFFFFD) != 0 )
        {
          if ( v16 + 67042802 <= 1 && a4 - (unsigned int)v14 < 0x20 )
          {
            v17 = 56;
            if ( a4 >= 0x38 )
            {
              v18 = v14 + 32;
LABEL_36:
              a3->WnodeHeader.Flags |= 0x20u;
              a3->OffsetInstanceName = v18;
LABEL_37:
              a3->WnodeHeader.BufferSize = 56;
              InstanceName = 0;
              goto LABEL_38;
            }
            goto LABEL_34;
          }
        }
        else if ( a4 - (unsigned int)v14 < 0x128 )
        {
          v17 = 56;
          if ( a4 >= 0x38 )
          {
            v18 = v14 + 296;
            goto LABEL_36;
          }
LABEL_34:
          InstanceName = -1073741789;
          v17 = 4;
LABEL_38:
          *a5 = v17;
          goto LABEL_96;
        }
        *(_DWORD *)&v67.NdisReserved[16] |= 8u;
        RequestHandle = &ndisIntReqWmi;
        *(_QWORD *)&v67.NdisReserved[32] = &ndisIntReqWmi;
        EtwActivityIdControl(3u, (LPGUID)&v67.NdisReserved[96]);
        v67.Header = (NDIS_OBJECT_HEADER)15466902;
        Oid = v6->Oid;
        v67.DATA.QUERY_INFORMATION.Oid = Oid;
        v67.RequestType = NdisRequestQueryStatistics;
        v22 = *((_DWORD *)v15 + 1);
        p_DataBlockOffset = &a3->DataBlockOffset;
        v24 = a3->DataBlockOffset;
        v67.PortNumber = v22;
        v67.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v24;
        v67.DATA.QUERY_INFORMATION.InformationBufferLength = a4 - v24;
        v67.RequestId = v63;
        if ( !v63 )
          RequestHandle = v67.RequestHandle;
        v67.RequestHandle = RequestHandle;
        v67.Timeout = v59;
LABEL_58:
        v32 = v6->Oid + 50265846;
        if ( v32 <= 5 && (v33 = 43, _bittest(&v33, v32)) )
        {
          v35 = ndisOidPMAddRemove(a1, 0LL, &v67);
          v36 = p_DataBlockOffset;
        }
        else
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              v20,
              0x40u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)&v67,
              Oid,
              a1);
          if ( v58 || (v37 = v64) == 0LL )
            v37 = a1;
          v35 = ndisQuerySetMiniportEx(v37, v58, &v67, 0, 0LL, 0LL);
          v36 = &a3->DataBlockOffset;
        }
        if ( v35 == -1073676268 || (v36 = p_DataBlockOffset, v35 == -1073676266) )
        {
          v53 = *v36;
          BytesNeeded = v67.DATA.METHOD_INFORMATION.BytesNeeded;
          if ( v67.RequestType != NdisRequestMethod )
            BytesNeeded = v67.DATA.QUERY_INFORMATION.BytesNeeded;
          v55 = v53 + BytesNeeded;
          if ( a4 < 0x38 )
          {
            InstanceName = -1073741789;
            *a5 = 4;
            goto LABEL_120;
          }
          a3->WnodeHeader.BufferSize = 56;
          a3->WnodeHeader.Flags |= 0x20u;
          a3->OffsetInstanceName = v55 + 32;
          *a5 = 56;
LABEL_119:
          InstanceName = 0;
          goto LABEL_120;
        }
        if ( v35 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0x41u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              a1);
          if ( (byte_1C00F7641 & 0x10) != 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v34,
              &ExecuteMethodFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              v35,
              1,
              a3->MethodId);
          if ( (v6->Flags & 0x200) != 0 )
          {
            if ( (v35 & 0xC0010000) == 0xC0010000 )
              v35 = (unsigned __int16)v35 | 0xC0230000;
          }
          else if ( v35 != 259 && v35 != -2147483643 )
          {
            v38 = -1073741823;
            if ( v35 != -1073741823 && v35 != -1073741670 && v35 != -1073741637 )
            {
              if ( v35 == -1073676267 )
                v38 = -1073741811;
              InstanceName = v38;
              goto LABEL_120;
            }
          }
          InstanceName = v35;
LABEL_96:
          if ( InstanceName == 259 )
            goto LABEL_123;
          goto LABEL_120;
        }
        if ( v67.RequestType == NdisRequestMethod )
        {
          v39 = v6->Oid;
          v40 = a3->DataBlockOffset;
          if ( v39 == 66086 )
          {
            ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams((char *)a3 + v40);
            BytesWritten = 1084;
LABEL_111:
            v45 = BytesWritten + a3->DataBlockOffset;
            goto LABEL_112;
          }
          if ( v39 == 66085 )
          {
            v42 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
                    (char *)a3 + v40,
                    v67.DATA.METHOD_INFORMATION.BytesWritten);
            InstanceName = v42;
            if ( v42 == -1073676268 )
            {
              v17 = 56;
              if ( a4 >= 0x38 )
              {
                v43 = a3->DataBlockOffset;
                a3->WnodeHeader.Flags |= 0x20u;
                a3->OffsetInstanceName = v43 + 32;
                goto LABEL_37;
              }
              goto LABEL_34;
            }
            if ( v42 )
            {
              if ( (v42 & 0xC0010000) == 0xC0010000 )
                InstanceName = (unsigned __int16)v42 | 0xC0230000;
              goto LABEL_96;
            }
            v44 = 0;
            goto LABEL_108;
          }
          BytesWritten = v67.DATA.METHOD_INFORMATION.BytesWritten;
          v45 = v40 + v67.DATA.METHOD_INFORMATION.BytesWritten;
        }
        else
        {
          if ( v67.RequestType != NdisRequestSetInformation )
          {
            v48 = v6->Oid;
            if ( ((v48 + 67042805) & 0xFFFFFFFD) == 0 )
            {
              ndisWmiXlateNdisOffloadToWmiOffload((char *)a3 + a3->DataBlockOffset);
              BytesWritten = 296;
              goto LABEL_111;
            }
            if ( v48 + 67042802 <= 1 )
            {
              v49 = (char *)a3 + a3->DataBlockOffset;
              v50 = *(__m128i *)v49;
              v51 = *((_DWORD *)v49 + 4);
              *((_DWORD *)v49 + 7) = v51;
              *(_DWORD *)v49 = _mm_cvtsi128_si32(v50);
              *((_WORD *)v49 + 1) = 32;
              v52 = _mm_cvtsi128_si32(_mm_srli_si128(v50, 8));
              v68 = v50;
              v69 = v51;
              *((_DWORD *)v49 + 1) = _mm_cvtsi128_si32(_mm_srli_si128(v50, 4));
              *((_DWORD *)v49 + 2) = v52 & 3;
              *((_DWORD *)v49 + 3) = (v52 >> 2) & 3;
              *((_DWORD *)v49 + 4) = (v52 >> 4) & 3;
              *((_DWORD *)v49 + 5) = (unsigned __int8)v52 >> 6;
              *((_DWORD *)v49 + 6) = _mm_cvtsi128_si32(_mm_srli_si128(v50, 12));
              v45 = a3->DataBlockOffset + 32;
              a3->SizeDataBlock = 32;
              goto LABEL_113;
            }
            v44 = v67.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_108:
            v45 = v44 + a3->DataBlockOffset;
            a3->SizeDataBlock = v44;
LABEL_113:
            a3->WnodeHeader.BufferSize = v45;
            *a5 = v45;
            goto LABEL_119;
          }
          v46 = v6->Oid;
          if ( v46 == -50265846 || v46 == -50265843 )
          {
            BytesWritten = 196;
            goto LABEL_111;
          }
          v47 = a3->DataBlockOffset;
          *(_OWORD *)((char *)&a3->WnodeHeader.BufferSize + v47) = 0LL;
          *(ULONG *)((char *)&a3->WnodeHeader.BufferSize + v47) = 1048837;
          *((_BYTE *)&a3->WnodeHeader.HistoricalContext + v47) = v67.SupportedRevision;
          v45 = a3->DataBlockOffset + v60;
          BytesWritten = v60;
        }
LABEL_112:
        a3->SizeDataBlock = BytesWritten;
        goto LABEL_113;
      }
      if ( v6->Oid == 66086 && a4 - (unsigned int)v14 < 0x43C )
      {
        v17 = 56;
        if ( a4 >= 0x38 )
        {
          v18 = v14 + 1084;
          goto LABEL_36;
        }
        goto LABEL_34;
      }
      memmove((char *)a3 + v14, v15 + 32, SizeDataBlock - 32);
      if ( (v6->Flags & 0x4000000) == 0 )
      {
        *(_DWORD *)&v67.NdisReserved[16] |= 8u;
        v26 = &ndisIntReqWmi;
        *(_QWORD *)&v67.NdisReserved[32] = &ndisIntReqWmi;
        EtwActivityIdControl(3u, (LPGUID)&v67.NdisReserved[96]);
        p_DataBlockOffset = &a3->DataBlockOffset;
        v28 = a3->DataBlockOffset;
        v67.PortNumber = v61;
        v29 = a3->MethodId;
        v67.Header = (NDIS_OBJECT_HEADER)15466902;
        v67.RequestType = NdisRequestMethod;
        Oid = v6->Oid;
        v67.DATA.QUERY_INFORMATION.BytesNeeded = v29;
        v67.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v28;
        v67.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock - 32;
        v67.DATA.QUERY_INFORMATION.BytesWritten = a4 - v28;
LABEL_52:
        v67.RequestId = v63;
        if ( !v63 )
          v26 = v67.RequestHandle;
        v67.RequestHandle = v26;
        v67.Timeout = v59;
        goto LABEL_57;
      }
      if ( a3->MethodId == 1 )
      {
        p_DataBlockOffset = &a3->DataBlockOffset;
        v25 = a3->DataBlockOffset;
        if ( a4 - v25 < 0x10 )
        {
          v17 = 56;
          if ( a4 >= 0x38 )
          {
            v18 = v25 + 16;
            goto LABEL_36;
          }
          goto LABEL_34;
        }
        *(_DWORD *)&v67.NdisReserved[16] |= 8u;
        v26 = &ndisIntReqWmi;
        v60 = 16;
        *(_QWORD *)&v67.NdisReserved[32] = &ndisIntReqWmi;
        EtwActivityIdControl(3u, (LPGUID)&v67.NdisReserved[96]);
        v67.Header = (NDIS_OBJECT_HEADER)15466902;
        Oid = v6->Oid;
        v67.PortNumber = v61;
        v27 = (char *)a3 + *p_DataBlockOffset;
        v67.RequestType = NdisRequestSetInformation;
        v67.DATA.QUERY_INFORMATION.InformationBuffer = v27;
        v67.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock - 32;
        goto LABEL_52;
      }
    }
  }
LABEL_15:
  InstanceName = -1073741811;
LABEL_120:
  v10 = v58;
LABEL_121:
  if ( v10 )
    ndisDereferenceVcPtr(v10);
LABEL_123:
  if ( v64 )
    ndisDereferenceMiniport(v64, 0x62u);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v57) = InstanceName;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x42u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v57);
  }
  return (unsigned int)InstanceName;
}
