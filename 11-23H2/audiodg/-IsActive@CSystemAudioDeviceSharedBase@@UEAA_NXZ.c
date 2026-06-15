/*
 * XREFs of ?IsActive@CSystemAudioDeviceSharedBase@@UEAA_NXZ @ 0x1400597F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSystemAudioDeviceSharedBase::IsActive(CSystemAudioDeviceSharedBase *this)
{
  return (unsigned int)(*((_DWORD *)this + 8) - 2) <= 1;
}
