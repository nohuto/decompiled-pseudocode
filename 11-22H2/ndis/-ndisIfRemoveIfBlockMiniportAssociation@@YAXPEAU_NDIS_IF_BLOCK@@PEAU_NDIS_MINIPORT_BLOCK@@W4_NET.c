/*
 * XREFs of ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x1C013E37C
 * Callers:
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C8F4 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ndisIfDetachMiniportBlock @ 0x1C00B79F0 (ndisIfDetachMiniportBlock.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C0111B44 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum _NET_IF_ADMIN_STATUS a3)
{
  char v5; // di
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_IF_BLOCK *v7; // rcx
  _NDIS_IF_BLOCK *v8; // rax
  _NDIS_IF_BLOCK *v9; // rcx
  int v10; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+44h] [rbp-1Ch]
  void *p_ifOperStatus; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+54h] [rbp-Ch]

  v5 = (char)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      a2);
  a2->IfBlock->ifOperStatusFlags = 0;
  a2->IfBlock->ifAdminStatus = a3;
  IfBlock = a2->IfBlock;
  if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
  {
    v11 = 0;
    IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
    v7 = a2->IfBlock;
    v10 = 1;
    v13 = 8;
    v14 = 536;
    p_ifOperStatus = &v7->ifOperStatus;
    ndisNsiNotifyClientInterfaceChange((__int64)v7, 0, (__int64)&v10, 1);
  }
  v8 = a2->IfBlock;
  if ( v8->MediaConnectState )
  {
    v8->MediaConnectState = MediaConnectStateUnknown;
    v9 = a2->IfBlock;
    v11 = 0;
    v10 = 1;
    v13 = 4;
    v14 = 644;
    p_ifOperStatus = &v9->MediaConnectState;
    ndisNsiNotifyClientInterfaceChange((__int64)v9, 0, (__int64)&v10, 1);
  }
  ndisIfDetachMiniportBlock(a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      v5,
      a2);
}
