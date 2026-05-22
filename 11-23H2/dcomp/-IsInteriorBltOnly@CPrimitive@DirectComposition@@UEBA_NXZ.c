/*
 * XREFs of ?IsInteriorBltOnly@CPrimitive@DirectComposition@@UEBA_NXZ @ 0x1800136A0
 * Callers:
 *     ?IsInteriorBltOnly@CTexturedRectanglePrimitive@DirectComposition@@UEBA_NXZ @ 0x180086140 (-IsInteriorBltOnly@CTexturedRectanglePrimitive@DirectComposition@@UEBA_NXZ.c)
 *     ?IsInteriorBltOnly@CVirtualSurfacePrimitive@DirectComposition@@UEBA_NXZ @ 0x180089E50 (-IsInteriorBltOnly@CVirtualSurfacePrimitive@DirectComposition@@UEBA_NXZ.c)
 *     ?IsInteriorBltOnly@CSolidColorRectanglePrimitive@DirectComposition@@UEBA_NXZ @ 0x1800FB620 (-IsInteriorBltOnly@CSolidColorRectanglePrimitive@DirectComposition@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CPrimitive::IsInteriorBltOnly(DirectComposition::CPrimitive *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 13) )
    return COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - 1.0)) & _xmm) <= 9.999999717180685e-10;
  return result;
}
