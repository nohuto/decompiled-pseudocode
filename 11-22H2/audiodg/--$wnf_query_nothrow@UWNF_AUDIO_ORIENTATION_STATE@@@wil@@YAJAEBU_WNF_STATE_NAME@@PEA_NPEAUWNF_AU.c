/*
 * XREFs of ??$wnf_query_nothrow@UWNF_AUDIO_ORIENTATION_STATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_AUDIO_ORIENTATION_STATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x14006B118
 * Callers:
 *     ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x14006D70C (-QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z.c)
 * Callees:
 *     ??$ZeroStateDataIfSizeInconsistent@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAXPEAUWNF_AUDIO_ORIENTATION_STATE@@KK@Z @ 0x14002D4B4 (--$ZeroStateDataIfSizeInconsistent@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAXPEAUWNF_AUDIO_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<WNF_AUDIO_ORIENTATION_STATE>(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  char v6; // di
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  int v12; // [rsp+6Ch] [rbp+24h]

  v12 = HIDWORD(a4);
  v10 = a1;
  v11 = 4;
  v6 = 0;
  *a2 = 0;
  v7 = NtQueryWnfStateData(&WNF_AUDC_ORIENTATION, 0LL, 0LL, &v10, a3, &v11) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<WNF_AUDIO_ORIENTATION_STATE>(a3, v11, v10);
    if ( (_DWORD)v10 )
    {
      if ( v11 == 4 )
        v6 = 1;
    }
    *a2 = v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v7);
    return v7;
  }
}
