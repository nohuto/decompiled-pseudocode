/*
 * XREFs of ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800E4BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800E40B4 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnGroupingParamChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  unsigned int *v12; // rax
  unsigned int *v13; // rbx
  char *v14; // rcx
  GUID *v15; // rax
  GUID v16; // xmm0

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 656);
    v10 = 2 * *(_DWORD *)(v9 - 16) + 2;
    v11 = 2 * *(_DWORD *)(v9 - 16) + 74;
    v12 = (unsigned int *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      *v12 = v11;
      v14 = (char *)(v12 + 18);
      v15 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v15 = a4;
      v16 = *v15;
      v13[6] = v10;
      v13[1] = 4;
      *(GUID *)(v13 + 7) = v16;
      *((struct _GUID *)v13 + 3) = *a3;
      StringCbCopyW(v14, v10, *(char **)(*((_QWORD *)this + 9) + 656LL));
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x17u,
          (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v13,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20));
      operator delete(v13);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnGroupingParamChanged", 683, MediaEvent);
    }
  }
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
