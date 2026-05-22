/*
 * XREFs of ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800B1000
 * Callers:
 *     <none>
 * Callees:
 *     ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x1800AE8F0 (--_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 */

void __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnZeroReferenceCount(
        Microsoft::BamoImpl::ConnectionIndirector *this)
{
  if ( this )
    Microsoft::BamoImpl::ConnectionIndirector::`scalar deleting destructor'(this, 1);
}
