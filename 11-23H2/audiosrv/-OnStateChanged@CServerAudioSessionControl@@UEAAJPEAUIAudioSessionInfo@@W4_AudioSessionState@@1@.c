/*
 * XREFs of ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180051820
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800E4064 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnStateChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  int MediaEvent; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  char *v11; // rax
  char *v12; // rdi

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 656);
    v9 = 2 * *(_DWORD *)(v8 - 16) + 2;
    v10 = 2 * *(_DWORD *)(v8 - 16) + 74;
    v11 = (char *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = v10;
      *((_DWORD *)v11 + 1) = 8;
      *((_DWORD *)v11 + 6) = v9;
      *((_DWORD *)v11 + 12) = a4;
      StringCbCopyW(v11 + 72, v9, *(char **)(*((_QWORD *)this + 9) + 656LL));
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v12,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v12, *((unsigned int *)this + 20));
      operator delete(v12);
      if ( MediaEvent >= 0 )
        goto LABEL_8;
    }
    else
    {
      MediaEvent = -2147024882;
    }
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnStateChanged", 765, MediaEvent);
  }
LABEL_8:
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
