/*
 * XREFs of ?SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0227090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C020EA30 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicCompositionMarshaler *this)
{
  if ( *((_BYTE *)this + 68) && *((_BYTE *)this + 88) )
    *((_DWORD *)this + 4) |= 0x40u;
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
