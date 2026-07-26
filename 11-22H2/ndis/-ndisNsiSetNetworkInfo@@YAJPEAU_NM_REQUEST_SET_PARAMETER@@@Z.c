/*
 * XREFs of ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00BB820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00181E8 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BDE8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002BFE8 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002F5B4 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002F8B0 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002F998 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ndisIfReleaseSiteId @ 0x1C00BA9C0 (ndisIfReleaseSiteId.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00BA9F4 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisNsiNotifyClientNetworkChange @ 0x1C013F2AC (ndisNsiNotifyClientNetworkChange.c)
 */

__int64 __fastcall ndisNsiSetNetworkInfo(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  unsigned int v1; // edi
  char v2; // r15
  KIRQL v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // ebx
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  __int64 v8; // rsi
  unsigned __int8 v9; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r11
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // r11
  __int64 v16; // rcx
  _QWORD *v17; // rax
  KIRQL v18; // bl
  unsigned int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+4Ch] [rbp-B4h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+5Ch] [rbp-A4h]
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  char v30[528]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+290h] [rbp+190h] BYREF
  __int64 v32; // [rsp+2A0h] [rbp+1A0h]

  v1 = 0;
  v2 = 0;
  LODWORD(v23) = 0;
  v32 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v31 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v31);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(v30, 0, sizeof(v30));
  if ( *((_DWORD *)a1 + 6) != 16
    || *((_DWORD *)a1 + 8)
    || (v5 = *((unsigned int *)a1 + 13), v6 = *((_DWORD *)a1 + 12), v6 + (unsigned int)v5 > 0x210)
    || v6 + (unsigned int)v5 < v6 )
  {
    v1 = -1073741808;
    goto LABEL_30;
  }
  memmove(&v30[v5], *((const void **)a1 + 5), v6);
  if ( !(_DWORD)v5 )
  {
LABEL_8:
    v1 = -1073741811;
LABEL_30:
    KeReleaseSpinLock(&ndisIfListLock, v4);
    goto LABEL_31;
  }
  if ( (unsigned int)v5 <= 4 )
  {
    if ( v6 < 4 )
      goto LABEL_8;
    v2 = 1;
  }
  NetworkBlock = ndisIfFindNetworkBlock(*((const struct _GUID **)a1 + 2));
  v8 = (__int64)NetworkBlock;
  if ( !NetworkBlock
    || !ndisIsCompartmentAccessibleByClient(
          *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)NetworkBlock + 6),
          (const struct _NDIS_NSI_CLIENT_INFO *)&v31,
          1) )
  {
    goto LABEL_8;
  }
  if ( v2 )
    CompartmentBlock = ndisIfFindCompartmentBlock(*(unsigned int *)&v30[4]);
  if ( !CompartmentBlock )
    goto LABEL_8;
  v11 = *((_DWORD *)a1 + 14);
  if ( !v11 )
  {
    v19 = ndisNsiChangeNetworkInfo(v8, (__int64)v30, *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 13), (int *)&v23);
    v20 = v23;
    v1 = v19;
    if ( (_DWORD)v23 )
    {
      ++*(_DWORD *)(v8 + 76);
      v21 = *((_QWORD *)a1 + 5);
      v25 = 0;
      v24 = 0;
      v26 = v21;
      v28 = *((_DWORD *)a1 + 13);
      v27 = v20;
      KeReleaseSpinLock(&ndisIfListLock, v4);
      ndisNsiNotifyClientNetworkChange(v8, 0);
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v8);
    }
    goto LABEL_30;
  }
  if ( v11 != 3 )
    goto LABEL_8;
  if ( *(_QWORD *)(v8 + 56) != v8 + 56 )
    goto LABEL_8;
  v12 = *(_DWORD *)(v8 + 72);
  if ( ((unsigned __int8)v12 & v9) != 0 )
    goto LABEL_8;
  *(_DWORD *)(v8 + 72) = v12 | 1;
  v13 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(v13 + 8) != v8 + 16 )
    goto LABEL_26;
  v14 = *(_QWORD **)(v8 + 24);
  if ( *v14 != v8 + 16
    || (--dword_1C00F51EC,
        *v14 = v13,
        *(_QWORD *)(v13 + 8) = v14,
        ndisIfReleaseSiteId(*(_DWORD *)(v8 + 88)),
        COMPARTMENTBLOCK_DECREMENT_REF(v15),
        v16 = *(_QWORD *)v8,
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8)
    || (v17 = *(_QWORD **)(v8 + 8), *v17 != v8) )
  {
LABEL_26:
    __fastfail(3u);
  }
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(v8 + 608) = &Event;
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ndisNsiNotifyClientNetworkChange(v8, 2);
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v8);
  KeReleaseSpinLock(&ndisIfListLock, v18);
  ndisWaitForKernelObject(&Event);
  *(_QWORD *)(v8 + 608) = 0LL;
  ExFreePoolWithTag((PVOID)v8, 0);
LABEL_31:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v1);
  KeLeaveCriticalRegion();
  return v1;
}
