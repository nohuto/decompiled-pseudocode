/*
 * XREFs of ??1CEndpointVolumeState@@QEAA@XZ @ 0x18003F988
 * Callers:
 *     ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x18003F958 (--1-$unique_ptr@VCEndpointVolumeState@@U-$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CEndpointVolumeState::~CEndpointVolumeState(CEndpointVolumeState *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 24);
  if ( *((_BYTE *)this + 32) )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v1 + 240LL))(*v1, (char *)this + 40);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v1);
}
