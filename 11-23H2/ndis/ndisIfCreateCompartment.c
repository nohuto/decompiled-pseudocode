/*
 * XREFs of ndisIfCreateCompartment @ 0x1C00B825C
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B9120 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BF78 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C002194C (WPP_RECORDER_SF_Lq.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002C178 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisCmGetThreadState @ 0x1C002F760 (ndisCmGetThreadState.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002FB28 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C0033D08 (ndisIfCreateCompartmentBlock.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0038018 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage @ 0x1C00380D4 (Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C00B8CFC (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C011140C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C011A6E4 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C013F148 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartment(__int64 a1, struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // r15
  int Network; // esi
  char v6; // r13
  __int128 *v7; // rbx
  KIRQL v8; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  __int64 v10; // rdi
  int v11; // eax
  char v12; // r12
  int v13; // eax
  bool v14; // cf
  struct _NDIS_NSI_COMPARTMENT_RW *v15; // r12
  __int128 v16; // xmm0
  KIRQL v17; // al
  KIRQL v18; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  KIRQL v20; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rsi
  KIRQL v22; // bl
  KIRQL v24; // bl
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  int v29; // [rsp+40h] [rbp-18h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v30; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+B8h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  Network = 0;
  v6 = 0;
  v7 = (__int128 *)(v2 + 1080);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids);
  *a2 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v30 = CompartmentBlockByGuid;
  v10 = (__int64)CompartmentBlockByGuid;
  if ( !CompartmentBlockByGuid )
    goto LABEL_6;
  v11 = *((_DWORD *)CompartmentBlockByGuid + 10);
  if ( (v11 & 1) != 0 )
  {
    v10 = 0LL;
    v30 = 0LL;
LABEL_6:
    v12 = 0;
    goto LABEL_7;
  }
  if ( (v11 & 2) != 0 )
  {
    *(_DWORD *)(v10 + 40) = v11 & 0xFFFFFFF5 | 8;
    if ( (unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
      v6 = 1;
    else
      ndisNsiScheduleCompartmentBlockChangeNotification(v10);
    v12 = 1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      v10 = 0LL;
      Network = -1073741270;
      v30 = 0LL;
    }
    v12 = 0;
  }
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 44));
    v10 = (__int64)v30;
  }
LABEL_7:
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( Network < 0 )
    goto LABEL_30;
  if ( !v10 )
  {
    v13 = ndisIfCreateCompartmentBlock(0, (struct _GUID *)(v2 + 1080), 0LL, &v30);
    v10 = (__int64)v30;
    Network = v13;
    if ( v13 < 0 )
      goto LABEL_30;
    v14 = *(_BYTE *)(v2 + 1) < 2u;
    *a2 = v30;
    if ( !v14 )
      *(_DWORD *)(v10 + 1680) = *(_DWORD *)(v2 + 1616);
    v15 = (struct _NDIS_NSI_COMPARTMENT_RW *)(v10 + 64);
    *(_DWORD *)(v10 + 64) = *(_DWORD *)v2;
    v16 = *v7;
    *(_OWORD *)(v10 + 1144) = *v7;
    *(_DWORD *)(v10 + 1676) = *(_DWORD *)(v2 + 1612);
    if ( (*(_DWORD *)(v10 + 1680) & 4) != 0 )
    {
      *(_OWORD *)(v10 + 1684) = v16;
    }
    else
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v33 = 0;
      v18 = v17;
      ndisCmGetThreadState(KeGetCurrentThread(), &v33, &v29);
      CompartmentBlock = ndisIfFindCompartmentBlock(v33);
      v10 = (__int64)v30;
      *(_OWORD *)((char *)v30 + 1684) = *(_OWORD *)((char *)CompartmentBlock + 1144);
      KeReleaseSpinLock(&ndisIfListLock, v18);
    }
    Network = ndisIfCreateNetwork((struct _GUID *)(v10 + 80), *(_DWORD *)(v10 + 16));
    if ( Network < 0 )
      goto LABEL_29;
    v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v10 + 80));
    KeReleaseSpinLock(&ndisIfListLock, v20);
    if ( !NetworkBlock )
    {
      Network = -1073741772;
LABEL_29:
      v12 = 1;
      goto LABEL_30;
    }
    *(_QWORD *)(v10 + 56) = NetworkBlock;
    Network = ndisIfCreateInterface(NetworkBlock, 1u, v15, 0LL, 0LL, 0LL, 0LL, NdisIfBlockSourceAutomaticLoopback);
    if ( Network < 0 )
      goto LABEL_29;
    if ( (unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
    {
      v6 = 1;
    }
    else
    {
      v24 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      ndisNsiScheduleCompartmentBlockChangeNotification(v10);
      KeReleaseSpinLock(&ndisIfListLock, v24);
    }
    v12 = 1;
  }
  v25 = 4LL;
  v26 = (_OWORD *)(v10 + 1160);
  v27 = (_OWORD *)(v2 + 1096);
  do
  {
    *v26 = *v27;
    v26[1] = v27[1];
    v26[2] = v27[2];
    v26[3] = v27[3];
    v26[4] = v27[4];
    v26[5] = v27[5];
    v26[6] = v27[6];
    v26 += 8;
    v28 = v27[7];
    v27 += 8;
    *(v26 - 1) = v28;
    --v25;
  }
  while ( v25 );
  *(_DWORD *)v26 = *(_DWORD *)v27;
  memmove(*(void **)(a1 + 32), (const void *)(v10 + 64), 0x668uLL);
  **(_DWORD **)(a1 + 16) = *(_DWORD *)(v10 + 16);
  if ( (unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() && v6 )
    ndisNsiNotifyClientCompartmentChange(v10, 1LL);
LABEL_30:
  if ( v10 )
  {
    v22 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( v12 )
      *(_DWORD *)(v10 + 40) &= ~8u;
    COMPARTMENTBLOCK_DECREMENT_REF((struct _NDIS_IF_COMPARTMENT_BLOCK *)v10);
    KeReleaseSpinLock(&ndisIfListLock, v22);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      Network,
      *a2);
  return (unsigned int)Network;
}
