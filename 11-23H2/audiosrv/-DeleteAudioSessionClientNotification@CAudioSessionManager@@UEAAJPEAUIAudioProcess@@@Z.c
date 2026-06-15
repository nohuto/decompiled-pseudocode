/*
 * XREFs of ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800E7FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x18000B48C (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800E4064 (WPP_SF_qd.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800E88C0 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 */

__int64 __fastcall CAudioSessionManager::DeleteAudioSessionClientNotification(
        CAudioSessionManager *this,
        struct IAudioProcess *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_c22fced76a16385f24e46043528014d7_Traceguids,
      this,
      v7);
  }
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
    &v8,
    (__int64)a2);
  v4 = CLockedList<CAudioSessionNotificationProcess,1,0>::RemoveInterface((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::DeleteAudioSessionClientNotification", 530, v4);
  return v5;
}
