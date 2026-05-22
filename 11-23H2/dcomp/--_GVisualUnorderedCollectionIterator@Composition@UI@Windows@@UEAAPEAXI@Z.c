/*
 * XREFs of ??_GVisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801A1C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::VisualUnorderedCollectionIterator *__fastcall Windows::UI::Composition::VisualUnorderedCollectionIterator::`scalar deleting destructor'(
        Windows::UI::Composition::VisualUnorderedCollectionIterator *this,
        __int64 a2)
{
  char v2; // di

  v2 = a2;
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
