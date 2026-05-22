/*
 * XREFs of ?IsInteriorBltOnly@CTexturedRectanglePrimitive@DirectComposition@@UEBA_NXZ @ 0x180086140
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInteriorBltOnly@CPrimitive@DirectComposition@@UEBA_NXZ @ 0x1800136A0 (-IsInteriorBltOnly@CPrimitive@DirectComposition@@UEBA_NXZ.c)
 */

bool __fastcall DirectComposition::CTexturedRectanglePrimitive::IsInteriorBltOnly(
        DirectComposition::CTexturedRectanglePrimitive *this)
{
  char v1; // bl

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 29) + 40LL) == 3 )
    return DirectComposition::CPrimitive::IsInteriorBltOnly(this);
  return v1;
}
