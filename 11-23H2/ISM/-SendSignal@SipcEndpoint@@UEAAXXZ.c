/*
 * XREFs of ?SendSignal@SipcEndpoint@@UEAAXXZ @ 0x18011B3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::SendSignal(HANDLE *this)
{
  SetEvent(this[4]);
}
