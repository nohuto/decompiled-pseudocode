/*
 * XREFs of ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x1800D5EFC
 * Callers:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18000B87C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x18001F4C0 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18001F6E0 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     _lambda_ab1ef9b9f3a585693d4f94a0c120cf43_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800D4DF8 (_lambda_ab1ef9b9f3a585693d4f94a0c120cf43_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800DA480 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800DE80C (--$construct@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAud.c)
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800DF700 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800DFCE0 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ??$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@AEAPEAUIAudioProcess@@$$QEAPEAVCAppSubmixClientContext@@@Z @ 0x180106D10 (--$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@$0A@@std@@Y.c)
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x180107330 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
