/*
 * XREFs of ?OnCollectionChanged@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXXZ @ 0x1801A0070
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionStrokeDashArray::OnCollectionChanged(
        Windows::UI::Composition::CompositionStrokeDashArray *this)
{
  __int64 v1; // rcx
  char v2; // al

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    v2 = *(_BYTE *)(v1 + 176);
    if ( (v2 & 1) == 0 )
    {
      *(_BYTE *)(v1 + 176) = v2 | 1;
      DirectComposition::CDevice::AddDirtyRebuildableObject(
        *(DirectComposition::CDevice **)(v1 + 184),
        (struct DirectComposition::CRebuildableObject *)(v1 + 160));
    }
  }
}
