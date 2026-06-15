/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800DF120
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180009E80 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180009F40 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x18000B860 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct CAudioStream *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *((_QWORD *)a2 + 8) = this;
  v8 = FLOAT_1_0;
  v9 = 0LL;
  CAudioSession::GetPolicyVolumeForStream(this, a2, &v8, &v9);
  v4 = CAudioStream::SetPolicyVolume(a2, v8, v9, 1);
  if ( v4 < 0 )
  {
    v5 = 2720LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v4);
    *((_QWORD *)a2 + 8) = 0LL;
    return (unsigned int)v4;
  }
  v4 = CAudioSession::AddStream(this, a2);
  if ( v4 < 0 )
  {
    v5 = 2722LL;
    goto LABEL_3;
  }
  return 0LL;
}
