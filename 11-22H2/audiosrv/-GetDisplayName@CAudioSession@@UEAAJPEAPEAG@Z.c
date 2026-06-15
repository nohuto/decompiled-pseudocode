/*
 * XREFs of ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180081780
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetDisplayName(CAudioSession *this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  size_t v5; // rbp
  unsigned __int16 *v6; // rax
  int v7; // ebx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      *((_QWORD *)this + 31));
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 7);
  v5 = 2LL * (*(_DWORD *)(*((_QWORD *)this + 31) - 16LL) + 1);
  v6 = (unsigned __int16 *)MIDL_user_allocate(v5);
  *a2 = v6;
  if ( v6 )
  {
    v7 = StringCbCopyW((char *)v6, v5, *((char **)this + 31));
    if ( v7 >= 0 )
      goto LABEL_10;
    operator delete(*a2);
    *a2 = 0LL;
  }
  else
  {
    v7 = -2147024882;
  }
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetDisplayName", 85, v7);
LABEL_10:
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v7;
}
