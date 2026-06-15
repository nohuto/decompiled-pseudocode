/*
 * XREFs of ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800DFB8C
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800E0900 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800C9BF0 (WPP_SF_qS.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800DBA70 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800DF7B8 (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::CreateAudioSessionControl(
        CAudioSessionManager *this,
        struct CAudioSession *a2,
        unsigned int a3,
        char a4,
        struct CServerAudioSessionControl **a5)
{
  CServerAudioSessionControl *v8; // rax
  __int64 v9; // r8
  CServerAudioSessionControl *v10; // rbx
  int v11; // edi
  CAudioSessionManager *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = this;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, 0LL);
  }
  v8 = (CServerAudioSessionControl *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  if ( v8 )
    v10 = CServerAudioSessionControl::CServerAudioSessionControl(v8);
  else
    v10 = 0LL;
  v13 = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 381, v11);
    goto LABEL_11;
  }
  LOBYTE(v9) = a4;
  v11 = (*(__int64 (__fastcall **)(CServerAudioSessionControl *, _QWORD, __int64, struct CAudioSession *))(*(_QWORD *)v10 + 256LL))(
          v10,
          a3,
          v9,
          a2);
  if ( v11 < 0 )
    goto LABEL_10;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      (__int64)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
      v10,
      0LL);
  }
  CServerAudioSessionControl::AddClientReference(v10);
  *a5 = v10;
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return (unsigned int)v11;
}
