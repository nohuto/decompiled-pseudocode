/*
 * XREFs of ?GetAlphaDescriptor@CFloodEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x18019FED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CFloodEffect::GetAlphaDescriptor(__int64 a1)
{
  return *(float *)(a1 + 172) != 1.0;
}
