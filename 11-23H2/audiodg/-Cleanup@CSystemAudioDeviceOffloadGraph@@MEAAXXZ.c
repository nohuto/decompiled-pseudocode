/*
 * XREFs of ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14005AD30
 * Callers:
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14005AB00 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140058940 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceOffloadGraph::Cleanup(CSystemAudioDeviceOffloadGraph *this)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  EtwEventActivityIdControl(4LL, &v2);
}
