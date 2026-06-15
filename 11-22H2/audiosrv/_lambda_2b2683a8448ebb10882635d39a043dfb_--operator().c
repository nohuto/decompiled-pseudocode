/*
 * XREFs of _lambda_2b2683a8448ebb10882635d39a043dfb_::operator() @ 0x180073194
 * Callers:
 *     ?CreateStream@CStreamInstanceProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSystemAudioStream@@@Z @ 0x180048460 (-CreateStream@CStreamInstanceProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCall.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_2b2683a8448ebb10882635d39a043dfb_::operator()(__int64 *a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  _BYTE v6[1264]; // [rsp+40h] [rbp-508h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+548h] [rbp+0h]

  v1 = *a1;
  v3 = CoSetProxyBlanket(*(IUnknown **)(*a1 + 16), 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  if ( v3 < 0 )
  {
    v4 = 3938LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  memset_0(v6, 0, 0x4E8uLL);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *))(**(_QWORD **)(v1 + 16) + 24LL))(
         *(_QWORD *)(v1 + 16),
         *(_QWORD *)a1[1],
         *(_QWORD *)a1[2],
         v6);
  if ( v3 < 0 )
  {
    v4 = 3941LL;
    goto LABEL_3;
  }
  v3 = SystemAudioStream::move_initialize_from(*(SystemAudioStream **)a1[3], (struct SYSTEM_AUDIO_STREAM *)v6);
  if ( v3 < 0 )
  {
    v4 = 3943LL;
    goto LABEL_3;
  }
  return 0LL;
}
