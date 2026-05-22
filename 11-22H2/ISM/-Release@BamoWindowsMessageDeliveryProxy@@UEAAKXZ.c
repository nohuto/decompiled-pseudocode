/*
 * XREFs of ?Release@BamoWindowsMessageDeliveryProxy@@UEAAKXZ @ 0x180012770
 * Callers:
 *     ?Release@BamoWindowsMessageDeliveryProxy@@W7EAAKXZ @ 0x18007B770 (-Release@BamoWindowsMessageDeliveryProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoWindowsMessageDeliveryProxy::Release(BamoWindowsMessageDeliveryProxy *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
