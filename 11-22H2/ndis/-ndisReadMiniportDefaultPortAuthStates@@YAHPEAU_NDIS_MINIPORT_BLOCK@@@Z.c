/*
 * XREFs of ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E358
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenConfigurationEx @ 0x1C001CED0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001D100 (NdisCloseConfiguration.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002DFD0 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E108 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisReadMiniportDefaultPortAuthStates(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MiniportMediaSpecificPortAuthStates; // edi
  unsigned int MiniportSpecificPortAuthStates; // eax
  PVOID v4; // rcx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  PVOID ConfigurationHandle; // [rsp+70h] [rbp+8h] BYREF

  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x40u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      a1);
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  MiniportMediaSpecificPortAuthStates = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( MiniportMediaSpecificPortAuthStates )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
LABEL_7:
      a1->DefaultPortSendAuthorizationState = ndisGlobalPortSendAuthorizationState;
      a1->DefaultPortRcvAuthorizationState = ndisGlobalPortReceiveAuthorizationState;
      a1->DefaultPortSendControlState = ndisGlobalPortSendControlState;
      a1->DefaultPortRcvControlState = ndisGlobalPortReceiveControlState;
      a1->DefaultSendAuthorizationState = ndisGlobalPortSendAuthorizationState;
      a1->DefaultRcvAuthorizationState = ndisGlobalPortReceiveAuthorizationState;
      a1->DefaultSendControlState = ndisGlobalPortSendControlState;
      a1->DefaultRcvControlState = ndisGlobalPortReceiveControlState;
      goto LABEL_8;
    }
LABEL_6:
    MiniportMediaSpecificPortAuthStates = ndisReadMiniportMediaSpecificPortAuthStates(a1);
    if ( !MiniportMediaSpecificPortAuthStates )
      goto LABEL_8;
    goto LABEL_7;
  }
  MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates(a1, ConfigurationHandle);
  v4 = ConfigurationHandle;
  MiniportMediaSpecificPortAuthStates = MiniportSpecificPortAuthStates;
  if ( MiniportSpecificPortAuthStates )
  {
    NdisCloseConfiguration(ConfigurationHandle);
    goto LABEL_6;
  }
  a1->FilterPnPFlags |= 8u;
  NdisCloseConfiguration(v4);
LABEL_8:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x41u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      MiniportMediaSpecificPortAuthStates);
  return MiniportMediaSpecificPortAuthStates;
}
