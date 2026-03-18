/*
 * XREFs of ?GetTreeClientBounds@CLegacyRenderTarget@@UEBA_NPEAUMilRectF@@@Z @ 0x180105F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::GetTreeClientBounds(CLegacyRenderTarget *this, struct MilRectF *a2)
{
  bool result; // al

  result = 1;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 18100);
  return result;
}
