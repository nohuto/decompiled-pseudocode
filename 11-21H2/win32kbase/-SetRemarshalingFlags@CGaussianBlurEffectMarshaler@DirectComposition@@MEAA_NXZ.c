/*
 * XREFs of ?SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0215BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 20) || *((float *)this + 30) != 3.0 || *((_DWORD *)this + 31) != 2 || *((_DWORD *)this + 32) )
    return 1;
  return result;
}
