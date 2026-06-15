/*
 * XREFs of VADServerUserSessionChanged @ 0x1800420A8
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180042050 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800422B0 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180042468 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ?NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z @ 0x1800E296C (-NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // esi
  unsigned int TsAudioProtocol; // ebp
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 (__fastcall ***v8)(); // rdx
  DWORD v10; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-80h] BYREF
  __int128 v12; // [rsp+30h] [rbp-78h]
  __int64 (__fastcall **v13)(); // [rsp+40h] [rbp-68h] BYREF
  __int128 v14; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall ***v15)(); // [rsp+78h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
  {
    TsAudioProtocol = GetTsAudioProtocol(v2);
    v11 = TsAudioProtocol;
    v10 = v2;
    *(_QWORD *)&v12 = &v10;
    *((_QWORD *)&v12 + 1) = &v11;
    v13 = off_180176638;
    v15 = &v13;
    v14 = v12;
    CEndpointStoreCache::ForEachEndpoint(v6, &v13);
    if ( v15 )
    {
      v8 = &v13;
      LOBYTE(v8) = v15 != &v13;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v15)[4])(v15, v8);
    }
    if ( g_pVolumeProvider )
      (*(void (__fastcall **)(struct IVolumeProvider *, _QWORD, _QWORD))(*(_QWORD *)g_pVolumeProvider + 24LL))(
        g_pVolumeProvider,
        v2,
        TsAudioProtocol);
    if ( a1 != 5 && a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
    {
      if ( a1 > 6 )
      {
        if ( a1 <= 9 )
          return 0LL;
        if ( a1 == 11 )
        {
          AudioSessionManagerProvider::NotifySessionTerminate(
            (AudioSessionManagerProvider *)*(unsigned int *)(a2 + 4),
            v7);
          return 0LL;
        }
      }
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids, a1);
      }
    }
  }
  return 0LL;
}
