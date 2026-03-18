/*
 * XREFs of ?SetRemarshalingFlags@CSynchronousSuperWetInkMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this)
{
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 20) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_DWORD *)this + 21) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_DWORD *)this + 22) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_DWORD *)this + 26) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_DWORD *)this + 27) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((_DWORD *)this + 28) )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((_BYTE *)this + 116) )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((_DWORD *)this + 30) )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((_DWORD *)this + 31) )
    *((_DWORD *)this + 4) |= 0x10000u;
  return (*((_DWORD *)this + 4) & 0x1FFE0) != 0;
}
