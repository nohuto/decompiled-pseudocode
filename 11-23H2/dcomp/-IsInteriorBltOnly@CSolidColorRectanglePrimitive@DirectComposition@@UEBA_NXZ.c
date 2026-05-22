/*
 * XREFs of ?IsInteriorBltOnly@CSolidColorRectanglePrimitive@DirectComposition@@UEBA_NXZ @ 0x1800FB620
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInteriorBltOnly@CPrimitive@DirectComposition@@UEBA_NXZ @ 0x1800136A0 (-IsInteriorBltOnly@CPrimitive@DirectComposition@@UEBA_NXZ.c)
 */

char __fastcall DirectComposition::CSolidColorRectanglePrimitive::IsInteriorBltOnly(
        DirectComposition::CSolidColorRectanglePrimitive *this)
{
  float v1; // xmm0_4
  char v2; // bl

  v1 = *((float *)this + 61);
  v2 = 0;
  if ( (v1 == 1.0 || COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 - 1.0)) & _xmm) <= 9.999999717180685e-10)
    && DirectComposition::CPrimitive::IsInteriorBltOnly(this) )
  {
    return 1;
  }
  return v2;
}
