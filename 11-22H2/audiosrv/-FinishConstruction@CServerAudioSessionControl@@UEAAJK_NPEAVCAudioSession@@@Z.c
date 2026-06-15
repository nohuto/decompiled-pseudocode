/*
 * XREFs of ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180054B00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800E4308 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x1800E6B84 (WPP_SF_SS.c)
 *     WPP_SF_qqS @ 0x1800E6D9C (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::FinishConstruction(
        CServerAudioSessionControl *this,
        int a2,
        char a3,
        struct CAudioSession *a4)
{
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v12; // rcx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      0,
      0LL);
  }
  *((_DWORD *)this + 20) = a2;
  *((_QWORD *)this + 9) = a4;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 12, a3, (_DWORD)this, (char)a4, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
  v9 = (*(__int64 (__fastcall **)(_QWORD, CServerAudioSessionControl *))(**((_QWORD **)this + 9) + 152LL))(
         *((_QWORD *)this + 9),
         this);
  if ( v9 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, this, a4);
    }
    v12 = *((_QWORD *)this + 9);
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      *((_QWORD *)this + 9) = 0LL;
    }
    if ( v9 < 0 )
      AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::FinishConstruction", 125, v9);
  }
  else
  {
    v10 = *((_QWORD *)this + 9);
    *((_BYTE *)this + 84) = a3;
    LOBYTE(v8) = a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 240LL))(v10, v8);
  }
  return (unsigned int)v9;
}
