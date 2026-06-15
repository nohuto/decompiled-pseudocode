/*
 * XREFs of _lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator() @ 0x18010FB78
 * Callers:
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x18010F6B8 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800ED518 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)a1 + 44LL) )
  {
    v8 = 0LL;
    v2 = wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(a1, (__int64)&v8);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 39LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
        (const char *)(unsigned int)v2);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
      return v3;
    }
    v5 = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 36LL) = 1;
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
    *(_BYTE *)(*(_QWORD *)a1 + 44LL) = 1;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  }
  return 0LL;
}
