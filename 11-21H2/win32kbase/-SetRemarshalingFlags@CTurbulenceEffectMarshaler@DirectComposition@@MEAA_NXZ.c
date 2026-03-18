/*
 * XREFs of ?SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02174B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 20)
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0099999998
    || *((float *)this + 33) != 0.0099999998
    || *((float *)this + 34) != 0.0
    || *((float *)this + 35) != 0.0
    || *((_DWORD *)this + 36) != 1
    || *((_DWORD *)this + 37)
    || *((_DWORD *)this + 38)
    || *((_DWORD *)this + 39) )
  {
    return 1;
  }
  return result;
}
