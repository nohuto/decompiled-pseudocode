/*
 * XREFs of wil::details::lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___::_lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___ @ 0x14005AAD8
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B570 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x1400A1008 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___::_lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___(
        __int64 a1,
        void *a2,
        unsigned __int8 a3)
{
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  unsigned __int64 v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    AEWMILOG_PERFORMANCE(a1, a2, a3, 0xAu, v7, v8);
    PublishDeviceGraphWnfState(v4, v3, v5, v6);
  }
}
