/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL2::RefPtr_Windows::UI::Composition::Scenes::SceneComponent_________lambda_824693ca3fcc8c3901698088de6a4959___ @ 0x180140F08
 * Callers:
 *     ?FindFirstComponentOfType@SceneNode@Scenes@Composition@UI@Windows@@QEAAPEAVSceneComponent@2345@W4SceneComponentType@2345@@Z @ 0x1801423F0 (-FindFirstComponentOfType@SceneNode@Scenes@Composition@UI@Windows@@QEAAPEAVSceneComponent@2345@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL2::RefPtr_Windows::UI::Composition::Scenes::SceneComponent_________lambda_824693ca3fcc8c3901698088de6a4959___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4)
{
  _QWORD *i; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 304LL))(*i) == a4 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
