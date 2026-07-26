/*
 * XREFs of ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C010A91C
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00169C8 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C0021AA4 (ndisIfRegisterInterfaceEx.c)
 *     ndisNsiQueuedIfBlockRodChangeNotification @ 0x1C0025FD0 (ndisNsiQueuedIfBlockRodChangeNotification.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003369C (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C00B2928 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B4768 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B4984 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B4DE0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C010C49C (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C4F8 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C01122F8 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C0132638 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C01326C8 (-ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x1C013279C (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C0132C58 (ndisIfUpdateStringIfNeeded.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002214C (-ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

char __fastcall ndisNsiNotifyClientInterfaceChange(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  __int64 v4; // rbp
  char result; // al
  int v10; // edx
  __int64 v11; // xmm1_8
  __int64 v12; // [rsp+30h] [rbp-68h]
  _OWORD v13[4]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 1376);
  result = ndisIsCompartmentEnumerable((const struct _NDIS_IF_COMPARTMENT_BLOCK *)v4);
  if ( result )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x20u,
        (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
        a1,
        v10);
      v4 = *(_QWORD *)(a1 + 1376);
    }
    memset(v13, 0, sizeof(v13));
    *(_QWORD *)&v13[0] = ndisNsiSavedClientNpi;
    *(_QWORD *)&v13[1] = a1 + 1312;
    WORD4(v13[0]) = a4;
    HIDWORD(v13[0]) = a2;
    DWORD2(v13[1]) = 8;
    if ( a2 )
    {
      *((_QWORD *)&v13[2] + 1) = 0LL;
    }
    else
    {
      v11 = *(_QWORD *)(a3 + 16);
      v13[2] = *(_OWORD *)a3;
      *(_QWORD *)&v13[3] = v11;
    }
    DWORD2(v13[3]) = *(_DWORD *)(v4 + 16);
    result = (*(__int64 (__fastcall **)(_OWORD *))(qword_1C00ECB80 + 8))(v13);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = a2;
      return WPP_RECORDER_SF_qL(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               4u,
               0x16u,
               0x21u,
               (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
               a1,
               v12);
    }
  }
  return result;
}
