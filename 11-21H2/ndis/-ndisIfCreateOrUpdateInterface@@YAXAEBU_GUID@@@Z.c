/*
 * XREFs of ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B29D4
 * Callers:
 *     ndisPnpRefresh @ 0x1C0123374 (ndisPnpRefresh.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00169C8 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C0022020 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C00340F8 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C010E614 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C0132918 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0132938 (ndisIfUpdateIfBlockFromPersistedState.c)
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
  struct KRegKey v11; // [rsp+48h] [rbp+10h] BYREF
  struct KRegKey v12; // [rsp+50h] [rbp+18h] BYREF

  v11.m_ptr = 0LL;
  v4 = ndisIfOpenInterfacePersistedStorage(a1, &v11, a3);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741772 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
    v7 = InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid[89].Blink, 0xFu);
      ++LODWORD(v7[81].Blink);
    }
    KeReleaseSpinLock(&ndisIfListLock, v5);
    if ( v11.m_ptr )
    {
      if ( v7 )
      {
        ndisIfUpdateIfBlockFromPersistedState((struct _NDIS_IF_BLOCK *)v7, &v11);
        v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v7, 0xFu);
        KeReleaseSpinLock(&ndisIfListLock, v8);
      }
      else
      {
        v12.m_ptr = 0LL;
        ndisLoadNetworkInterfaceFromPersistedState(a1, &v11, &v12);
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v12.m_ptr);
      }
    }
    else if ( v7 )
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
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11.m_ptr);
}
