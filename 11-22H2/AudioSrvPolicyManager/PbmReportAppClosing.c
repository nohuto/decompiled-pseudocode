/*
 * XREFs of PbmReportAppClosing @ 0x180031AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180005820 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18003096C (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 */

__int64 __fastcall PbmReportAppClosing(void *a1, const unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  CPlaybackManager *v6; // rcx
  unsigned int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  result = 2147549183LL;
  if ( g_PlaybackManager )
  {
    result = RpcClientProcessSessionId(a1, v7, &v8);
    if ( (_DWORD)result )
    {
      if ( (int)result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return CPlaybackManager::OnAppClosed(v6, a2, a3, v8);
    }
  }
  return result;
}
