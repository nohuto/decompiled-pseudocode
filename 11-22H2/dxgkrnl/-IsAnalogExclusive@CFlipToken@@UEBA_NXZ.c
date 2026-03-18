/*
 * XREFs of ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C0079FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0077AEC (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 */

char __fastcall CFlipToken::IsAnalogExclusive(CompositionSurfaceObject **this)
{
  return CompositionSurfaceObject::GetAnalogExclusive(this[4]);
}
