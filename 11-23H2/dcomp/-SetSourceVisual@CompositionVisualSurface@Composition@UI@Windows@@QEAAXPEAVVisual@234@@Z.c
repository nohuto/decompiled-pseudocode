/*
 * XREFs of ?SetSourceVisual@CompositionVisualSurface@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180063298
 * Callers:
 *     ?put_SourceVisual@Api@CompositionVisualSurface@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x1800629B0 (-put_SourceVisual@Api@CompositionVisualSurface@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 */

void __fastcall Windows::UI::Composition::CompositionVisualSurface::SetSourceVisual(
        Windows::UI::Composition::CompositionVisualSurface *this,
        struct Windows::UI::Composition::Visual *a2)
{
  char *v3; // rdi
  int v4; // eax

  v3 = (char *)this + 176;
  if ( a2 != *((struct Windows::UI::Composition::Visual **)this + 22) )
  {
    v4 = 0;
    if ( a2 )
      v4 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(v3, a2);
  }
}
