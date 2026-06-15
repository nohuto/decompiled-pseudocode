/*
 * XREFs of ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140023F20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetAPOs(CSystemAudioDeviceSharedBase *this)
{
  CSystemAudioDeviceSharedBase *v1; // rbx
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v1 = this;
  v3 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v3);
  LODWORD(v1) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 41) + 144LL))(*((_QWORD *)v1 + 41));
  EtwEventActivityIdControl(4LL, &v3);
  return (unsigned int)v1;
}
