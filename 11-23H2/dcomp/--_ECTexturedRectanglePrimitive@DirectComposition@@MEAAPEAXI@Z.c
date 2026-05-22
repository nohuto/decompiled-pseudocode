/*
 * XREFs of ??_ECTexturedRectanglePrimitive@DirectComposition@@MEAAPEAXI@Z @ 0x18000BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ @ 0x180030F54 (--1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CTexturedRectanglePrimitive *__fastcall DirectComposition::CTexturedRectanglePrimitive::`vector deleting destructor'(
        DirectComposition::CTexturedRectanglePrimitive *this,
        char a2)
{
  DirectComposition::CTexturedRectanglePrimitive::~CTexturedRectanglePrimitive(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x128uLL);
    else
      operator delete(this);
  }
  return this;
}
