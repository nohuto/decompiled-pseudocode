/*
 * XREFs of ?Release@CSystemAudioDeviceBase@@W7EAAKXZ @ 0x14002FDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::Release(__int64 a1)
{
  return ATL::CRegObject::Release((ATL::CRegObject *)(a1 - 8));
}
