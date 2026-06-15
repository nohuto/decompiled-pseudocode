/*
 * XREFs of ?AddRef@CSystemAudioDeviceBase@@W7EAAKXZ @ 0x14002FAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::AddRef(__int64 a1)
{
  return CSystemAudioDeviceBase::AddRef((CSystemAudioDeviceBase *)(a1 - 8));
}
