/*
 * XREFs of ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18010C170
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@WFA@EAAJPEAUInputInfo@@@Z @ 0x180066F10 (-DeliverInput@MPCFocusTarget@@WFA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCFocusTarget::DeliverInput(MPCFocusTarget *this, struct InputInfo *a2)
{
  return MPCTarget::DeliverInput(this, a2);
}
