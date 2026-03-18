/*
 * XREFs of HUBDSM_DeConfiguringDeviceOnClientRequest @ 0x1C001F4E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C002B7B4 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_DeConfiguringDeviceOnClientRequest(__int64 a1)
{
  HUBDTX_SetDeviceNullConfigurationUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
