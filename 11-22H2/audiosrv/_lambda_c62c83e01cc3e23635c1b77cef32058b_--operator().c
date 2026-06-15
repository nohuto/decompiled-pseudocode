/*
 * XREFs of _lambda_c62c83e01cc3e23635c1b77cef32058b_::operator() @ 0x1801266F8
 * Callers:
 *     ??1DialogSession@@EEAA@XZ @ 0x18010D058 (--1DialogSession@@EEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c62c83e01cc3e23635c1b77cef32058b_::operator()(__int64 *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(*a1 + 44) )
  {
    v7 = 0LL;
    v2 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
           g_PolicyManager,
           &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
           &v7);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
        (const char *)(unsigned int)v2);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
      return v3;
    }
    v5 = *a1;
    *(_DWORD *)(*(_QWORD *)(*a1 + 48) + 36LL) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 24LL))(v7, *(_QWORD *)(v5 + 48), 1LL);
    *(_BYTE *)(*a1 + 44) = 0;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
  }
  return 0LL;
}
