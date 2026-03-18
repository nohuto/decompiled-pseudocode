/*
 * XREFs of ?Release@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x18011B970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::BamoImpl::ConnectionIndirector::Release(__int64 a1)
{
  return Microsoft::BamoImpl::BufferingMessageCallHost::Release((Microsoft::BamoImpl::BufferingMessageCallHost *)(a1 - 24));
}
