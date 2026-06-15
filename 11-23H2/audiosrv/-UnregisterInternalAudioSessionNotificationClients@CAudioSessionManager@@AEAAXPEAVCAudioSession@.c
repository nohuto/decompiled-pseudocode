/*
 * XREFs of ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x18004840C
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002219C (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180023DEC (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     wil::details::lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___::_lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___ @ 0x1800E76F8 (wil--details--lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___--_lambda_call__lambda_3cfe.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800E78D8 (--1CAudioSessionManager@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(
        CAudioSessionManager *this,
        struct CAudioSession *a2)
{
  _QWORD *i; // rbx

  for ( i = (_QWORD *)*((_QWORD *)this + 36); i; i = (_QWORD *)*i )
    (*(void (__fastcall **)(struct CAudioSession *, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, i[1]);
}
