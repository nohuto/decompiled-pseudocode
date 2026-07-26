/*
 * XREFs of ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00BB2E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0018378 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BF78 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002C178 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1C002F4AC (ndisIfCreateNetworkBlock.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002F744 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002FA40 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002FB28 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ndisIfReleaseSiteId @ 0x1C00BA9E0 (ndisIfReleaseSiteId.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00BAA14 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisNsiNotifyClientNetworkChange @ 0x1C013F28C (ndisNsiNotifyClientNetworkChange.c)
 */

__int64 __fastcall ndisNsiSetAllNetworkInfo(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  char v1; // bl
  unsigned int v3; // edi
  _OWORD *v4; // rax
  char *v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // xmm1
  const struct _GUID *v8; // r13
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  __int64 v10; // rsi
  const struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v12; // r12
  int v13; // r11d
  int v14; // r11d
  int v15; // r11d
  char v16; // r12
  char v17; // al
  KIRQL v18; // bl
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // rax
  KIRQL NewIrql[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v28; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h]
  char v32[528]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v33; // [rsp+298h] [rbp+190h] BYREF
  __int64 v34; // [rsp+2A8h] [rbp+1A0h]

  v1 = 0;
  v31 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v34 = 0LL;
  v3 = 0;
  *(_DWORD *)&NewIrql[4] = 0;
  v29 = 0LL;
  v33 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v33);
  KeEnterCriticalRegion();
  NewIrql[2] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(v32, 0, sizeof(v32));
  if ( *((_DWORD *)a1 + 6) != 16 || *((_DWORD *)a1 + 10) != 528 )
  {
    v3 = -1073741811;
    goto LABEL_52;
  }
  v4 = (_OWORD *)*((_QWORD *)a1 + 4);
  v5 = v32;
  v6 = 4LL;
  do
  {
    *(_OWORD *)v5 = *v4;
    *((_OWORD *)v5 + 1) = v4[1];
    *((_OWORD *)v5 + 2) = v4[2];
    *((_OWORD *)v5 + 3) = v4[3];
    *((_OWORD *)v5 + 4) = v4[4];
    *((_OWORD *)v5 + 5) = v4[5];
    *((_OWORD *)v5 + 6) = v4[6];
    v5 += 128;
    v7 = v4[7];
    v4 += 8;
    *((_OWORD *)v5 - 1) = v7;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)v5 = *v4;
  if ( v32[0] != -84 || v32[1] != 1 || *(_WORD *)&v32[2] != 528 )
    *(_DWORD *)v32 = 34603436;
  v8 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  NetworkBlock = ndisIfFindNetworkBlock(v8);
  v28 = NetworkBlock;
  v10 = (__int64)NetworkBlock;
  if ( NetworkBlock
    && !ndisIsCompartmentAccessibleByClient(
          *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)NetworkBlock + 6),
          (const struct _NDIS_NSI_CLIENT_INFO *)&v33,
          1) )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 12) == 3 )
  {
LABEL_39:
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 56) == v10 + 56 )
      {
        v20 = *(_DWORD *)(v10 + 72);
        if ( (v20 & 1) == 0 )
        {
          *(_DWORD *)(v10 + 72) = v20 | 1;
          v21 = *(_QWORD *)(v10 + 16);
          if ( *(_QWORD *)(v21 + 8) != v10 + 16 )
            goto LABEL_56;
          v22 = *(_QWORD **)(v10 + 24);
          if ( *v22 != v10 + 16
            || (--dword_1C00F51EC,
                *v22 = v21,
                *(_QWORD *)(v21 + 8) = v22,
                ndisIfReleaseSiteId(*(_DWORD *)(v10 + 88)),
                COMPARTMENTBLOCK_DECREMENT_REF(v23),
                v24 = *(_QWORD *)v10,
                *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10)
            || (v25 = *(_QWORD **)(v10 + 8), *v25 != v10) )
          {
LABEL_56:
            __fastfail(3u);
          }
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          v17 = 1;
          v16 = 0;
          goto LABEL_25;
        }
      }
      goto LABEL_22;
    }
LABEL_35:
    v3 = -1073741072;
    goto LABEL_23;
  }
  CompartmentBlock = ndisIfFindCompartmentBlock(*(unsigned int *)&v32[4]);
  v12 = (__int64)CompartmentBlock;
  if ( !CompartmentBlock
    || !ndisIsCompartmentAccessibleByClient(CompartmentBlock, (const struct _NDIS_NSI_CLIENT_INFO *)&v33, 1) )
  {
LABEL_14:
    v3 = -1073741072;
    goto LABEL_52;
  }
  if ( !v13 )
  {
    if ( v10 )
    {
      v3 = ndisNsiChangeNetworkInfo(v10, (__int64)v32, *((_DWORD *)a1 + 10), 0, (int *)&NewIrql[4]);
      if ( *(_DWORD *)&NewIrql[4] )
        v1 = 1;
      goto LABEL_23;
    }
    goto LABEL_35;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
      {
LABEL_22:
        v3 = -1073741811;
        goto LABEL_23;
      }
      goto LABEL_39;
    }
    if ( v10 )
    {
      v3 = ndisNsiChangeNetworkInfo(v10, (__int64)v32, *((_DWORD *)a1 + 10), 0, (int *)&NewIrql[4]);
      if ( *(_DWORD *)&NewIrql[4] )
        v1 = 1;
      goto LABEL_23;
    }
  }
  else if ( v10 )
  {
    v3 = -1073741270;
    goto LABEL_23;
  }
  v19 = ndisIfCreateNetworkBlock(v12, (__int64)v8, (__int128 *)v32, &v28);
  v10 = (__int64)v28;
  v3 = v19;
  if ( v19 >= 0 )
  {
    v16 = 1;
    goto LABEL_24;
  }
LABEL_23:
  v16 = 0;
LABEL_24:
  v17 = 0;
LABEL_25:
  if ( v17 )
  {
    KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
    *(_QWORD *)(v10 + 608) = &Event.Header.WaitListHead;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql[2]);
    ndisNsiNotifyClientNetworkChange(v10, 2);
    v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v10);
    KeReleaseSpinLock(&ndisIfListLock, v18);
    ndisWaitForKernelObject(&Event.Header.WaitListHead);
    *(_QWORD *)(v10 + 608) = 0LL;
    ExFreePoolWithTag((PVOID)v10, 0);
    goto LABEL_53;
  }
  if ( v16 || v1 )
  {
    ++*(_DWORD *)(v10 + 76);
    if ( v1 )
    {
      *((_QWORD *)&v29 + 1) = *((_QWORD *)a1 + 4);
      Event.Header.LockNV = *(_DWORD *)&NewIrql[4];
      DWORD1(v29) = 0;
      Event.Header.SignalState = 0;
    }
    KeReleaseSpinLock(&ndisIfListLock, NewIrql[2]);
    ndisNsiNotifyClientNetworkChange(v10, v16 != 0);
    NewIrql[2] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v10);
  }
LABEL_52:
  KeReleaseSpinLock(&ndisIfListLock, NewIrql[2]);
LABEL_53:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v3);
  KeLeaveCriticalRegion();
  return v3;
}
