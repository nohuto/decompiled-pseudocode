/*
 * XREFs of ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800D94F0
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D6EF0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056D74 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::NotifyClientOfDisconnection(
        const wchar_t **this,
        enum AudioSessionDisconnectReason a2)
{
  const wchar_t *v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  char *v7; // rax
  char *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int MediaEvent; // ebx

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x29u,
      (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      this[82]);
  }
  v4 = this[82];
  v5 = 2 * *((_DWORD *)v4 - 4) + 2;
  v6 = 2 * *((_DWORD *)v4 - 4) + 74;
  v7 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    MediaEvent = -2147024882;
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CAudioSession::NotifyClientOfDisconnection", 2451, MediaEvent);
    return (unsigned int)MediaEvent;
  }
  *(_DWORD *)v7 = v6;
  *((_DWORD *)v7 + 6) = v5;
  *((_DWORD *)v7 + 1) = 32;
  *((_DWORD *)v7 + 12) = a2;
  StringCbCopyW(v7 + 72, v5, (char *)this[82]);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, v8);
  }
  MediaEvent = GenerateMediaEvent(v8, 0LL, v9, v10);
  operator delete(v8);
  if ( MediaEvent < 0 )
    goto LABEL_13;
  return (unsigned int)MediaEvent;
}
