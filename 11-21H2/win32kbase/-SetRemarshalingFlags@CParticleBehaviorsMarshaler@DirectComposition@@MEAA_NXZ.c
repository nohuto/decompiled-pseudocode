/*
 * XREFs of ?SetRemarshalingFlags@CParticleBehaviorsMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02284D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleBehaviorsMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleBehaviorsMarshaler *this)
{
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((_QWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x8000u;
  return (*((_DWORD *)this + 4) & 0xFFE0) != 0;
}
