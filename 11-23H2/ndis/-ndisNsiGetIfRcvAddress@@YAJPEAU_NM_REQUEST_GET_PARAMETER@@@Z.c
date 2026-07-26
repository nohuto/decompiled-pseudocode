/*
 * XREFs of ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00BA6C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F530 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00112C0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C3A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0022F88 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ndisIfFindNextRcvAddress @ 0x1C013EEC4 (ndisIfFindNextRcvAddress.c)
 *     ndisIfFindRcvAddress @ 0x1C013EF54 (ndisIfFindRcvAddress.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x1C013EFD4 (ndisNsiGetIfRcvAddressRodInformation.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddress(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  _LIST_ENTRY *InterfaceByNetLuid; // rsi
  int v3; // r14d
  unsigned int IfRcvAddressRodInformation; // edi
  union _NET_LUID_LH *v5; // rax
  union _NET_LUID_LH v6; // rbx
  union _NET_LUID_LH *v7; // r12
  KIRQL v8; // al
  int v9; // ecx
  KIRQL v10; // r15
  int v11; // ecx
  _LIST_ENTRY *v12; // rax
  struct _NDIS_MINIPORT_BLOCK *v13; // rax
  __int64 Flink; // rdx
  int v15; // ebx
  __int64 NextRcvAddress; // rax
  __int64 v17; // rax
  KIRQL v18; // bl

  InterfaceByNetLuid = 0LL;
  v3 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_67203364a8c4390a74a1000e006604cb_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 40 || !*((_QWORD *)a1 + 5) )
  {
    IfRcvAddressRodInformation = -1073741808;
    goto LABEL_40;
  }
  v5 = (union _NET_LUID_LH *)*((_QWORD *)a1 + 2);
  v6.Value = v5->Value;
  v7 = v5 + 1;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v9 = *((_DWORD *)a1 + 14);
  IfRcvAddressRodInformation = -1073741808;
  v10 = v8;
  if ( !v9 )
    goto LABEL_16;
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v3 = -1073741808;
      goto LABEL_18;
    }
LABEL_16:
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v6);
    if ( !InterfaceByNetLuid )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( v6.Value != -1LL )
    goto LABEL_16;
  do
  {
    v12 = ndisIfList.Flink - 77;
    if ( ndisIfList.Flink == &ndisIfList )
      v12 = InterfaceByNetLuid;
    InterfaceByNetLuid = v12;
  }
  while ( !v12 || !v12[80].Flink );
LABEL_17:
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[89].Blink, 8u);
  ++LODWORD(InterfaceByNetLuid[81].Blink);
  **((_QWORD **)a1 + 2) = InterfaceByNetLuid[82].Flink;
LABEL_18:
  KeReleaseSpinLock(&ndisIfListLock, v10);
  if ( v3 < 0 )
  {
    IfRcvAddressRodInformation = v3;
    if ( !InterfaceByNetLuid )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( !InterfaceByNetLuid )
  {
    IfRcvAddressRodInformation = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_40;
  }
  v13 = ndisIfReferenceMiniport((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, 4u);
  if ( v13 )
  {
    if ( !v13->EthDB )
    {
      IfRcvAddressRodInformation = 0;
LABEL_37:
      ndisIfDereferenceMiniport((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, (struct _NDIS_MINIPORT_BLOCK *)Flink, 4u);
      goto LABEL_39;
    }
    v15 = *((_DWORD *)a1 + 14);
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        Flink = (__int64)InterfaceByNetLuid[80].Flink;
        goto LABEL_32;
      }
      if ( v15 != 2 )
        goto LABEL_37;
      NextRcvAddress = ndisIfFindNextRcvAddress(InterfaceByNetLuid, v7);
    }
    else
    {
      NextRcvAddress = ndisIfFindRcvAddress(InterfaceByNetLuid, v7);
    }
    Flink = NextRcvAddress;
LABEL_32:
    if ( Flink )
    {
      v17 = *((_QWORD *)a1 + 2);
      IfRcvAddressRodInformation = -1073741811;
      *(_OWORD *)(v17 + 8) = *(_OWORD *)(Flink + 8);
      *(_OWORD *)(v17 + 24) = *(_OWORD *)(Flink + 24);
      if ( *((_QWORD *)a1 + 1) == 3LL && *((_DWORD *)a1 + 8) == 1 )
        IfRcvAddressRodInformation = ndisNsiGetIfRcvAddressRodInformation((char)InterfaceByNetLuid, Flink, (char)a1);
    }
    else
    {
      IfRcvAddressRodInformation = v15 != 0 ? -2147483622 : -1073741772;
    }
    goto LABEL_37;
  }
  IfRcvAddressRodInformation = 0;
LABEL_39:
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, 8u);
  KeReleaseSpinLock(&ndisIfListLock, v18);
LABEL_40:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_67203364a8c4390a74a1000e006604cb_Traceguids,
      (char)a1,
      IfRcvAddressRodInformation);
  KeLeaveCriticalRegion();
  return IfRcvAddressRodInformation;
}
