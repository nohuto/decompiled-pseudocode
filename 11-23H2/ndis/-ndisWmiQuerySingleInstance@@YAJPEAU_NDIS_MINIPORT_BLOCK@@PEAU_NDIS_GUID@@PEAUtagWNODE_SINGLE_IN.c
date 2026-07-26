/*
 * XREFs of ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C0026170
 * Callers:
 *     ndisWMIDispatch @ 0x1C000FB40 (ndisWMIDispatch.c)
 *     NdisWdfQuerySingleInstance @ 0x1C0060880 (NdisWdfQuerySingleInstance.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ndisQueryGuidData @ 0x1C0026660 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C0026910 (ndisQueryGuidDataSize.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026DB8 (WPP_RECORDER_SF_qZ.c)
 *     NdisMSleep @ 0x1C0040E00 (NdisMSleep.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BE9C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BEC80 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *pNdisGuidMap,
        struct tagWNODE_SINGLE_INSTANCE *a3,
        unsigned int a4,
        unsigned int *a5)
{
  signed __int32 v8; // eax
  struct _NDIS_CO_VC_PTR_BLOCK *v9; // r15
  __int64 OffsetInstanceName; // rax
  wchar_t *v11; // rdx
  int GuidData; // esi
  struct _NDIS_CO_VC_PTR_BLOCK *v13; // rdi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  GUID *p_Guid; // rdi
  unsigned int i; // edx
  __int64 v18; // rax
  struct _NDIS_MINIPORT_BLOCK *v19; // rbp
  ULONG v20; // r14d
  ULONG v21; // edx
  struct _NDIS_WMI_NDK_CAPABILITIES *v22; // rcx
  char v23; // r14
  KIRQL v24; // al
  ULONG_PTR RefCountTracker; // r8
  KIRQL v26; // r15
  int v27; // ecx
  __int64 v28; // r10
  unsigned __int8 v29; // r9
  _BYTE *v30; // rdx
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *Flink; // r14
  unsigned __int16 v34; // r9
  unsigned int v35; // eax
  ULONG_PTR v36; // rdi
  unsigned int v37; // edx
  int v38; // ecx
  char v39; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  char v41[8]; // [rsp+30h] [rbp-68h]
  char v42; // [rsp+30h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v43; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+20h]

  v46 = a4;
  v45 = 0;
  v43 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x2Bu,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  v8 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v8 == 1 )
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
  v9 = 0LL;
  *a5 = 0;
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_21;
  OffsetInstanceName = a3->OffsetInstanceName;
  v11 = (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName + 2);
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  GuidData = 0;
  String2.Buffer = v11;
  v13 = 0LL;
  String2.MaximumLength = *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength < 0x30u )
    goto LABEL_107;
  if ( v11 && v11[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = a1->WmiEnabledVcs.Flink;
    if ( Flink == &a1->WmiEnabledVcs )
      goto LABEL_67;
    while ( 1 )
    {
      v13 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
        break;
      Flink = Flink->Flink;
      v13 = 0LL;
      if ( Flink == p_WmiEnabledVcs )
        goto LABEL_67;
    }
    if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0xAu,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a1);
      GuidData = -1073741823;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
LABEL_67:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v11,
          18,
          11,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1,
          (__int64)&String2);
      GuidData = -1073741162;
    }
    v9 = v13;
    if ( GuidData < 0 )
      v9 = 0LL;
  }
  else
  {
LABEL_107:
    if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0xCu,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a1);
      GuidData = -1073741162;
      goto LABEL_15;
    }
  }
  if ( GuidData < 0 )
  {
LABEL_15:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x2Cu,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    goto LABEL_17;
  }
  if ( !v9 )
  {
LABEL_21:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths, &v43, 0, MPREF_WMI_QUERYONE);
  }
  p_Guid = &a3->WnodeHeader.Guid;
  if ( !pNdisGuidMap )
  {
    pNdisGuidMap = a1->pNdisGuidMap;
    if ( pNdisGuidMap )
    {
      for ( i = 0; i < a1->cNdisGuidMap; ++pNdisGuidMap )
      {
        if ( a3 == (struct tagWNODE_SINGLE_INSTANCE *)-24LL )
        {
          if ( (pNdisGuidMap->Flags & 2) != 0 && !pNdisGuidMap->Oid )
            goto LABEL_32;
        }
        else
        {
          v18 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&p_Guid->Data1;
          if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
            v18 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)a3->WnodeHeader.Guid.Data4;
          if ( !v18 )
            goto LABEL_32;
        }
        ++i;
      }
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x2Du,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    v19 = v43;
    GuidData = -1073741811;
    goto LABEL_37;
  }
LABEL_32:
  v19 = v43;
  GuidData = ndisQueryGuidDataSize(&v45, a1, pNdisGuidMap, v9, &a3->WnodeHeader.Guid, v43);
  if ( GuidData < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v34 = 46;
    goto LABEL_84;
  }
  v20 = v45 + a3->DataBlockOffset;
  if ( v20 < v45 )
  {
    GuidData = -1073741823;
    goto LABEL_37;
  }
  if ( v46 < v20 )
  {
    if ( v46 >= 0x38 )
    {
      a3->WnodeHeader.Flags |= 0x20u;
      v35 = 56;
      a3->WnodeHeader.BufferSize = 56;
      GuidData = 0;
      a3->OffsetInstanceName = v20;
    }
    else
    {
      GuidData = -1073741789;
      v35 = 4;
    }
    *a5 = v35;
    goto LABEL_37;
  }
  v21 = v45;
  v22 = (struct _NDIS_WMI_NDK_CAPABILITIES *)((char *)a3 + a3->DataBlockOffset);
  v19 = v43;
  v42 = (char)v43;
  a3->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
  a3->WnodeHeader.BufferSize = v20;
  a3->SizeDataBlock = v21;
  GuidData = ndisQueryGuidData(v22, v21, a1, (__int64)v9, &a3->WnodeHeader.Guid, v42);
  if ( GuidData >= 0 )
  {
    GuidData = 0;
    *a5 = v20;
    goto LABEL_37;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v34 = 47;
LABEL_84:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x12u,
      v34,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  }
LABEL_37:
  if ( v9 )
    ndisDereferenceVcPtr(v9);
  if ( v19 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x19u,
        (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
        v19);
    v23 = 0;
    v24 = KeAcquireSpinLockRaiseToDpc(&v19->Ref.SpinLock);
    RefCountTracker = (ULONG_PTR)v19->RefCountTracker;
    v26 = v24;
    if ( !RefCountTracker || RefCountTracker - 2 <= 1 )
      goto LABEL_52;
    if ( RefCountTracker == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(RefCountTracker + 2) <= 0x61u )
      ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x61uLL);
    v27 = *(unsigned __int8 *)(RefCountTracker + 1);
    if ( *(_BYTE *)(RefCountTracker + 1) )
    {
      if ( v27 != 1 )
        goto LABEL_52;
      v36 = RefCountTracker + 6216;
      v37 = *(_DWORD *)(RefCountTracker + 6272);
      v38 = (unsigned __int16)v37 >> 1;
      if ( v37 >> 17 < 0x3FFE && v38 == (v37 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 6216));
        *(_DWORD *)(v36 + 56) &= 0x10001u;
        goto LABEL_52;
      }
      if ( v38 != 0 || (v37 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 6216), 0);
        goto LABEL_52;
      }
    }
    else
    {
      v28 = *(_QWORD *)(RefCountTracker + 8);
      if ( v28 )
      {
        v29 = *(_BYTE *)(RefCountTracker + 3);
        if ( v29 )
        {
          while ( 1 )
          {
            v30 = (_BYTE *)(v28 + 2LL * (unsigned __int8)v27);
            if ( *v30 == 97 )
            {
              v39 = v30[1];
              if ( v39 )
                break;
            }
            LOBYTE(v27) = v27 + 1;
            if ( (unsigned __int8)v27 >= v29 )
              goto LABEL_51;
          }
          v30[1] = v39 - 1;
          goto LABEL_52;
        }
      }
LABEL_51:
      if ( _bittestandreset((signed __int32 *)(RefCountTracker + 28), 1u) )
      {
LABEL_52:
        if ( v19->Ref.ReferenceCount-- == 1 )
          v23 = 1;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v41 = v19->Ref.ReferenceCount;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xEu,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            (char)v19,
            *(_QWORD *)v41);
        }
        KeReleaseSpinLock(&v19->Ref.SpinLock, v26);
        if ( v23 )
        {
          RemoveReadyEvent = v19->RemoveReadyEvent;
          if ( RemoveReadyEvent )
            KeSetEvent(RemoveReadyEvent, 0, 0);
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0x1Au,
            (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
            v19);
        goto LABEL_17;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0x61uLL);
  }
LABEL_17:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v41 = GuidData;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x30u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      *(_QWORD *)v41);
  }
  return (unsigned int)GuidData;
}
