/*
 * XREFs of ?v_SetDesiredPosition_HasViewDataChanged@WindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801744F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18007AC50 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 */

bool __fastcall WindowWrapper::v_SetDesiredPosition_HasViewDataChanged(
        WindowWrapper *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  return !ImmersiveApplicationLayout::AreAppViewDataEqual(a2, a3, a3);
}
