/*
 * XREFs of ?StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x18000BCF4
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000BDC0 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall StreamRequiresPreStartRegistration(struct IAudioStreamInfo *a1)
{
  bool v2; // di
  int (__fastcall *v3)(struct IAudioStreamInfo *, struct IAudioProcess **); // rbx
  unsigned int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  struct IAudioProcess *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v7 = 0LL;
  v6 = 0;
  v3 = *(int (__fastcall **)(struct IAudioStreamInfo *, struct IAudioProcess **))(*(_QWORD *)a1 + 24LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v7);
  if ( v3(a1, &v7) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a1 + 48LL))(a1);
    if ( (int)GetPBMRelatedAudioStreamCategory(v7, v4, &v6) >= 0 )
      v2 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 80LL))(
             g_PolicyManager,
             v6) != 0;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v7);
  return v2;
}
