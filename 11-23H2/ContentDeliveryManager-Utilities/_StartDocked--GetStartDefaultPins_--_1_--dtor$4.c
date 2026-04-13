/*
 * XREFs of _StartDocked::GetStartDefaultPins_::_1_::dtor$4 @ 0x1800DCDD7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartDocked::GetStartDefaultPins_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::vector_range<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(a2 + 48);
}
