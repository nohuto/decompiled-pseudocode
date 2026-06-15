/*
 * XREFs of ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x1400728F4
 * Callers:
 *     ?RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJXZ @ 0x1400731F8 (-RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F094 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAA@XZ @ 0x140072AC8 (--0CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140073484 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudio.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsHandler *>(
        CAudioSystemEffectsPropertyChangeNotificationsDelegator **a1,
        struct CAudioSystemEffectsPropertyChangeNotificationsHandler **a2)
{
  void *v4; // rax
  int v5; // edi
  CAudioSystemEffectsPropertyChangeNotificationsDelegator *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CAudioSystemEffectsPropertyChangeNotificationsDelegator *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v8);
    return (unsigned int)v5;
  }
  v6 = CAudioSystemEffectsPropertyChangeNotificationsDelegator::CAudioSystemEffectsPropertyChangeNotificationsDelegator((CAudioSystemEffectsPropertyChangeNotificationsDelegator *)v4);
  v9 = v6;
  v8 = 0LL;
  v5 = CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize(v6, *a2);
  if ( v5 < 0 )
  {
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v9);
    goto LABEL_5;
  }
  if ( v6 )
    (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsDelegator *))(*(_QWORD *)v6 + 8LL))(v6);
  *a1 = v6;
  if ( v6 )
    (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsDelegator *))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
