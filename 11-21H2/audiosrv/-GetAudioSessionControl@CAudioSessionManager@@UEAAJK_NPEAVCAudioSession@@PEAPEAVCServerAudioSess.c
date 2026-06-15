/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x18000ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_qS @ 0x1800C9BF0 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        unsigned __int8 a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  struct CServerAudioSessionControl *v8; // rbx
  CEndpointStoreCache *v9; // rcx
  char *v10; // rax
  volatile signed __int32 *v11; // rdi
  int v12; // esi
  struct CServerAudioSessionControl *v13; // rax

  v8 = 0LL;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, a2);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (CEndpointStoreCache *)&WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v9 + 2), 14LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, 0LL);
        v9 = WPP_GLOBAL_Control;
      }
      if ( v9 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v9 + 28) & 0x40) != 0
        && *((_BYTE *)v9 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v9 + 2), 11LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, 0LL);
      }
    }
  }
  v10 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (volatile signed __int32 *)v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 4) = 1;
    *(_QWORD *)v10 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
    *((_QWORD *)v10 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
    *((_DWORD *)v10 + 6) = 0;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v10 + 32), 0, 0);
    *((_QWORD *)v11 + 9) = 0LL;
    *((_BYTE *)v11 + 84) = 0;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v12 = -2147024882;
    goto LABEL_36;
  }
  v12 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD, struct CAudioSession *))(*(_QWORD *)v11 + 256LL))(
          v11,
          a2,
          a3,
          a4);
  if ( v12 < 0 )
  {
LABEL_36:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x17Du, v12);
    goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12,
      (unsigned int)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
      (_DWORD)v11,
      0LL);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  _InterlockedIncrement(v11 + 6);
  v8 = (struct CServerAudioSessionControl *)v11;
LABEL_15:
  if ( v11 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
        (unsigned int)v12);
    }
    *a5 = 0LL;
    if ( v12 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 0x1B1u, v12);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16,
        (unsigned int)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
        (_DWORD)v8,
        0LL);
    }
    v13 = v8;
    v8 = 0LL;
    *a5 = v13;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v12;
}
