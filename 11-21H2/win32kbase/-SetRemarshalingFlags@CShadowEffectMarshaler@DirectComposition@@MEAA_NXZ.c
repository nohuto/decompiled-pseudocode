/*
 * XREFs of ?SetRemarshalingFlags@CShadowEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CShadowEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CShadowEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 20)
    || *((float *)this + 30) != 3.0
    || *((_DWORD *)this + 35)
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0
    || *((float *)this + 34) != 1.0 )
  {
    return 1;
  }
  return result;
}
