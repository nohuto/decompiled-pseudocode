/*
 * XREFs of _LoadImageWithWIC_::_1_::dtor$1 @ 0x1802C024A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LoadImageWithWIC_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(a2 + 128);
}
