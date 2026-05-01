/*
 * XREFs of ?v_SetDesiredPosition_HasViewDataChanged@LegacyUwpWindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180404BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18007AC50 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 */

bool __fastcall LegacyUwpWindowWrapper::v_SetDesiredPosition_HasViewDataChanged(
        LegacyUwpWindowWrapper *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  return !ImmersiveApplicationLayout::AreAppViewDataEqual(a2, a3, a3);
}
