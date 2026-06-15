/*
 * XREFs of ?Release@CSystemAudioDeviceBase@@WBA@EAAKXZ @ 0x14002FD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::Release(__int64 a1)
{
  return ATL::CRegObject::Release((ATL::CRegObject *)(a1 - 16));
}
