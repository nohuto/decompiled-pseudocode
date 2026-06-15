/*
 * XREFs of ?GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x140023FC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetLatency(CSystemAudioDeviceSharedBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = *(_OWORD *)((char *)this - 56);
  v7 = v6;
  EtwEventActivityIdControl(4LL, &v7);
  v2 = *((_QWORD *)this + 3);
  v3 = 0LL;
  v5 = 0LL;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, *((_QWORD *)this + 1), &v5) >= 0 )
    v3 = v5;
  EtwEventActivityIdControl(4LL, &v7);
  return v3;
}
