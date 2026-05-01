/*
 * XREFs of ?PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801BD900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowWrapper::PushBoundsDuringActivationRequested(__int64 a1, int a2)
{
  return UwpWindowWrapper::PushBoundsToAppView(a1 - 24, a2);
}
