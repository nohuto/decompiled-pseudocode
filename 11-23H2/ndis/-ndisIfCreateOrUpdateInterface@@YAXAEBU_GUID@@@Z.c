/*
 * XREFs of ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B7BF4
 * Callers:
 *     ndisPnpRefresh @ 0x1C012EE9C (ndisPnpRefresh.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C0015CE0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C3A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C002B948 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0118BA0 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C013E4D8 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C013E4F8 (ndisIfUpdateIfBlockFromPersistedState.c)
 */

void __fastcall ndisIfCreateOrUpdateInterface(const struct _GUID *a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  KIRQL v5; // si
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rax
  struct _LIST_ENTRY *v7; // rdi
  KIRQL v8; // bl
  unsigned int Flink_high; // ebx
  KIRQL v10; // si
  HANDLE v11; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = ndisIfOpenInterfacePersistedStorage(a1, (struct KRegKey *)&v11, a3);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741772 )
  {
    KRegKey::~KRegKey((KRegKey *)&v11);
    return;
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
  v7 = InterfaceByInterfaceGuid;
  if ( InterfaceByInterfaceGuid )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid[89].Blink, 0xFu);
    ++LODWORD(v7[81].Blink);
  }
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( !v11 )
    goto LABEL_12;
  if ( !v7 )
  {
    if ( v11 )
    {
      Handle = 0LL;
      ndisLoadNetworkInterfaceFromPersistedState(a1, (struct KRegKey *)&v11, (struct KRegKey *)&Handle);
      if ( Handle )
        ZwClose(Handle);
      goto LABEL_17;
    }
LABEL_12:
    if ( v7 )
    {
      Flink_high = 0;
      v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( LODWORD(v7[87].Blink) == 1 )
        Flink_high = HIDWORD(v7->Flink);
      IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v7, 0xFu);
      KeReleaseSpinLock(&ndisIfListLock, v10);
      if ( Flink_high )
        ndisIfDeregisterInterfaceEx(Flink_high, 1);
    }
    goto LABEL_17;
  }
  ndisIfUpdateIfBlockFromPersistedState((struct _NDIS_IF_BLOCK *)v7, (struct KRegKey *)&v11);
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v7, 0xFu);
  KeReleaseSpinLock(&ndisIfListLock, v8);
LABEL_17:
  if ( v11 )
    ZwClose(v11);
}
