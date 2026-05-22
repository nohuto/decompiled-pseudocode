/*
 * XREFs of ?DeliverInput@DWMFocusedInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18019C5A0
 * Callers:
 *     ?DeliverInput@DWMFocusedInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x1800532E0 (-DeliverInput@DWMFocusedInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMFocusedInputTarget@@WBA@EAAJPEAUInputInfo@@@Z @ 0x180053300 (-DeliverInput@DWMFocusedInputTarget@@WBA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::DeliverInput(DWMFocusedInputTarget *this, struct InputInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 7) + 24LL))(
           *((_QWORD *)this + 7),
           a2);
}
