/*
 * XREFs of ?SetBrush@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x180015AF4
 * Callers:
 *     ?SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18001597C (-SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z.c)
 *     ?EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015B98 (-EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBrush@Composition@UI@Windows@@@Z @ 0x18002B180 (--4-$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::SpriteVisual::SetBrush(
        Windows::UI::Composition::SpriteVisual *this,
        struct Windows::UI::Composition::CompositionBrush *a2)
{
  char *v3; // rdi
  unsigned int v4; // eax

  v3 = (char *)this + 336;
  if ( a2 != *((struct Windows::UI::Composition::CompositionBrush **)this + 42) )
  {
    v4 = 0;
    if ( a2 )
      v4 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0x34u,
      v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::operator=(v3, a2);
  }
}
