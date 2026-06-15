/*
 * XREFs of ?PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800E2350
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x1800E3F14 (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetValue(
        CAudioSession *this,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      86,
      (unsigned int)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      (_DWORD)this,
      0LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 52)
                                                                                                  + 40LL))(
         *((_QWORD *)this + 52),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::PropertyStoreGetValue", 4626, v6);
  return v7;
}
