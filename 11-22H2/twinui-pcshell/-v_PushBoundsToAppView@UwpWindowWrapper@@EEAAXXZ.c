/*
 * XREFs of ?v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ @ 0x18009F0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowWrapper::v_PushBoundsToAppView(UwpWindowWrapper *this)
{
  UwpWindowWrapper::PushBoundsToAppView((char *)this - 8, *((unsigned int *)this + 74));
}
