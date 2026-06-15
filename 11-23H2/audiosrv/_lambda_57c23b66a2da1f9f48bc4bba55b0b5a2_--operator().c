/*
 * XREFs of _lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator() @ 0x1801265B4
 * Callers:
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x18010D388 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator()(__int64 *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*a1 + 44) )
  {
    v8 = 0LL;
    v2 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
           g_PolicyManager,
           &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
           &v8);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 39LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
        (const char *)(unsigned int)v2);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
      return v3;
    }
    v5 = *a1;
    *(_DWORD *)(*(_QWORD *)(*a1 + 48) + 36LL) = 1;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 24LL))(
           v8,
           *(_QWORD *)(v5 + 48),
           0LL,
           1LL,
           v5);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 44LL;
      goto LABEL_6;
    }
    *(_BYTE *)(*a1 + 44) = 1;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
  }
  return 0LL;
}
