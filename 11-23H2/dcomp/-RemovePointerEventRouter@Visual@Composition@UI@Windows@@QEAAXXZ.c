/*
 * XREFs of ?RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ @ 0x18010B6D8
 * Callers:
 *     ?SetInteraction@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionPointerEventRouter@234@@Z @ 0x18008CA40 (-SetInteraction@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionPointerEventRouter@234@@Z.c)
 *     ?RemovePointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJXZ @ 0x18010B670 (-RemovePointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x1800F7044 (McTemplateU0qqqxx_EventWriteTransfer.c)
 */

void __fastcall Windows::UI::Composition::Visual::RemovePointerEventRouter(Windows::UI::Composition::Visual *this)
{
  CSparseStorage *v2; // rcx

  v2 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 4LL) & 0x2000000) != 0 )
  {
    CSparseStorage::SetReference(
      v2,
      7,
      0LL,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      22,
      0);
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
      McTemplateU0qqqxx_EventWriteTransfer(
        *((unsigned int *)this + 32),
        *(_QWORD *)(*((_QWORD *)this + 3) + 456LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL),
        *((_DWORD *)this + 32),
        0,
        *((_DWORD *)this + 32),
        0);
  }
}
