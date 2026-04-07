/*
 * XREFs of ?GetThumbnailVisual@CThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x18004A250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CThumbnailData::GetThumbnailVisual(CThumbnailData *this)
{
  return (struct CVisual *)*((_QWORD *)this + 11);
}
