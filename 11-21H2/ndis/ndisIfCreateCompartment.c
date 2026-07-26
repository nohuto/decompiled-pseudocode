/*
 * XREFs of ndisIfCreateCompartment @ 0x1C00B300C
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B4120 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0022378 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002B1C8 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ndisCmGetThreadState @ 0x1C002B9FC (ndisCmGetThreadState.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C002CBC0 (ndisIfCreateCompartmentBlock.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002D458 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ @ 0x1C0035BDC (-Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0035DA0 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C00B3D08 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010A270 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C01123B0 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C013349C (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartment(__int64 a1, struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // r12
  int Network; // esi
  char v5; // r13
  __int128 *v6; // r14
  KIRQL v7; // r15
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  __int64 v9; // rbx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v10; // rdi
  int v11; // eax
  int IsEnabled; // eax
  bool v13; // cf
  struct _NDIS_NSI_COMPARTMENT_RW *v14; // r15
  __int128 v15; // xmm0
  KIRQL v16; // al
  KIRQL v17; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  KIRQL v19; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rsi
  KIRQL v21; // bl
  char v22; // bl
  __int64 v23; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  KIRQL v27; // bl
  KIRQL v28; // bl
  int v30; // [rsp+40h] [rbp-18h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v31; // [rsp+48h] [rbp-10h] BYREF
  char v34; // [rsp+B0h] [rbp+58h]
  unsigned int v35; // [rsp+B8h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  Network = 0;
  v34 = 0;
  v5 = 0;
  v6 = (__int128 *)(v2 + 1080);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids);
  *a2 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v31 = CompartmentBlockByGuid;
  v9 = (__int64)CompartmentBlockByGuid;
  v10 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    v11 = *((_DWORD *)CompartmentBlockByGuid + 10);
    if ( (v11 & 1) != 0 )
    {
      v10 = 0LL;
      v31 = 0LL;
      v9 = 0LL;
    }
    else if ( (v11 & 2) != 0 )
    {
      *(_DWORD *)(v9 + 40) = v11 & 0xFFFFFFFD;
      if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
      {
        *(_DWORD *)(v9 + 40) |= 8u;
        ndisNsiScheduleCompartmentBlockChangeNotification(v9);
        v5 = 1;
      }
      else
      {
        _InterlockedAdd((volatile signed __int32 *)(v9 + 44), 1u);
        v10 = v31;
        v34 = 1;
      }
    }
    else if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
      {
        v10 = 0LL;
        v31 = 0LL;
        v9 = 0LL;
      }
      Network = -1073741270;
    }
    if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() && v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 44));
      v10 = v31;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( Network >= 0 )
  {
    if ( v9 )
      goto LABEL_35;
    Network = ndisIfCreateCompartmentBlock(0, (__int128 *)(v2 + 1080), 0LL, &v31);
    if ( Network < 0 )
    {
      v10 = v31;
      goto LABEL_41;
    }
    IsEnabled = Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled();
    v10 = v31;
    if ( IsEnabled )
      v5 = 1;
    v13 = *(_BYTE *)(v2 + 1) < 2u;
    *a2 = v31;
    if ( !v13 )
      *((_DWORD *)v10 + 420) = *(_DWORD *)(v2 + 1616);
    v14 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v10 + 64);
    *((_DWORD *)v10 + 16) = *(_DWORD *)v2;
    v15 = *v6;
    *(_OWORD *)((char *)v10 + 1144) = *v6;
    *((_DWORD *)v10 + 419) = *(_DWORD *)(v2 + 1612);
    if ( (*((_DWORD *)v10 + 420) & 4) != 0 )
    {
      *(_OWORD *)((char *)v10 + 1684) = v15;
    }
    else
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v35 = 0;
      v17 = v16;
      ndisCmGetThreadState(KeGetCurrentThread(), &v35, &v30);
      CompartmentBlock = ndisIfFindCompartmentBlock(v35);
      v10 = v31;
      *(_OWORD *)((char *)v31 + 1684) = *(_OWORD *)((char *)CompartmentBlock + 1144);
      KeReleaseSpinLock(&ndisIfListLock, v17);
    }
    Network = ndisIfCreateNetwork((struct _GUID *)v10 + 5, *((_DWORD *)v10 + 4));
    if ( Network >= 0 )
    {
      v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v10 + 5);
      KeReleaseSpinLock(&ndisIfListLock, v19);
      if ( !NetworkBlock )
      {
        Network = -1073741772;
        goto LABEL_41;
      }
      *((_QWORD *)v10 + 7) = NetworkBlock;
      Network = ndisIfCreateInterface(NetworkBlock, 1u, v14, 0LL, 0LL, 0LL, 0LL, NdisIfBlockSourceAutomaticLoopback);
      if ( Network < 0 )
        goto LABEL_41;
      if ( !(unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
      {
        _InterlockedAdd((volatile signed __int32 *)v10 + 11, 1u);
        v10 = v31;
        v22 = 1;
LABEL_36:
        v23 = 4LL;
        v24 = (_OWORD *)((char *)v10 + 1160);
        v25 = (_OWORD *)(v2 + 1096);
        do
        {
          *v24 = *v25;
          v24[1] = v25[1];
          v24[2] = v25[2];
          v24[3] = v25[3];
          v24[4] = v25[4];
          v24[5] = v25[5];
          v24[6] = v25[6];
          v24 += 8;
          v26 = v25[7];
          v25 += 8;
          *(v24 - 1) = v26;
          --v23;
        }
        while ( v23 );
        *(_DWORD *)v24 = *(_DWORD *)v25;
        memmove(*(void **)(a1 + 32), (char *)v10 + 64, 0x668uLL);
        **(_DWORD **)(a1 + 16) = *((_DWORD *)v10 + 4);
        if ( !(unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() && v22 )
        {
          ndisNsiNotifyClientCompartmentChange(v10, 1LL);
          v27 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          COMPARTMENTBLOCK_DECREMENT_REF(v10);
          KeReleaseSpinLock(&ndisIfListLock, v27);
        }
        goto LABEL_41;
      }
      v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      ndisNsiScheduleCompartmentBlockChangeNotification((__int64)v10);
      KeReleaseSpinLock(&ndisIfListLock, v21);
LABEL_35:
      v22 = v34;
      goto LABEL_36;
    }
  }
LABEL_41:
  if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() && v10 )
  {
    v28 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( v5 )
      *((_DWORD *)v10 + 10) &= ~8u;
    COMPARTMENTBLOCK_DECREMENT_REF(v10);
    KeReleaseSpinLock(&ndisIfListLock, v28);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      Network,
      *a2);
  return (unsigned int)Network;
}
