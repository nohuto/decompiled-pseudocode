/*
 * XREFs of ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x18005B21C
 * Callers:
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x18005B184 (-InitializeAudioThreadpool@@YAJXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioThreadPool::Initialize(CAudioThreadPool *this)
{
  unsigned int v2; // ebx
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax

  v2 = 0;
  if ( RtlDllShutdownInProgress() )
  {
    v2 = -2147023781;
LABEL_8:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_59645097987a3a1d89299ed4bf796b10_Traceguids, v2);
    }
    return v2;
  }
  ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
  *((_QWORD *)this + 10) = ThreadpoolCleanupGroup;
  if ( ThreadpoolCleanupGroup )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 3) = ThreadpoolCleanupGroup;
    return v2;
  }
  LastError = GetLastError();
  v2 = LastError;
  if ( LastError > 0 )
    v2 = (unsigned __int16)LastError | 0x80070000;
  if ( (v2 & 0x80000000) != 0 )
    goto LABEL_8;
  return v2;
}
