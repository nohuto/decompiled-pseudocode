/*
 * XREFs of ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0028F44
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B5630 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFDirectOidRequest @ 0x1C00B5810 (NdisFDirectOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x1C0007BFC (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F220 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022764 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00292F4 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_FILTER_BLOCK *a4)
{
  struct _NDIS_FILTER_BLOCK *v4; // r13
  struct _NDIS_OID_REQUEST *v8; // r14
  KIRQL v9; // r12
  struct _NDIS_FILTER_BLOCK *NextDirectRequestHandle; // rbx
  int i; // edi
  unsigned __int8 v12; // bl
  char v13; // r15
  NDIS_REFCOUNT_HANDLE__ **p_RefCountTracker; // rdi
  KIRQL v15; // r12
  unsigned int ReferenceCount; // ecx
  char v17; // r12
  unsigned int v18; // ebx
  KIRQL v19; // al
  struct _NDIS_REFCOUNT_BLOCK *v20; // r8
  KIRQL v21; // r15
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 NumOverflowTaggedEntries; // r11
  unsigned __int8 v24; // r9
  unsigned int v25; // edi
  bool v27; // al
  struct _NDIS_REFCOUNT_BLOCK *v28; // rdi
  _NDIS_REFCOUNT_STACK_ENTRY v29; // edx
  int v30; // ecx
  unsigned __int8 RefCount; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  char v33[8]; // [rsp+30h] [rbp-40h]
  __int64 v34; // [rsp+38h] [rbp-38h]
  _QWORD Parameter[4]; // [rsp+50h] [rbp-20h] BYREF
  int v37; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0LL;
  v37 = 0;
  v8 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      a4);
  v9 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  if ( a3 )
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a3->NextDirectRequestHandle;
  else
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a2->Next.DirectRequestHandle;
  if ( a4 )
  {
    if ( ndisReferenceRefEx(&a4->PnPRef.SpinLock, 0x12u, (enum _NDIS_REFERENCE_STATUS *)&v37) )
    {
      if ( a4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
      {
        NextDirectRequestHandle = a4;
      }
      else if ( a4->NextDirectRequestHandle )
      {
        NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a4->NextDirectRequestHandle;
      }
      ndisDereferenceRef(&a4->PnPRef.SpinLock, 0x12u);
    }
    else if ( v37 != 1 )
    {
      v18 = -1073741823;
      if ( v37 == 2 )
        v18 = -1073741670;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v9);
      goto LABEL_83;
    }
    v8 = a1;
    goto LABEL_55;
  }
  for ( i = v37; NextDirectRequestHandle->Header.Type == 5; i = 0 )
  {
    v4 = NextDirectRequestHandle;
    v27 = ndisReferenceRefEx(&NextDirectRequestHandle->PnPRef.SpinLock, 0x10u, (enum _NDIS_REFERENCE_STATUS *)&v37);
    i = v37;
    if ( v27 || v37 != 1 )
      break;
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)NextDirectRequestHandle->NextDirectRequestHandle;
    v4 = 0LL;
LABEL_55:
    v37 = 0;
  }
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v9);
  if ( !i )
  {
    if ( v4 && !v4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler
      || !a2->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
    {
      v17 = (char)a1;
      v18 = -1073741637;
LABEL_61:
      if ( v4 )
        ndisDereferenceRef(&v4->PnPRef.SpinLock, 0x10u);
      goto LABEL_37;
    }
    if ( v4 )
    {
      Parameter[0] = 0LL;
      Parameter[2] = 0LL;
      Parameter[1] = v4;
      Parameter[3] = v8;
      v18 = -1073741670;
      if ( KeExpandKernelStackAndCalloutEx(ndisFDoDirectOidRequestInternal, Parameter, (unsigned int)Size, 0, 0LL) >= 0 )
        v18 = Parameter[0];
      goto LABEL_83;
    }
    v12 = (a2->Flags & 0x80) != 0;
    v13 = 1;
    p_RefCountTracker = &a2->RefCountTracker;
    v15 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    if ( !a2->Ref.Closing )
    {
      if ( *p_RefCountTracker )
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)*p_RefCountTracker, 0x49u);
      ReferenceCount = a2->Ref.ReferenceCount;
      a2->Ref.ReferenceCount = ReferenceCount + 1;
      if ( ReferenceCount != -1 )
        goto LABEL_16;
      a2->Ref.ReferenceCount = -1;
    }
    v13 = 0;
LABEL_16:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v33 = a2->Ref.ReferenceCount;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xCu,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a2,
        *(_QWORD *)v33);
    }
    KeReleaseSpinLock(&a2->Ref.SpinLock, v15);
    if ( v13 )
    {
      v17 = (char)a1;
      v18 = ndisMDoDirectOidRequest(a2, a1, v12);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x19u,
          (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
          a2);
      v19 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      v20 = (struct _NDIS_REFCOUNT_BLOCK *)*p_RefCountTracker;
      v21 = v19;
      if ( *p_RefCountTracker && (unsigned __int64)v20[-1].RefWithStack + 62 > 1 )
      {
        if ( v20 == (struct _NDIS_REFCOUNT_BLOCK *)1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        if ( v20->NumRefTags <= 0x49u )
          ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v20, 0x49uLL);
        if ( v20->Type )
        {
          if ( v20->Type == 1 )
          {
            v28 = v20 + 65;
            v29 = v20[65].RefWithStack[0].Block.Dereferences[4];
            v30 = *(_WORD *)&v29 >> 1;
            if ( *(unsigned int *)&v29 >> 17 < 0x3FFE && v30 == (*(unsigned int *)&v29 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)&v20[65]);
              *(_DWORD *)&v28->RefWithStack[0].Block.Dereferences[4] &= 0x10001u;
            }
            else
            {
              if ( v30 == 0 && (*(_BYTE *)&v29 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v20, 0x49uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v20[65], 0);
            }
          }
        }
        else
        {
          Tags = v20->TaggedRefCounts.Tags;
          if ( Tags && (NumOverflowTaggedEntries = v20->NumOverflowTaggedEntries, v24 = 0, NumOverflowTaggedEntries) )
          {
            while ( 1 )
            {
              if ( Tags[v24].Tag == 73 )
              {
                RefCount = Tags[v24].RefCount;
                if ( RefCount )
                  break;
              }
              if ( ++v24 >= NumOverflowTaggedEntries )
                goto LABEL_30;
            }
            Tags[v24].RefCount = RefCount - 1;
          }
          else
          {
LABEL_30:
            if ( !_bittestandreset((signed __int32 *)&v20->RefWithStack[0].Block.References[2], 9u) )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v20, 0x49uLL);
          }
        }
      }
      v25 = a2->Ref.ReferenceCount - 1;
      a2->Ref.ReferenceCount = v25;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v33 = a2->Ref.ReferenceCount;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0xEu,
          (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
          (char)a2,
          *(_QWORD *)v33);
      }
      KeReleaseSpinLock(&a2->Ref.SpinLock, v21);
      if ( !v25 )
      {
        RemoveReadyEvent = a2->RemoveReadyEvent;
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
          a2);
LABEL_36:
      if ( v18 == 259 )
        goto LABEL_37;
      goto LABEL_61;
    }
    v18 = -1073741823;
LABEL_83:
    v17 = (char)a1;
    goto LABEL_36;
  }
  v17 = (char)a1;
  v18 = -1073741823;
  if ( i == 2 )
    v18 = -1073741670;
LABEL_37:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v34) = v18;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      v17,
      (char)a2,
      v34);
  }
  return v18;
}
