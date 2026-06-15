/*
 * XREFs of WPP_SF_dSd @ 0x180032AA0
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dSd(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4, const wchar_t *a5, ...)
{
  const wchar_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  int v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v9 = a4;
  v5 = a5;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a5 )
    v5 = L"NULL";
  return TraceMessage(a1, 0x2Bu, &WPP_4eb0c1de174a3401e682efc3753af671_Traceguids, a2, &v9, 4LL, v5, v7, va, 4LL, 0LL);
}
