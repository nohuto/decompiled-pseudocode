/*
 * XREFs of ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B4DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0021894 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C0022020 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C00256E4 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002B984 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002BB04 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C010A91C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSetInterfaceInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  _LIST_ENTRY *v1; // rsi
  KIRQL v3; // r15
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v6; // ebx
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  __int64 v8; // rax
  unsigned int v10; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+78h] [rbp-90h]
  _BYTE v14[1104]; // [rsp+88h] [rbp-80h] BYREF

  v1 = 0LL;
  v10 = 0;
  v13 = 0LL;
  v12 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Eu,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      a1);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v12);
  KeEnterCriticalRegion();
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(v14, 0, 0x444uLL);
  if ( *((_DWORD *)a1 + 6) != 8 )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 8) || *((_DWORD *)a1 + 14) )
  {
    v4 = -1073741811;
  }
  else
  {
    v5 = *((unsigned int *)a1 + 13);
    v6 = *((_DWORD *)a1 + 12);
    if ( v6 + (unsigned int)v5 > 0x444
      || v6 + (unsigned int)v5 < v6
      || (memmove(&v14[v5], *((const void **)a1 + 5), v6),
          InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)(*((union _NET_LUID_LH **)a1 + 2))->Value),
          (v1 = InterfaceByNetLuid) == 0LL)
      || !ndisIsCompartmentAccessibleByClient(
            (const struct _NDIS_IF_COMPARTMENT_BLOCK *)InterfaceByNetLuid[86].Flink,
            (const struct _NDIS_NSI_CLIENT_INFO *)&v12,
            1) )
    {
LABEL_4:
      v4 = -1073741811;
      goto LABEL_15;
    }
    v4 = ndisNsiChangeInterfaceInfo(
           (struct _NDIS_IF_BLOCK *)v1,
           (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v14,
           (wchar_t *)v6,
           v5,
           &v10);
  }
  if ( v10 )
  {
    v8 = *((_QWORD *)a1 + 5);
    v11[0] = 0LL;
    v11[1] = v8;
    v11[2] = __PAIR64__(*((_DWORD *)a1 + 13), v10);
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1[89].Blink, 5u);
    ++LODWORD(v1[81].Blink);
    KeReleaseSpinLock(&ndisIfListLock, v3);
    ndisNsiNotifyClientInterfaceChange(v1, 0LL, v11);
    v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v1, 5u);
  }
LABEL_15:
  KeReleaseSpinLock(&ndisIfListLock, v3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Fu,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      (char)a1,
      v4);
  KeLeaveCriticalRegion();
  return v4;
}
