/*
 * XREFs of ?OnCollectionChanged@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXXZ @ 0x18003BD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::CompositionColorGradientStopCollection::OnCollectionChanged(
        Windows::UI::Composition::CompositionColorGradientStopCollection *this)
{
  __int64 v1; // rcx
  char v2; // al

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    v2 = *(_BYTE *)(v1 + 192);
    if ( (v2 & 1) == 0 )
    {
      *(_BYTE *)(v1 + 192) = v2 | 1;
      DirectComposition::CDevice::AddDirtyRebuildableObject(
        *(DirectComposition::CDevice **)(*(_QWORD *)(v1 + 24) + 456LL),
        (struct DirectComposition::CRebuildableObject *)(v1 + 176));
    }
  }
}
