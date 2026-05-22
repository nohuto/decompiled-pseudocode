/*
 * XREFs of ?SetParentForTransformFromReference@Visual@Composition@UI@Windows@@QEAAJPEAVVisualReference@Internal@234@@Z @ 0x18010BF30
 * Callers:
 *     ?SetParentForTransformFromReference@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisualReference@Internal@345@@Z @ 0x18010BE60 (-SetParentForTransformFromReference@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisualRefer.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetParentForTransformFromReference(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::Internal::VisualReference *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    CSparseStorage::SetReference(
      (Windows::UI::Composition::Visual *)((char *)this + 112),
      11,
      0LL,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_CWeakReferenceBase);
    CSparseStorage::SetReference(
      (Windows::UI::Composition::Visual *)((char *)this + 112),
      12,
      a2,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      38,
      *((_DWORD *)a2 + 32));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x454,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
