/*
 * XREFs of ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x1800B0EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::AddRef(__int64 a1)
{
  return Microsoft::BamoImpl::ConnectionIndirector::AddRef((Microsoft::BamoImpl::ConnectionIndirector *)(a1 - 16));
}
