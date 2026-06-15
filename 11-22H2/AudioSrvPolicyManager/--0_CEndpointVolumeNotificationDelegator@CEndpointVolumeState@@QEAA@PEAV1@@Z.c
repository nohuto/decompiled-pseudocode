/*
 * XREFs of ??0_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@QEAA@PEAV1@@Z @ 0x180040CF8
 * Callers:
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x180040A60 (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

CEndpointVolumeState::_CEndpointVolumeNotificationDelegator *__fastcall CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::_CEndpointVolumeNotificationDelegator(
        CEndpointVolumeState::_CEndpointVolumeNotificationDelegator *this,
        struct CEndpointVolumeState *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::`vftable';
  return this;
}
