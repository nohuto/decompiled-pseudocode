/*
 * XREFs of ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800F2C10
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@WEA@EAAJPEAUInputInfo@@@Z @ 0x18004FF00 (-DeliverInput@MPCFocusTarget@@WEA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCFocusTarget::DeliverInput(MPCFocusTarget *this, struct InputInfo *a2)
{
  return MPCTarget::DeliverInput(this, a2);
}
