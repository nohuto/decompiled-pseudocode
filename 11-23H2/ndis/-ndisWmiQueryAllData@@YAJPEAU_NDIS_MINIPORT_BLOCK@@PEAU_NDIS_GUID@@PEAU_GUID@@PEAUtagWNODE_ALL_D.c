/*
 * XREFs of ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C008EFD0
 * Callers:
 *     ndisWMIDispatch @ 0x1C000FB40 (ndisWMIDispatch.c)
 *     NdisWdfQueryAllData @ 0x1C0060850 (NdisWdfQueryAllData.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0011B08 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ndisQueryGuidData @ 0x1C0026660 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C0026910 (ndisQueryGuidDataSize.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ndisWmiGuidIsAdapterSpecific @ 0x1C008EE98 (ndisWmiGuidIsAdapterSpecific.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BE9C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BEC80 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _GUID *a3,
        struct tagWNODE_ALL_DATA *a4,
        ULONG a5,
        unsigned int *a6)
{
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  struct _NDIS_GUID *v9; // r14
  unsigned int *v11; // r12
  unsigned int v12; // r13d
  int GuidDataSize; // esi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int v15; // edx
  struct _NDIS_MINIPORT_BLOCK *v16; // r13
  struct _NDIS_GUID *v17; // r8
  ULONG v18; // ecx
  unsigned int v19; // r15d
  _UNICODE_STRING *pAdapterInstanceName; // rcx
  unsigned int v21; // edx
  ULONG v22; // r14d
  unsigned __int16 *v23; // r10
  ULONG v24; // r13d
  ULONG v25; // r15d
  unsigned __int16 v26; // r9
  ULONG v27; // r8d
  ULONG v28; // ecx
  _LIST_ENTRY *Flink; // r12
  struct _NDIS_CO_VC_PTR_BLOCK *v31; // r13
  unsigned int v32; // esi
  unsigned int v33; // eax
  unsigned int *v34; // rax
  unsigned __int16 *v35; // r10
  ULONG v36; // r15d
  __int64 v37; // rcx
  unsigned int *v38; // rax
  __int64 v39; // r14
  unsigned int v40; // edx
  ULONG v41; // ecx
  LARGE_INTEGER v42; // rax
  ULONG v43; // edx
  struct _NDIS_GUID *v44; // r9
  struct _NDIS_MINIPORT_BLOCK *v45; // rax
  char v46[8]; // [rsp+30h] [rbp-50h]
  struct _NDIS_MINIPORT_BLOCK *v47; // [rsp+30h] [rbp-50h]
  struct _NDIS_MINIPORT_BLOCK *v48; // [rsp+30h] [rbp-50h]
  char v49; // [rsp+40h] [rbp-40h]
  unsigned int v50; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v51; // [rsp+48h] [rbp-38h]
  struct _NDIS_MINIPORT_BLOCK *v52; // [rsp+50h] [rbp-30h]
  int v53; // [rsp+58h] [rbp-28h]
  unsigned __int16 *v54; // [rsp+60h] [rbp-20h]
  struct _NDIS_MINIPORT_BLOCK *v55; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v56; // [rsp+70h] [rbp-10h]
  unsigned int *v57; // [rsp+78h] [rbp-8h]
  struct _NDIS_GUID *v58; // [rsp+C8h] [rbp+48h] BYREF
  struct _GUID *v59; // [rsp+D0h] [rbp+50h]

  v59 = a3;
  v58 = a2;
  v50 = 0;
  v7 = 0LL;
  v52 = 0LL;
  v9 = a2;
  v55 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x22u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v11 = a6;
  v12 = a5;
  *a6 = 0;
  if ( v12 < 0x38 )
  {
    *v11 = 4;
    GuidDataSize = -1073741789;
    goto LABEL_29;
  }
  if ( !v9 )
  {
    if ( (int)ndisWmiGetGuid(&v58, a1, &a4->WnodeHeader.Guid, 0) < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0x23u,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a1);
      GuidDataSize = -1073741811;
      goto LABEL_29;
    }
    v9 = v58;
  }
  BindPaths = a1->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName(BindPaths->Paths, &v55, 0, MPREF_WMI_QUERYALL);
    v7 = v55;
    v52 = v55;
  }
  if ( !ndisWmiGuidIsAdapterSpecific(a3) && (a1->Flags & 0x20000) != 0 )
  {
    v49 = 0;
    v15 = a1->VcCount + 1;
    v16 = v55;
    v17 = v58;
    v18 = 8 * v15 + 72;
    a4->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
    v53 = v15;
    v57 = (ULONG *)((char *)&a4->WnodeHeader.BufferSize + v18);
    a4->OffsetInstanceNameOffsets = v18;
    v19 = (v18 + 4 * v15 + 7) & 0xFFFFFFF8;
    v54 = (unsigned __int16 *)((char *)a4 + v19);
    v52 = v16;
    GuidDataSize = ndisQueryGuidDataSize((int *)&v50, a1, v17, 0LL, v59, v16);
    if ( GuidDataSize < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_27;
      v26 = 40;
      goto LABEL_54;
    }
    pAdapterInstanceName = a1->pAdapterInstanceName;
    v21 = a5;
    v51 = (v50 + 7) & 0xFFFFFFF8;
    v22 = v19 + v51 + ((pAdapterInstanceName->Length + 9) & 0xFFFFFFF8);
    if ( a5 >= v22 )
    {
      v23 = v54;
      *v57 = v19;
      *v23 = a1->pAdapterInstanceName->Length;
      memmove(v23 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
      v47 = v16;
      v24 = v50;
      v25 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v19;
      GuidDataSize = ndisQueryGuidData(
                       (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v25),
                       v50,
                       a1,
                       v58,
                       0LL,
                       v59,
                       v47);
      if ( GuidDataSize < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_27;
        v26 = 39;
        goto LABEL_54;
      }
      v21 = a5;
      a4->FixedInstanceSize = v25;
      v19 = v51 + v25;
      a4[1].WnodeHeader.BufferSize = v24;
      v54 = (unsigned __int16 *)((char *)a4 + v19);
    }
    v27 = v53;
    v51 = 1;
    v28 = 1;
    if ( v53 != 1 )
    {
      Flink = a1->WmiEnabledVcs.Flink;
      if ( Flink == &a1->WmiEnabledVcs )
        goto LABEL_48;
      while ( v28 < v27 )
      {
        v31 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
        if ( ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
        {
          if ( v31->VcInstanceName.Buffer )
          {
            GuidDataSize = ndisQueryGuidDataSize(
                             (int *)&v50,
                             a1,
                             0LL,
                             (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20],
                             v59,
                             v52);
            if ( GuidDataSize >= 0 )
            {
              v32 = v50;
              v33 = ((v50 + 7) & 0xFFFFFFF8) + ((v31->VcInstanceName.Length + 9) & 0xFFFFFFF8);
              v56 = (v50 + 7) & 0xFFFFFFF8;
              v22 += v33;
              if ( a5 >= v22 )
              {
                v35 = v54;
                v57[v51] = v19;
                *v35 = v31->VcInstanceName.Length;
                memmove(v35 + 1, v31->VcInstanceName.Buffer, v31->VcInstanceName.Length);
                v36 = ((v31->VcInstanceName.Length + 9) & 0xFFFFFFF8) + v19;
                GuidDataSize = ndisQueryGuidData(
                                 (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v36),
                                 v32,
                                 a1,
                                 0LL,
                                 (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20],
                                 v59,
                                 v52);
                if ( GuidDataSize < 0 )
                {
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_qq(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      2u,
                      0x12u,
                      0x29u,
                      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
                      (char)a1,
                      v31);
                  ndisDereferenceVcPtr(v31);
                  v28 = v51;
                  break;
                }
                v37 = v51;
                *(&a4[1].WnodeHeader.BufferSize + 2 * v51) = v50;
                *(&a4->FixedInstanceSize + 2 * v37) = v36;
                v19 = v56 + v36;
                ++v51;
                v54 = (unsigned __int16 *)((char *)a4 + v19);
              }
              else
              {
                a4->WnodeHeader.Flags |= 0x20u;
                v34 = a6;
                GuidDataSize = 0;
                a4->WnodeHeader.BufferSize = 56;
                a4->DataBlockOffset = v22;
                v49 = 1;
                *v34 = 56;
              }
            }
          }
          ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]);
        }
        Flink = Flink->Flink;
        v28 = v51;
        if ( Flink == &a1->WmiEnabledVcs )
          break;
        v27 = v53;
      }
      if ( !v49 )
      {
LABEL_48:
        v38 = a6;
        GuidDataSize = 0;
        a4->WnodeHeader.BufferSize = v22;
        a4->InstanceCount = v28;
        *v38 = v22;
      }
      goto LABEL_27;
    }
    if ( v21 < v22 )
    {
      a4->WnodeHeader.Flags |= 0x20u;
      a4->DataBlockOffset = v22;
      v22 = 56;
      a4->WnodeHeader.BufferSize = 56;
    }
    else
    {
      a4->WnodeHeader.BufferSize = v22;
      a4->InstanceCount = 1;
    }
    *v11 = v22;
LABEL_26:
    GuidDataSize = 0;
    goto LABEL_27;
  }
  GuidDataSize = ndisQueryGuidDataSize((int *)&v50, a1, v9, 0LL, a3, v7);
  if ( GuidDataSize < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v26 = 36;
    goto LABEL_54;
  }
  v39 = (v50 + 3) & 0xFFFFFFFC;
  v40 = a1->pAdapterInstanceName->Length + 2;
  v41 = v40 + v39 + 76;
  if ( v41 < 0x48 || v41 < (unsigned int)v39 || v41 < v40 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v26 = 37;
      goto LABEL_54;
    }
  }
  else
  {
    if ( v12 < v41 )
    {
      a4->WnodeHeader.Flags |= 0x20u;
      a4->WnodeHeader.BufferSize = 56;
      a4->DataBlockOffset = v41;
      *v11 = 56;
      goto LABEL_26;
    }
    v42.QuadPart = MEMORY[0xFFFFF78000000014];
    v43 = v50;
    v44 = v58;
    a4->WnodeHeader.Flags |= 0x10u;
    a4->WnodeHeader.TimeStamp = v42;
    a4->OffsetInstanceNameOffsets = v39 + 72;
    v45 = v55;
    v48 = v55;
    a4->WnodeHeader.BufferSize = v41;
    a4->InstanceCount = 1;
    a4->DataBlockOffset = 72;
    a4->FixedInstanceSize = v43;
    v52 = v45;
    GuidDataSize = ndisQueryGuidData(
                     (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a4[1].WnodeHeader.HistoricalContext,
                     v43,
                     a1,
                     v44,
                     0LL,
                     a3,
                     v48);
    if ( GuidDataSize >= 0 )
    {
      *(ULONG *)((char *)&a4->WnodeHeader.BufferSize + a4->OffsetInstanceNameOffsets) = v39 + 76;
      *(_WORD *)((char *)&a4[1].WnodeHeader.Linkage + v39) = a1->pAdapterInstanceName->Length;
      memmove(
        (char *)&a4[1].WnodeHeader.Linkage + (unsigned int)v39 + 2,
        a1->pAdapterInstanceName->Buffer,
        a1->pAdapterInstanceName->Length);
      *v11 = a4->WnodeHeader.BufferSize;
      goto LABEL_26;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v26 = 38;
LABEL_54:
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        v26,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    }
  }
LABEL_27:
  if ( v52 )
    ndisDereferenceMiniport(v52, 0x60u);
LABEL_29:
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
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      *(_QWORD *)v46);
  }
  return (unsigned int)GuidDataSize;
}
