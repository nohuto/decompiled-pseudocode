/*
 * XREFs of VADServerUserSessionChanged @ 0x180043418
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x1800433C0 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800434F0 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?NotifySessionAudioProtocol@AudioSessionManagerProvider@@YAXKI@Z @ 0x180043678 (-NotifySessionAudioProtocol@AudioSessionManagerProvider@@YAXKI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     ?NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z @ 0x1800EA1E4 (-NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // edi
  unsigned int TsAudioProtocol; // ebp
  unsigned int v6; // r8d
  unsigned int v7; // edx

  v2 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
  {
    TsAudioProtocol = GetTsAudioProtocol(v2);
    AudioSessionManagerProvider::NotifySessionAudioProtocol((AudioSessionManagerProvider *)v2, TsAudioProtocol, v6);
    if ( g_pVolumeProvider )
      (*(void (__fastcall **)(struct IVolumeProvider *, _QWORD, _QWORD))(*(_QWORD *)g_pVolumeProvider + 24LL))(
        g_pVolumeProvider,
        v2,
        TsAudioProtocol);
    if ( a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 && a1 != 5 && a1 != 7 && a1 != 8 && a1 != 9 )
    {
      if ( a1 == 11 )
      {
        AudioSessionManagerProvider::NotifySessionTerminate(
          (AudioSessionManagerProvider *)*(unsigned int *)(a2 + 4),
          v7);
      }
      else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids, a1);
      }
    }
  }
  return 0LL;
}
