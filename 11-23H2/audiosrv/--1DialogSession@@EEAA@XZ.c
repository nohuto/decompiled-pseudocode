/*
 * XREFs of ??1DialogSession@@EEAA@XZ @ 0x18010D008
 * Callers:
 *     ??_GDialogSession@@EEAAPEAXI@Z @ 0x18010D0D0 (--_GDialogSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_c62c83e01cc3e23635c1b77cef32058b_::operator() @ 0x1801266A8 (_lambda_c62c83e01cc3e23635c1b77cef32058b_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DialogSession::~DialogSession(DialogSession *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &DialogSession::`vftable';
  if ( *((_DWORD *)this + 8) == 1 )
  {
    v2 = 0LL;
    (**(void (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
      g_PolicyManager,
      &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
      &v2);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, *((_QWORD *)this + 3), 0LL);
    *((_DWORD *)this + 8) = 0;
    v3 = *((_QWORD *)this + 2);
    lambda_c62c83e01cc3e23635c1b77cef32058b_::operator()(&v3);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v2);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
