/*
 * XREFs of ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0089354
 * Callers:
 *     ndisWMIDispatch @ 0x1C00102C0 (ndisWMIDispatch.c)
 *     NdisWdfQueryAllData @ 0x1C005B5E0 (NdisWdfQueryAllData.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0012AEC (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ndisQueryGuidData @ 0x1C00271A0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C0027450 (ndisQueryGuidDataSize.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ndisWmiGuidIsAdapterSpecific @ 0x1C008921C (ndisWmiGuidIsAdapterSpecific.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B98C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B9B6C (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C0139420 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _GUID *a3,
        struct tagWNODE_ALL_DATA *a4,
        ULONG a5,
        unsigned int *a6)
{
  struct _NDIS_MINIPORT_BLOCK *v7; // r13
  struct _NDIS_GUID *v9; // rsi
  unsigned int *v11; // r12
  ULONG v12; // r15d
  int GuidDataSize; // esi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int v15; // edx
  struct _NDIS_GUID *v16; // r8
  ULONG v17; // ecx
  unsigned int v18; // r12d
  int v19; // r14d
  unsigned int v20; // edx
  ULONG v21; // r14d
  unsigned __int16 *v22; // r10
  ULONG v23; // r12d
  unsigned __int16 v24; // r9
  ULONG v25; // r8d
  ULONG v26; // ecx
  unsigned int *v27; // rax
  _LIST_ENTRY *Flink; // rax
  struct _NDIS_CO_VC_PTR_BLOCK *v29; // r15
  unsigned int v30; // esi
  unsigned int v31; // eax
  unsigned int *v32; // rcx
  unsigned __int16 *v33; // r10
  ULONG v34; // r12d
  __int64 v35; // rcx
  bool v36; // zf
  unsigned int *v37; // rax
  __int64 v38; // r14
  unsigned int v39; // edx
  ULONG v40; // ecx
  LARGE_INTEGER v41; // rax
  ULONG v42; // edx
  struct _NDIS_GUID *v43; // r9
  struct _GUID *v44; // rax
  char v46[8]; // [rsp+30h] [rbp-50h]
  char v47; // [rsp+40h] [rbp-40h]
  unsigned int v48; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v49; // [rsp+48h] [rbp-38h]
  _LIST_ENTRY **p_Flink; // [rsp+50h] [rbp-30h]
  int v51; // [rsp+58h] [rbp-28h]
  unsigned __int16 *v52; // [rsp+60h] [rbp-20h]
  struct _NDIS_MINIPORT_BLOCK *v53; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-10h]
  unsigned int *v55; // [rsp+78h] [rbp-8h]
  struct _NDIS_GUID *v56; // [rsp+C8h] [rbp+48h] BYREF
  struct _GUID *v57; // [rsp+D0h] [rbp+50h]

  v57 = a3;
  v56 = a2;
  v48 = 0;
  v7 = 0LL;
  v53 = 0LL;
  v9 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x22u,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v11 = a6;
  v12 = 56;
  *a6 = 0;
  if ( a5 < 0x38 )
  {
    *v11 = 4;
    GuidDataSize = -1073741789;
    goto LABEL_63;
  }
  if ( !v9 )
  {
    if ( (int)ndisWmiGetGuid(&v56, a1, &a4->WnodeHeader.Guid, 0) < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0x23u,
          (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
          a1);
      GuidDataSize = -1073741811;
      goto LABEL_63;
    }
    v9 = v56;
  }
  BindPaths = a1->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName(BindPaths->Paths, &v53, 0, MPREF_WMI_QUERYALL);
    v7 = v53;
  }
  if ( !ndisWmiGuidIsAdapterSpecific(a3) && (a1->Flags & 0x20000) != 0 )
  {
    v47 = 0;
    v15 = a1->VcCount + 1;
    v7 = v53;
    v16 = v56;
    v17 = 8 * v15 + 72;
    a4->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
    v51 = v15;
    v55 = (ULONG *)((char *)&a4->WnodeHeader.BufferSize + v17);
    a4->OffsetInstanceNameOffsets = v17;
    v18 = (v17 + 4 * v15 + 7) & 0xFFFFFFF8;
    v52 = (unsigned __int16 *)((char *)a4 + v18);
    GuidDataSize = ndisQueryGuidDataSize((int *)&v48, a1, v16, 0LL, a3, v7);
    if ( GuidDataSize < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_61;
      v24 = 40;
      goto LABEL_60;
    }
    v19 = a1->pAdapterInstanceName->Length + 9;
    v49 = (v48 + 7) & 0xFFFFFFF8;
    v20 = a5;
    v21 = v18 + v49 + (v19 & 0xFFFFFFF8);
    if ( a5 >= v21 )
    {
      v22 = v52;
      *v55 = v18;
      *v22 = a1->pAdapterInstanceName->Length;
      memmove(v22 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
      v23 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v18;
      GuidDataSize = ndisQueryGuidData(
                       (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v23),
                       v48,
                       a1,
                       v56,
                       0LL,
                       v57,
                       v7);
      if ( GuidDataSize < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v24 = 39;
        goto LABEL_60;
      }
      v20 = a5;
      a4[1].WnodeHeader.BufferSize = v48;
      a4->FixedInstanceSize = v23;
      v18 = v49 + v23;
      v52 = (unsigned __int16 *)((char *)a4 + v18);
    }
    v25 = v51;
    v49 = 1;
    v26 = 1;
    if ( v51 != 1 )
    {
      Flink = a1->WmiEnabledVcs.Flink;
      p_Flink = &Flink->Flink;
      if ( Flink == &a1->WmiEnabledVcs )
        goto LABEL_42;
      while ( v26 < v25 )
      {
        v29 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
        if ( ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
        {
          if ( v29->VcInstanceName.Buffer )
          {
            GuidDataSize = ndisQueryGuidDataSize((int *)&v48, a1, 0LL, v29, v57, v7);
            if ( GuidDataSize >= 0 )
            {
              v30 = v48;
              v31 = ((v48 + 7) & 0xFFFFFFF8) + ((v29->VcInstanceName.Length + 9) & 0xFFFFFFF8);
              v54 = (v48 + 7) & 0xFFFFFFF8;
              v21 += v31;
              if ( a5 >= v21 )
              {
                v33 = v52;
                v55[v49] = v18;
                *v33 = v29->VcInstanceName.Length;
                memmove(v33 + 1, v29->VcInstanceName.Buffer, v29->VcInstanceName.Length);
                v34 = ((v29->VcInstanceName.Length + 9) & 0xFFFFFFF8) + v18;
                GuidDataSize = ndisQueryGuidData(
                                 (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v34),
                                 v30,
                                 a1,
                                 0LL,
                                 v29,
                                 v57,
                                 v7);
                if ( GuidDataSize < 0 )
                {
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_qq(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      2u,
                      0x12u,
                      0x29u,
                      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
                      (char)a1,
                      v29);
                  ndisDereferenceVcPtr(v29);
                  v26 = v49;
                  break;
                }
                v35 = v49;
                *(&a4[1].WnodeHeader.BufferSize + 2 * v49) = v48;
                *(&a4->FixedInstanceSize + 2 * v35) = v34;
                v18 = v54 + v34;
                ++v49;
                v52 = (unsigned __int16 *)((char *)a4 + v18);
              }
              else
              {
                a4->WnodeHeader.Flags |= 0x20u;
                v32 = a6;
                GuidDataSize = 0;
                a4->WnodeHeader.BufferSize = 56;
                a4->DataBlockOffset = v21;
                v47 = 1;
                *v32 = 56;
              }
            }
          }
          ndisDereferenceVcPtr(v29);
        }
        Flink = *p_Flink;
        v36 = *p_Flink == &a1->WmiEnabledVcs;
        p_Flink = (_LIST_ENTRY **)*p_Flink;
        v26 = v49;
        if ( v36 )
          break;
        v25 = v51;
      }
      if ( !v47 )
      {
LABEL_42:
        v37 = a6;
        GuidDataSize = 0;
        a4->WnodeHeader.BufferSize = v21;
        a4->InstanceCount = v26;
        *v37 = v21;
      }
      goto LABEL_61;
    }
    if ( v20 < v21 )
    {
      a4->WnodeHeader.Flags |= 0x20u;
      a4->DataBlockOffset = v21;
      v21 = 56;
    }
    else
    {
      a4->InstanceCount = 1;
      v12 = v21;
    }
    v27 = a6;
    a4->WnodeHeader.BufferSize = v12;
    *v27 = v21;
LABEL_53:
    GuidDataSize = 0;
    goto LABEL_61;
  }
  GuidDataSize = ndisQueryGuidDataSize((int *)&v48, a1, v9, 0LL, a3, v7);
  if ( GuidDataSize < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_61;
    v24 = 36;
    goto LABEL_60;
  }
  v38 = (v48 + 3) & 0xFFFFFFFC;
  v39 = a1->pAdapterInstanceName->Length + 2;
  v40 = v39 + v38 + 76;
  if ( v40 >= 0x48 && v40 >= (unsigned int)v38 && v40 >= v39 )
  {
    if ( a5 >= v40 )
    {
      v41.QuadPart = MEMORY[0xFFFFF78000000014];
      v42 = v48;
      v7 = v53;
      v43 = v56;
      a4->WnodeHeader.Flags |= 0x10u;
      a4->WnodeHeader.TimeStamp = v41;
      a4->OffsetInstanceNameOffsets = v38 + 72;
      v44 = v57;
      a4->WnodeHeader.BufferSize = v40;
      a4->InstanceCount = 1;
      a4->DataBlockOffset = 72;
      a4->FixedInstanceSize = v42;
      GuidDataSize = ndisQueryGuidData(
                       (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a4[1].WnodeHeader.HistoricalContext,
                       v42,
                       a1,
                       v43,
                       0LL,
                       v44,
                       v7);
      if ( GuidDataSize < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v24 = 38;
        goto LABEL_60;
      }
      *(ULONG *)((char *)&a4->WnodeHeader.BufferSize + a4->OffsetInstanceNameOffsets) = v38 + 76;
      *(_WORD *)((char *)&a4[1].WnodeHeader.Linkage + v38) = a1->pAdapterInstanceName->Length;
      memmove(
        (char *)&a4[1].WnodeHeader.Linkage + (unsigned int)v38 + 2,
        a1->pAdapterInstanceName->Buffer,
        a1->pAdapterInstanceName->Length);
      *v11 = a4->WnodeHeader.BufferSize;
    }
    else
    {
      a4->WnodeHeader.Flags |= 0x20u;
      a4->WnodeHeader.BufferSize = 56;
      a4->DataBlockOffset = v40;
      *v11 = 56;
    }
    goto LABEL_53;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_61;
  v24 = 37;
LABEL_60:
  WPP_RECORDER_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    0x12u,
    v24,
    (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
    a1);
LABEL_61:
  if ( v7 )
    ndisDereferenceMiniport(v7, 0x60u);
LABEL_63:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v46 = GuidDataSize;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x2Au,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      (char)a1,
      *(_QWORD *)v46);
  }
  return (unsigned int)GuidDataSize;
}
