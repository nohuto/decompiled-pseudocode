/*
 * XREFs of ??_G?$_Ref_count_obj2@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@UEAAPEAXI@Z @ 0x1800A53C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<Windows::UI::Composition::Internal::SharedD3DDevicePool>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<Windows::UI::Composition::Internal::SharedD3DDevicePool>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
