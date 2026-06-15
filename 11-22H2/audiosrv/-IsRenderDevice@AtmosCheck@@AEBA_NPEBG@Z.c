/*
 * XREFs of ?IsRenderDevice@AtmosCheck@@AEBA_NPEBG@Z @ 0x18015C23C
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18015C3E0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall AtmosCheck::IsRenderDevice(AtmosCheck *this, const unsigned __int16 *a2)
{
  bool v2; // bl
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v2 = 1;
  v7 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 28);
  v4 = *v3;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, const unsigned __int16 *, _QWORD))(v4 + 40))(v3, a2, &v7) >= 0 )
  {
    v8 = 0LL;
    if ( (**v7)(v7, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v8) >= 0
      && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v6) >= 0 )
    {
      v2 = v6 != 1;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v7);
  return v2;
}
