/*
 * XREFs of ?RuntimeClassInitialize@VisualCollection@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18008A124
 * Callers:
 *     ??$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualCollection@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18008A02C (--$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WR.c)
 * Callees:
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::RuntimeClassInitialize(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::Visual *a2)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(this + 19, (volatile signed __int32 *)a2);
  return Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
           (Windows::UI::Composition::CompositionObject *)this,
           *((struct Windows::UI::Composition::Compositor **)a2 + 3));
}
