/*
 * XREFs of ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034F98
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     NdisDereferenceWithTag @ 0x1C000CD10 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0015290 (NdisFreeRefCount.c)
 *     NdisAllocateRefCount @ 0x1C001BED0 (NdisAllocateRefCount.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C0111B44 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117824 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C013E7C8 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(struct _NDIS_IF_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // ebx
  _IF_COUNTED_STRING_LH *p_ifDescr; // r14
  bool v6; // r12
  struct NDIS_REFCOUNT_HANDLE__ *RefCount; // r13
  KIRQL v8; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned __int16 Length; // cx
  unsigned __int16 v12; // ax
  char v13[4]; // [rsp+38h] [rbp-38h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  void *p_ifAdminStatus; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]
  KIRQL NewIrql; // [rsp+A0h] [rbp+30h]

  v2 = 0;
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
  p_ifDescr = &a1->ifDescr;
  if ( a1->ifDescr.Length )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)a1->ifDescr.String);
    v6 = RtlCompareUnicodeString(&DestinationString, a2->pAdapterInstanceName, 1u) != 0;
  }
  else
  {
    v6 = 1;
  }
  RefCount = (struct NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(0x1Eu, 2);
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NewIrql = v8;
  if ( a1->MiniportAvailable )
  {
    v2 = -1073741823;
    KeReleaseSpinLock(&ndisIfListLock, v8);
    NdisDereferenceWithTag((ULONG_PTR)RefCount, 0xFFu);
    NdisFreeRefCount(RefCount);
    goto LABEL_10;
  }
  if ( v6 )
  {
    memset(&a1->ifDescr, 0, sizeof(a1->ifDescr));
    Length = a2->pAdapterInstanceName->Length;
    v12 = 512;
    if ( Length <= 0x200u )
    {
      p_ifDescr->Length = Length;
      v12 = Length;
      if ( !Length )
        goto LABEL_7;
    }
    else
    {
      p_ifDescr->Length = 512;
    }
    memmove(a1->ifDescr.String, a2->pAdapterInstanceName->Buffer, v12);
  }
LABEL_7:
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
  if ( v6 )
  {
    ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&a1->NetLuid, 0x204u, 0x208u, (unsigned __int8 *)&a1->ifDescr);
    v15 = 2LL;
    p_ifAdminStatus = &a1->ifDescr;
    v17 = 516;
    v18 = 4;
    ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v15);
  }
  v15 = 0LL;
  p_ifAdminStatus = &a1->ifAdminStatus;
  v17 = 4;
  v18 = 16;
  ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v15);
  ndisNsiSyncMiniportOperStatusNotification(a2);
LABEL_10:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v13,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return v2;
}
