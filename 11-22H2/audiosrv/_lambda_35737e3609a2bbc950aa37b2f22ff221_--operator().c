/*
 * XREFs of _lambda_35737e3609a2bbc950aa37b2f22ff221_::operator() @ 0x18007335C
 * Callers:
 *     ?CreateBridgeSourceStreamForMicInjection@CBridgeStreamInstanceProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x180073730 (-CreateBridgeSourceStreamForMicInjection@CBridgeStreamInstanceProxy@@UEAAJPEAUSYSTEM_AUDIO_STREA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ?reset@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180045820 (-reset@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_35737e3609a2bbc950aa37b2f22ff221_::operator()(__int64 *a1)
{
  __int64 v2; // rbp
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10[2]; // [rsp+40h] [rbp-518h] BYREF
  _BYTE v11[1264]; // [rsp+50h] [rbp-508h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+558h] [rbp+0h]

  v2 = *a1;
  v3 = CoSetProxyBlanket(*(IUnknown **)(*a1 + 16), 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10[0] = 0LL;
    v5 = *(_QWORD *)a1[1];
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL);
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::reset(v10);
    v7 = v6(v5, v10);
    v4 = v7;
    if ( v7 >= 0 )
    {
      memset_0(v11, 0, 0x4E8uLL);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *))(**(_QWORD **)(v2 + 16) + 96LL))(
             *(_QWORD *)(v2 + 16),
             *(_QWORD *)a1[2],
             v10[0],
             v11);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v7 = SystemAudioStream::move_initialize_from(*(SystemAudioStream **)a1[3], (struct SYSTEM_AUDIO_STREAM *)v11);
        v4 = v7;
        if ( v7 >= 0 )
        {
          v4 = 0;
          goto LABEL_11;
        }
        v8 = 4064LL;
      }
      else
      {
        v8 = 4062LL;
      }
    }
    else
    {
      v8 = 4059LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
LABEL_11:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v10);
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD8,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
