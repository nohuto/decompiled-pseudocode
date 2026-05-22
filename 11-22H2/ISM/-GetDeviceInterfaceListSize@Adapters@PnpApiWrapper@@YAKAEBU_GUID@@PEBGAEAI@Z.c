/*
 * XREFs of ?GetDeviceInterfaceListSize@Adapters@PnpApiWrapper@@YAKAEBU_GUID@@PEBGAEAI@Z @ 0x180055A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall PnpApiWrapper::Adapters::GetDeviceInterfaceListSize(
        GUID *this,
        WCHAR *a2,
        ULONG *a3,
        unsigned int *a4)
{
  return CM_Get_Device_Interface_List_SizeW(a3, this, a2, 0);
}
