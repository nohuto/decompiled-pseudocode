/*
 * XREFs of ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB2C
 * Callers:
 *     ndisIfReadHiddenFlag @ 0x1C0118F08 (ndisIfReadHiddenFlag.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011C1D0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C011D264 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C011D558 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C011D9E8 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ndisIsBindPathEnabled @ 0x1C013CA98 (ndisIsBindPathEnabled.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013CF44 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013D2C0 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReplaceBindTokens @ 0x1C013D450 (ndisReplaceBindTokens.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01405B0 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01128CC (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     GetPkeyName @ 0x1C011DC8C (GetPkeyName.c)
 *     netsetupIsImpliedProperty @ 0x1C011DD5C (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C011DFE4 (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadBoolean(void ***this, const struct _NETSETUPPROPKEY *a2, bool *a3)
{
  unsigned int v5; // edi
  unsigned int v7; // r10d
  unsigned int v9; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+28h] [rbp-A0h] BYREF
  wchar_t v12[48]; // [rsp+40h] [rbp-88h] BYREF

  v5 = 0;
  Handle = 0LL;
  GetPkeyName(a2, v12);
  v7 = KRegKey::Open((KRegKey *)&Handle, 1u, v12, **this);
  if ( v7 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0;
LABEL_4:
      KRegKey::~KRegKey((KRegKey *)&Handle);
      return v5;
    }
LABEL_9:
    v5 = v7;
    goto LABEL_4;
  }
  if ( v7 )
    goto LABEL_9;
  v11 = 0LL;
  v9 = KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(&Handle, &v11, a3);
  if ( Handle )
    ZwClose(Handle);
  return v9;
}
