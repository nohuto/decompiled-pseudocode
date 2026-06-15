/*
 * XREFs of _lambda_95431caa3866d5f4deaba272c401a3f9_::operator() @ 0x1800734FC
 * Callers:
 *     ?CreateBridgeStreamToTargetStreamGroup@CBridgeStreamInstanceProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x180106270 (-CreateBridgeStreamToTargetStreamGroup@CBridgeStreamInstanceProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_95431caa3866d5f4deaba272c401a3f9_::operator()(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v9[2]; // [rsp+40h] [rbp-518h] BYREF
  _BYTE v10[1264]; // [rsp+50h] [rbp-508h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+558h] [rbp+0h]

  v9[0] = 0LL;
  v2 = **(__int64 ***)a1;
  v3 = *v2;
  v9[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 288))(v2, v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v9[0] )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v4 = CoSetProxyBlanket(*(IUnknown **)(v7 + 16), 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 4092LL;
        goto LABEL_6;
      }
      memset_0(v10, 0, 0x4E8uLL);
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *))(**(_QWORD **)(v7 + 16) + 88LL))(
             *(_QWORD *)(v7 + 16),
             **(_QWORD **)(a1 + 16),
             v9[0],
             v10);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 4095LL;
        goto LABEL_6;
      }
      v4 = SystemAudioStream::move_initialize_from(
             **(SystemAudioStream ***)(a1 + 24),
             (struct SYSTEM_AUDIO_STREAM *)v10);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 4097LL;
        goto LABEL_6;
      }
    }
    v5 = 0;
    goto LABEL_12;
  }
  v6 = 4086LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v9);
  return v5;
}
