/*
 * XREFs of ??1TelephonyControllerCallInstance@@MEAA@XZ @ 0x180167F68
 * Callers:
 *     ??_GTelephonyControllerCallInstance@@MEAAPEAXI@Z @ 0x180167FE4 (--_GTelephonyControllerCallInstance@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x18016857C (-ResetState@TelephonyControllerCallInstance@@AEAAJXZ.c)
 */

void __fastcall TelephonyControllerCallInstance::~TelephonyControllerCallInstance(
        TelephonyControllerCallInstance *this)
{
  *(_QWORD *)this = &TelephonyControllerCallInstance::`vftable'{for `ITelephonyControllerCallInstance'};
  *((_QWORD *)this + 1) = &TelephonyControllerCallInstance::`vftable'{for `CUnknown'};
  TelephonyControllerCallInstance::ResetState(this);
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(struct IAudioResourceManager *, char *))(*(_QWORD *)g_AudioResourceManager + 40LL))(
      g_AudioResourceManager,
      (char *)this + 24);
    *((_QWORD *)this + 3) = 0LL;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 4);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
