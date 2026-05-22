/*
 * XREFs of ?SetInteraction@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionPointerEventRouter@234@@Z @ 0x18008CA40
 * Callers:
 *     ?SetInteraction@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionInteractionPartner@345@@Z @ 0x18008C9A0 (-SetInteraction@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionInteractionPartner@3.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x1800F7044 (McTemplateU0qqqxx_EventWriteTransfer.c)
 *     ?RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ @ 0x18010B6D8 (-RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetInteraction(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::CompositionPointerEventRouter *a2)
{
  if ( a2 )
  {
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      22,
      *((_DWORD *)a2 + 32));
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
      McTemplateU0qqqxx_EventWriteTransfer(
        *((_DWORD *)a2 + 32),
        0,
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL),
        *((_DWORD *)this + 32),
        *((_DWORD *)a2 + 32),
        *((_DWORD *)this + 32),
        *((_DWORD *)a2 + 32));
  }
  else
  {
    Windows::UI::Composition::Visual::RemovePointerEventRouter(this);
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
      McTemplateU0qqqxx_EventWriteTransfer(
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL),
        *((_DWORD *)this + 32),
        0,
        *((_DWORD *)this + 32),
        0);
  }
}
