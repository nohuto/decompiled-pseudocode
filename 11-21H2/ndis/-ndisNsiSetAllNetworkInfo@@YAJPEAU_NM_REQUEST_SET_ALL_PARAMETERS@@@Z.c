/*
 * XREFs of ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B6310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0017EF4 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0022378 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002B1C8 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002B984 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002BB04 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ndisIfCreateNetworkBlock @ 0x1C002C3E0 (ndisIfCreateNetworkBlock.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002D458 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ndisIfReleaseSiteId @ 0x1C00B59FC (ndisIfReleaseSiteId.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00B5A30 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisNsiNotifyClientNetworkChange @ 0x1C01335E0 (ndisNsiNotifyClientNetworkChange.c)
 */

__int64 __fastcall ndisNsiSetAllNetworkInfo(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int v2; // edi
  char v3; // r13
  char v4; // r12
  KIRQL v5; // bl
  _OWORD *v6; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  const struct _GUID *v10; // r15
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  __int64 v12; // rsi
  const struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v14; // rbx
  int v15; // r11d
  int v16; // r11d
  int v17; // r11d
  int v18; // eax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  KIRQL v24; // bl
  KIRQL NewIrql[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v27; // [rsp+50h] [rbp-B8h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v28[2]; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h]
  char v31[528]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v32; // [rsp+298h] [rbp+190h] BYREF
  __int64 v33; // [rsp+2A8h] [rbp+1A0h]

  *(_DWORD *)&NewIrql[4] = 0;
  v30 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v33 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  *(_OWORD *)v28 = 0LL;
  v32 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v32);
  KeEnterCriticalRegion();
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v5 = NewIrql[0];
  memset(v31, 0, sizeof(v31));
  if ( *((_DWORD *)a1 + 6) != 16 || *((_DWORD *)a1 + 10) != 528 )
    goto LABEL_4;
  v6 = (_OWORD *)*((_QWORD *)a1 + 4);
  v7 = v31;
  v8 = 4LL;
  do
  {
    *(_OWORD *)v7 = *v6;
    *((_OWORD *)v7 + 1) = v6[1];
    *((_OWORD *)v7 + 2) = v6[2];
    *((_OWORD *)v7 + 3) = v6[3];
    *((_OWORD *)v7 + 4) = v6[4];
    *((_OWORD *)v7 + 5) = v6[5];
    *((_OWORD *)v7 + 6) = v6[6];
    v7 += 128;
    v9 = v6[7];
    v6 += 8;
    *((_OWORD *)v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v7 = *v6;
  if ( v31[0] != -84 || v31[1] != 1 || *(_WORD *)&v31[2] != 528 )
    *(_DWORD *)v31 = 34603436;
  v10 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  NetworkBlock = ndisIfFindNetworkBlock(v10);
  v27 = NetworkBlock;
  v12 = (__int64)NetworkBlock;
  if ( NetworkBlock
    && !ndisIsCompartmentAccessibleByClient(
          *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)NetworkBlock + 6),
          (const struct _NDIS_NSI_CLIENT_INFO *)&v32,
          1) )
  {
    v2 = -1073741072;
    goto LABEL_27;
  }
  if ( *((_DWORD *)a1 + 12) != 3 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(*(unsigned int *)&v31[4]);
    v14 = (__int64)CompartmentBlock;
    if ( !CompartmentBlock
      || !ndisIsCompartmentAccessibleByClient(CompartmentBlock, (const struct _NDIS_NSI_CLIENT_INFO *)&v32, 1) )
    {
      goto LABEL_34;
    }
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( v12 )
        {
          v2 = -1073741270;
          goto LABEL_26;
        }
LABEL_29:
        v2 = ndisIfCreateNetworkBlock(v14, (__int64)v10, (__int128 *)v31, &v27);
        if ( v2 < 0 )
          goto LABEL_26;
        v12 = (__int64)v27;
        v3 = 1;
LABEL_37:
        ++*(_DWORD *)(v12 + 76);
        if ( v4 )
        {
          v28[1] = *((struct _NDIS_IF_NETWORK_BLOCK **)a1 + 4);
          Event.Header.LockNV = *(_DWORD *)&NewIrql[4];
          HIDWORD(v28[0]) = 0;
          Event.Header.SignalState = 0;
        }
        KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
        ndisNsiNotifyClientNetworkChange(v12, v3);
        v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v12);
        goto LABEL_27;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v5 = NewIrql[0];
        if ( v17 == 1 )
          goto LABEL_22;
LABEL_4:
        v2 = -1073741811;
LABEL_27:
        KeReleaseSpinLock(&ndisIfListLock, v5);
        goto LABEL_45;
      }
      if ( !v12 )
        goto LABEL_29;
    }
    else if ( !v12 )
    {
      goto LABEL_34;
    }
    v2 = ndisNsiChangeNetworkInfo(v12, (__int64)v31, *((_DWORD *)a1 + 10), 0, (int *)&NewIrql[4]);
    if ( !*(_DWORD *)&NewIrql[4] )
      goto LABEL_26;
    v4 = 1;
    goto LABEL_37;
  }
LABEL_22:
  if ( !v12 )
  {
LABEL_34:
    v2 = -1073741072;
    goto LABEL_26;
  }
  if ( *(_QWORD *)(v12 + 56) != v12 + 56 || (v18 = *(_DWORD *)(v12 + 72), (v18 & 1) != 0) )
  {
    v2 = -1073741811;
LABEL_26:
    v5 = NewIrql[0];
    goto LABEL_27;
  }
  *(_DWORD *)(v12 + 72) = v18 | 1;
  v19 = *(_QWORD *)(v12 + 16);
  if ( *(_QWORD *)(v19 + 8) != v12 + 16 )
    goto LABEL_48;
  v20 = *(_QWORD **)(v12 + 24);
  if ( *v20 != v12 + 16
    || (--dword_1C00EC1FC,
        *v20 = v19,
        *(_QWORD *)(v19 + 8) = v20,
        ndisIfReleaseSiteId(*(_DWORD *)(v12 + 88)),
        COMPARTMENTBLOCK_DECREMENT_REF(v21),
        v22 = *(_QWORD *)v12,
        *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12)
    || (v23 = *(_QWORD **)(v12 + 8), *v23 != v12) )
  {
LABEL_48:
    __fastfail(3u);
  }
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  *(_QWORD *)(v12 + 608) = &Event.Header.WaitListHead;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  ndisNsiNotifyClientNetworkChange(v12, 2);
  v24 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v12);
  KeReleaseSpinLock(&ndisIfListLock, v24);
  ndisWaitForKernelObject(&Event.Header.WaitListHead);
  *(_QWORD *)(v12 + 608) = 0LL;
  ExFreePoolWithTag((PVOID)v12, 0);
LABEL_45:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v2);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
