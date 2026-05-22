/*
 * XREFs of ?AddRef@BamoWindowsMessageDeliveryProxy@@UEAAKXZ @ 0x180012740
 * Callers:
 *     ?AddRef@BamoWindowsMessageDeliveryProxy@@W7EAAKXZ @ 0x18007B730 (-AddRef@BamoWindowsMessageDeliveryProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoWindowsMessageDeliveryProxy::AddRef(BamoWindowsMessageDeliveryProxy *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
