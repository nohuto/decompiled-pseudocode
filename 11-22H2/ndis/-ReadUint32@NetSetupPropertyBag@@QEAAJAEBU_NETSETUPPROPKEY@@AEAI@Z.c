/*
 * XREFs of ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C011DAC8
 * Callers:
 *     ndisIfReadHiddenFlag @ 0x1C0118F48 (ndisIfReadHiddenFlag.c)
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0119890 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011C210 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C011D598 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C012B950 (ndisWdfOpenConfigurationKey.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01405D0 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C011DC54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C011DD9C (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1C011DDE0 (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint32(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        unsigned int *a3)
{
  unsigned int v4; // ebx
  int v6; // r10d
  unsigned int v8; // edi
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  Handle = 0LL;
  v6 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  if ( v6 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0;
      goto LABEL_4;
    }
LABEL_3:
    v4 = v6;
LABEL_4:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v4;
  }
  if ( v6 )
    goto LABEL_3;
  v9 = 0LL;
  v8 = KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(&Handle, &v9, a3);
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
