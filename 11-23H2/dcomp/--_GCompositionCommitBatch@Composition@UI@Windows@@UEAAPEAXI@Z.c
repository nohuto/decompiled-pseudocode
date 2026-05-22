/*
 * XREFs of ??_GCompositionCommitBatch@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180011E20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionBatch@Composition@UI@Windows@@UEAA@XZ @ 0x180011E64 (--1CompositionBatch@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionCommitBatch *__fastcall Windows::UI::Composition::CompositionCommitBatch::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionCommitBatch *this,
        char a2)
{
  Windows::UI::Composition::CompositionBatch::~CompositionBatch(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xD8uLL);
    else
      operator delete(this);
  }
  return this;
}
