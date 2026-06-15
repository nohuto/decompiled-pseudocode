/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800D67A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015150 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x1800D8494 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x1800E56F8 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct _RTL_CRITICAL_SECTION *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  a2[1].LockSemaphore = this;
  v8 = FLOAT_1_0;
  v9 = 0LL;
  CAudioSession::GetPolicyVolumeForStream(this, (struct CAudioStream *)a2, &v8, &v9);
  v4 = CAudioStream::SetPolicyVolume((CAudioStream *)a2, v8, v9, 1);
  if ( v4 < 0 )
  {
    v5 = 2722LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v4);
    a2[1].LockSemaphore = 0LL;
    return (unsigned int)v4;
  }
  v4 = CAudioSession::AddStream(this, a2);
  if ( v4 < 0 )
  {
    v5 = 2724LL;
    goto LABEL_3;
  }
  return 0LL;
}
