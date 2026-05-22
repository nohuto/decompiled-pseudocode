/*
 * XREFs of ?SetReceivingVisual@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180010A7C
 * Callers:
 *     ?put_ReceivingVisual@Api@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180010950 (-put_ReceivingVisual@Api@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAUIVi.c)
 *     ?Destroy@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAXXZ @ 0x180010A00 (-Destroy@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiver::SetReceivingVisual(
        Windows::UI::Composition::CompositionProjectedShadowReceiver *this,
        struct Windows::UI::Composition::Visual *a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    2u,
    v2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=((char *)this + 184, a2);
}
