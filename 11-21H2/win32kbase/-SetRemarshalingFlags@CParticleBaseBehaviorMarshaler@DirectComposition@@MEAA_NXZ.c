/*
 * XREFs of ?SetRemarshalingFlags@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02284A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleBaseBehaviorMarshaler *this)
{
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_DWORD *)this + 22) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((_DWORD *)this + 4) & 0x60) != 0;
}
