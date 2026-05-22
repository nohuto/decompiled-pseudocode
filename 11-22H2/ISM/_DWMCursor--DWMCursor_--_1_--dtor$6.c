/*
 * XREFs of _DWMCursor::DWMCursor_::_1_::dtor$6 @ 0x1800836F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMCursor::DWMCursor_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputSystemServerConnection>::~ComPtr<InputSystemServerConnection>((Microsoft::Bamo::BaseBamoConnection **)(*(_QWORD *)(a2 + 64) + 160LL));
}
