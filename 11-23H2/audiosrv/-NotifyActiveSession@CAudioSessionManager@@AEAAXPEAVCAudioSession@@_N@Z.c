/*
 * XREFs of ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000A5D8
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002219C (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180023DEC (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000A750 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 */

void __fastcall CAudioSessionManager::NotifyActiveSession(CAudioSessionManager *this, struct CAudioSession *a2)
{
  int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  void *v8; // rax
  unsigned int *v9; // rbx
  const unsigned __int16 *v10; // r8

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, 0LL);
  }
  v4 = *((_DWORD *)this + 64);
  v5 = 2 * *(_DWORD *)(*((_QWORD *)a2 + 82) - 16LL) + 2;
  v6 = 2 * v4 + 2;
  v7 = v5 + 2 * v4 + 74;
  v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (unsigned int *)v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = v7;
    *((_DWORD *)v8 + 13) = v5 + 72;
    *((_DWORD *)v8 + 1) = 64;
    *((_DWORD *)v8 + 6) = v5;
    *((_DWORD *)v8 + 12) = v6;
    StringCbCopyW((unsigned __int16 *)v8 + 36, v5, *((const unsigned __int16 **)a2 + 82));
    v10 = (const unsigned __int16 *)((char *)this + 240);
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v10 = *(const unsigned __int16 **)v10;
    StringCbCopyW((unsigned __int16 *)((char *)v9 + v9[13]), v6, v10);
    CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 176));
  }
  operator delete(v9);
}
