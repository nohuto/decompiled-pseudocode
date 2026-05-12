/*
 * XREFs of RaidQueryPciDeviceType @ 0x1C004F2CC
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidQueryPciDeviceType(struct _DEVICE_OBJECT *a1, int *a2)
{
  NTSTATUS result; // eax
  ULONG v4[6]; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  ULONG v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v5 = -1;
  v4[0] = 0;
  result = IoGetDevicePropertyData(a1, &DEVPKEY_PciDevice_DeviceType, 0, 0, 4u, &v5, v4, &v6);
  if ( result >= 0 )
    *a2 = v5;
  return result;
}
