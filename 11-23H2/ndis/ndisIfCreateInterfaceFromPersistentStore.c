/*
 * XREFs of ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A588
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0118BA0 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BF78 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0022F88 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     WPP_RECORDER_SF_I @ 0x1C002A430 (WPP_RECORDER_SF_I.c)
 *     WPP_RECORDER_SF_IL @ 0x1C002A4A4 (WPP_RECORDER_SF_IL.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1C002A724 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002FB28 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     WPP_RECORDER_SF_i_guid_ @ 0x1C00B8074 (WPP_RECORDER_SF_i_guid_.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0110F74 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C011140C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(
        struct _GUID *a1,
        struct NdisNetworkInterfacePersistedState *a2,
        __int64 a3)
{
  unsigned int v5; // edi
  const union _NET_LUID_LH *v6; // r14
  _LIST_ENTRY *InterfaceByNetLuid; // rbx
  KIRQL v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  KIRQL v11; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  int v13; // ecx
  int Interface; // eax
  int v15; // ecx
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rbp
  KIRQL v18; // r8
  int v19; // ecx
  int v20; // r9d
  int v21; // [rsp+20h] [rbp-48h]
  unsigned int v22; // [rsp+80h] [rbp+18h] BYREF

  v22 = a3;
  v5 = 0;
  v6 = (const union _NET_LUID_LH *)((char *)a2 + 24);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, a3, 0xCu, v21);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)v6->Value);
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( InterfaceByNetLuid )
    goto LABEL_14;
  v22 = (v6->Value >> 24) & 0xFFFFFF;
  if ( v22 - 32512 > 0x4100 )
  {
    v5 = ndisIfAllocateAndVerifyNetLuidIndex(*((_WORD *)a2 + 15), &v22, 0, 0);
    if ( v5 )
      goto LABEL_11;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)((char *)a2 + 36));
  KeReleaseSpinLock(&ndisIfListLock, v11);
  if ( NetworkBlock )
    goto LABEL_6;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(*((_DWORD *)a2 + 13));
  if ( !CompartmentBlock )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    *((_DWORD *)a2 + 13) = v19;
  }
  KeReleaseSpinLock(&ndisIfListLock, v18);
  if ( !CompartmentBlock )
  {
LABEL_14:
    v5 = -1073741823;
    goto LABEL_11;
  }
  NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)*((_QWORD *)CompartmentBlock + 7);
  if ( NetworkBlock )
  {
    *(_OWORD *)((char *)a2 + 36) = *((_OWORD *)NetworkBlock + 2);
LABEL_6:
    v13 = *(_DWORD *)(*((_QWORD *)NetworkBlock + 6) + 16LL);
    if ( *((_DWORD *)a2 + 13) != v13 )
      *((_DWORD *)a2 + 13) = v13;
    Interface = ndisIfCreateInterface(NetworkBlock, 0, 0LL, v6, a1, a2, 0LL, NdisIfBlockSourcePersistedNetSetup);
    v15 = v5;
    if ( Interface < 0 )
      v15 = -1073741823;
    v5 = v15;
    ndisIfUpdateInterfaceFromPersistentStore(a2);
    goto LABEL_11;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, v20, v21, v6->Value, (__int64)a2 + 36);
  v5 = -1073741252;
LABEL_11:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, 0xEu, v21);
  return v5;
}
