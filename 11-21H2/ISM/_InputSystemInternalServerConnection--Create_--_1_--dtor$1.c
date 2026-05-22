/*
 * XREFs of _InputSystemInternalServerConnection::Create_::_1_::dtor$1 @ 0x1800552BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSystemInternalServerConnection::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>((__int64 *)(a2 + 128));
}
