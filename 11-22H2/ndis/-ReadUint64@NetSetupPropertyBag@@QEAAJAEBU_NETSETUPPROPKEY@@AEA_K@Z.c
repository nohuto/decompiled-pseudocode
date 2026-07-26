/*
 * XREFs of ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C011CA60
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011C210 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C011D598 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01405D0 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___ @ 0x1C011C968 (KRegKey--QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C011DC54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C011DD9C (netsetupIsImpliedProperty.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint64(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        unsigned __int64 *a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // r10d
  unsigned int v8; // edi
  _UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  Handle = 0LL;
  v6 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  v7 = v6;
  if ( v6 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0LL;
      goto LABEL_9;
    }
LABEL_6:
    v4 = v7;
LABEL_9:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v4;
  }
  if ( v6 )
    goto LABEL_6;
  v10 = 0LL;
  v8 = KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___(&Handle, &v10, a3);
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
