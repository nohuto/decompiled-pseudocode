/*
 * XREFs of ?SendSignal@SipcEndpoint@@UEAAXXZ @ 0x180129440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::SendSignal(HANDLE *this)
{
  SetEvent(this[4]);
}
