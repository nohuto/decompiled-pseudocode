/*
 * XREFs of ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D740
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000AA30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D980 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000E8A0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FCB0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001EEA0 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001EF70 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisIfGetMiniportStatistics @ 0x1C010DA50 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x1C013F3F8 (ndisIfQuerySetMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisDereferenceWithTag @ 0x1C000CD10 (NdisDereferenceWithTag.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C000F740 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  ULONG_PTR v4; // rsi
  KIRQL v6; // al
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // rcx
  KIRQL v8; // r14
  bool v9; // zf
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  char v11; // bp
  KIRQL v12; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KIRQL v14; // r14
  struct _NDIS_REFCOUNT_BLOCK *v15; // rax
  ULONG_PTR v16; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 NumOverflowTaggedEntries; // r9
  unsigned __int8 v19; // al
  _NDIS_REFCOUNT_TAGGED_ENTRY *v20; // rdx
  unsigned __int8 RefCount; // cl
  ULONG_PTR v22; // r9
  char *v23; // rsi
  unsigned int v24; // edx
  int v25; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx

  v4 = a3;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  NsiRefCountTracker = a1->NsiRefCountTracker;
  v8 = v6;
  a1->MiniportThread = KeGetCurrentThread();
  NdisDereferenceWithTag((ULONG_PTR)NsiRefCountTracker, a2);
  v9 = a1->NsiOpenReferences-- == 1;
  if ( v9 )
  {
    NsiRequestsCompletedEvent = a1->NsiRequestsCompletedEvent;
    if ( NsiRequestsCompletedEvent )
      KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x19u,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
  v11 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v14 = v12;
  if ( RefCountTracker )
  {
    v15 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)RefCountTracker);
    v16 = (ULONG_PTR)v15;
    if ( v15 )
    {
      if ( (_BYTE)v4 == 0xFF )
      {
        if ( (v15->Flags & 2) == 0 )
          ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v15, 0xFFuLL);
        v15->Flags &= ~2u;
      }
      else
      {
        if ( (unsigned __int8)v4 >= v15->NumRefTags )
          ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v15, v4);
        if ( v15->Type )
        {
          if ( v15->Type == 1 )
          {
            v22 = v4;
            v23 = (char *)v15 + 64 * v4;
            v24 = *((_DWORD *)v23 + 16);
            v25 = (unsigned __int16)v24 >> 1;
            if ( v24 >> 17 < 0x3FFE && v25 == (v24 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v23 + 8));
              *((_DWORD *)v23 + 16) &= 0x10001u;
            }
            else
            {
              if ( v25 == 0 && (v24 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v15, v22);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v23 + 8), 0);
            }
          }
        }
        else
        {
          Tags = v15->TaggedRefCounts.Tags;
          if ( Tags && (NumOverflowTaggedEntries = v15->NumOverflowTaggedEntries, v19 = 0, NumOverflowTaggedEntries) )
          {
            while ( 1 )
            {
              v20 = &Tags[v19];
              if ( v20->Tag == (_BYTE)v4 )
              {
                RefCount = v20->RefCount;
                if ( RefCount )
                  break;
              }
              if ( ++v19 >= NumOverflowTaggedEntries )
                goto LABEL_15;
            }
            v20->RefCount = RefCount - 1;
          }
          else
          {
LABEL_15:
            if ( !_bittestandreset((signed __int32 *)(v16 + 16), v4) )
              ndisBugCheckEx(0x1EuLL, 0LL, v16, v4);
          }
        }
      }
    }
  }
  v9 = a1->Ref.ReferenceCount-- == 1;
  if ( v9 )
    v11 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  KeReleaseSpinLock(&a1->Ref.SpinLock, v14);
  if ( v11 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
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
      a1);
}
