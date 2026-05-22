/*
 * XREFs of ?SetSource@RedirectVisual@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18016F2A4
 * Callers:
 *     ?CreateRedirectVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVRedirectVisual@234@@Z @ 0x18012693C (-CreateRedirectVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVRedire.c)
 *     ?Destroy@RedirectVisual@Composition@UI@Windows@@UEAAXXZ @ 0x18016F280 (-Destroy@RedirectVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_Source@Api@RedirectVisual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x18016F3B0 (-put_Source@Api@RedirectVisual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 */

__int64 __fastcall Windows::UI::Composition::RedirectVisual::SetSource(
        Windows::UI::Composition::RedirectVisual *this,
        struct Windows::UI::Composition::Visual *a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v3; // rdi
  int v4; // eax

  v3 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 328);
  if ( a2 != *((struct Windows::UI::Composition::Visual **)this + 41) )
  {
    v4 = 0;
    if ( a2 )
      v4 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(v3, (volatile signed __int32 *)a2);
  }
  return 0LL;
}
