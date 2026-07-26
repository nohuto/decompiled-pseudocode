/*
 * XREFs of ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00B93D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F3A0 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0011130 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C214 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00200C4 (WPP_RECORDER_SF_qd_ea_1C00200C4.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0022DF8 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002F5B4 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002F8B0 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

__int64 __fastcall ndisNsiGetAllTimestampingInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // edi
  union _NET_LUID_LH v3; // rbx
  KIRQL v4; // r14
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  _LIST_ENTRY *v6; // rbp
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx
  unsigned int TimestampFlags; // ebx
  KIRQL v10; // bl
  char v12[4]; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  v1 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_9c5ba4de329e350b3ef3aa77f1331679_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 8)
    || *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12)
    || !*((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16) < 4u )
  {
    v1 = -1073741811;
    goto LABEL_22;
  }
  v3.Value = (*((union _NET_LUID_LH **)a1 + 2))->Value;
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v13);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v3);
  v6 = InterfaceByNetLuid;
  if ( InterfaceByNetLuid )
  {
    if ( ndisIsCompartmentAccessibleByClient(
           (const struct _NDIS_IF_COMPARTMENT_BLOCK *)InterfaceByNetLuid[86].Flink,
           (const struct _NDIS_NSI_CLIENT_INFO *)&v13,
           0) )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v6[89].Blink, 0x10u);
      ++LODWORD(v6[81].Blink);
      goto LABEL_16;
    }
    v6 = 0LL;
  }
  v1 = -1073741811;
LABEL_16:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( v1 >= 0 )
  {
    memset(*((void **)a1 + 7), 0, *((unsigned int *)a1 + 16));
    v7 = ndisIfReferenceMiniport((struct _NDIS_IF_BLOCK *)v6, 0x1Cu);
    TimestampFlags = 0;
    if ( v7 )
    {
      TimestampFlags = v7->TimestampFlags;
      ndisIfDereferenceMiniport((struct _NDIS_IF_BLOCK *)v6, v8, 0x1Cu);
    }
    **((_DWORD **)a1 + 7) = TimestampFlags;
  }
  if ( v6 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v6, 0x10u);
    KeReleaseSpinLock(&ndisIfListLock, v10);
  }
LABEL_22:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v1;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_9c5ba4de329e350b3ef3aa77f1331679_Traceguids,
      (char)a1,
      *(_DWORD *)v12);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
