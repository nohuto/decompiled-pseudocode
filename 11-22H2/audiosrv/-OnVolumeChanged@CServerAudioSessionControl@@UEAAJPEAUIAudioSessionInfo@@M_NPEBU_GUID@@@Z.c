/*
 * XREFs of ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800E4F50
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800E40B4 (WPP_SF_qd.c)
 *     WPP_SF_Sgd @ 0x1800E6CFC (WPP_SF_Sgd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        float a3,
        char a4,
        struct _GUID *a5)
{
  int v5; // r8d
  int MediaEvent; // edi
  CAudioSessionManager *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  unsigned int *v15; // rbx
  char *v16; // rcx
  GUID *v17; // rax
  GUID v18; // xmm0
  __int64 v20; // [rsp+20h] [rbp-38h]
  double v21; // [rsp+20h] [rbp-38h]

  MediaEvent = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
        0LL);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v9 + 28) & 0x40) != 0
      && *((_BYTE *)v9 + 25) >= 4u )
    {
      v21 = a3;
      WPP_SF_Sgd(*((_QWORD *)v9 + 2), (_DWORD)a2, v5, 0, SLOBYTE(v21), a4);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 656);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = (unsigned int *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      v16 = (char *)(v14 + 18);
      *v14 = v13;
      v17 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a5 )
        v17 = a5;
      v18 = *v17;
      v15[1] = 1;
      *((float *)v15 + 12) = a3;
      *(GUID *)(v15 + 7) = v18;
      v15[6] = v12;
      *((_BYTE *)v15 + 52) = a4;
      StringCbCopyW(v16, v12, *(char **)(*((_QWORD *)this + 9) + 656LL));
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v20) = *((_DWORD *)this + 20);
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v15,
          v20);
      }
      MediaEvent = GenerateMediaEvent(v15, *((unsigned int *)this + 20));
      operator delete(v15);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnVolumeChanged", 1131, MediaEvent);
    }
  }
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
