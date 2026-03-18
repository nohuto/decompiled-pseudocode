/*
 * XREFs of ?SetRemarshalingFlags@CCaptureControllerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02367F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( !*((_BYTE *)this + 80) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((float *)this + 18) != 0.0 || *((float *)this + 19) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( !*((_BYTE *)this + 81) )
    *((_DWORD *)this + 4) |= 0x200u;
  return 1;
}
