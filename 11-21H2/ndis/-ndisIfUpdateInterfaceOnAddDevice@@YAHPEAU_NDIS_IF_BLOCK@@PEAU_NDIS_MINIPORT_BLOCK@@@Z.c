/*
 * XREFs of ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003369C
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     NdisDereferenceWithTag @ 0x1C000D510 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 *     NdisAllocateRefCount @ 0x1C0022460 (NdisAllocateRefCount.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C010A91C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C4F8 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C0132BDC (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(struct _NDIS_IF_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // ebx
  char v4; // r15
  struct NDIS_REFCOUNT_HANDLE__ *RefCount; // r12
  KIRQL v7; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned __int16 Length; // ax
  char v11[4]; // [rsp+38h] [rbp-38h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  void *p_ifDescr; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]
  KIRQL NewIrql; // [rsp+A0h] [rbp+30h]

  v2 = 0;
  v4 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      a2);
  if ( !a1->ifDescr.Length
    || (RtlInitUnicodeString(&DestinationString, (PCWSTR)a1->ifDescr.String),
        RtlCompareUnicodeString(&DestinationString, a2->pAdapterInstanceName, 1u)) )
  {
    v4 = 1;
  }
  RefCount = (struct NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(0x1Eu, 2);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NewIrql = v7;
  if ( a1->MiniportAvailable )
  {
    v2 = -1073741823;
    KeReleaseSpinLock(&ndisIfListLock, v7);
    NdisDereferenceWithTag((ULONG_PTR)RefCount, 0xFFu);
    NdisFreeRefCount(RefCount);
  }
  else
  {
    if ( v4 )
    {
      memset(&a1->ifDescr, 0, sizeof(a1->ifDescr));
      Length = 512;
      if ( a2->pAdapterInstanceName->Length <= 0x200u )
        Length = a2->pAdapterInstanceName->Length;
      a1->ifDescr.Length = Length;
      if ( Length )
        memmove(a1->ifDescr.String, a2->pAdapterInstanceName->Buffer, Length);
    }
    RefCountTracker = a1->RefCountTracker;
    a1->ifAdminStatus = a2->AdminStatus;
    *(_QWORD *)&a1->ifOperStatus = 2LL;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0xCu);
    ++a1->Ref;
    a1->LastMiniportFatalErrorReason = NdisMEvent_Unknown;
    KeAcquireSpinLockAtDpcLevel(&SpinLock);
    a1->MiniportAvailable = 1;
    a1->MiniportLinkReference = 1;
    a1->Miniport = a2;
    a1->MpRefCountTracker = RefCount;
    a2->IfBlock = a1;
    a2->IfBlockAvailable = 1;
    KeReleaseSpinLockFromDpcLevel(&SpinLock);
    a2->IfIndex = a1->ifIndex;
    a2->NetLuid.Value = a1->NetLuid.Value;
    a2->OperStatus = a1->ifOperStatus;
    a2->OperStatusFlags = 0;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql);
    if ( v4 )
    {
      ndisIfUpdatePersistedInterfaceInfo(
        (unsigned __int8 *)&a1->NetLuid,
        0x204u,
        0x208u,
        (unsigned __int8 *)&a1->ifDescr);
      v13 = 2LL;
      p_ifDescr = &a1->ifDescr;
      v15 = 516;
      v16 = 4;
      ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v13);
    }
    v13 = 0LL;
    p_ifDescr = &a1->ifAdminStatus;
    v15 = 4;
    v16 = 16;
    ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v13);
    ndisNsiSyncMiniportOperStatusNotification(a2);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v11,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return v2;
}
