/*
 * XREFs of ?AddRef@BamoWindowsMessageDeliveryProxy@@UEAAKXZ @ 0x180011E00
 * Callers:
 *     ?AddRef@BamoWindowsMessageDeliveryProxy@@W7EAAKXZ @ 0x180067BD0 (-AddRef@BamoWindowsMessageDeliveryProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoWindowsMessageDeliveryProxy::AddRef(BamoWindowsMessageDeliveryProxy *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
