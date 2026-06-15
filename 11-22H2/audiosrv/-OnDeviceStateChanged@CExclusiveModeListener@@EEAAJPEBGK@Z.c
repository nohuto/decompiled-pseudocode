/*
 * XREFs of ?OnDeviceStateChanged@CExclusiveModeListener@@EEAAJPEBGK@Z @ 0x18013A530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CExclusiveModeListener::OnDeviceStateChanged(
        CExclusiveModeListener *this,
        const unsigned __int16 *a2,
        int a3)
{
  if ( a3 == 1 )
    return CExclusiveModeListener::OnDeviceAdded(this, a2);
  else
    return 0LL;
}
