/*
 * XREFs of ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x14006A39C
 * Callers:
 *     ?RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJXZ @ 0x14006AC48 (-RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAA@XZ @ 0x14006A568 (--0CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x14006AEA8 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudio.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsHandler *>(
        CAudioSystemEffectsPropertyChangeNotificationsDelegator **a1,
        struct CAudioSystemEffectsPropertyChangeNotificationsHandler **a2)
{
  CAudioSystemEffectsPropertyChangeNotificationsDelegator *v4; // rax
  int v5; // edi
  CAudioSystemEffectsPropertyChangeNotificationsDelegator *v6; // rbx

  *a1 = 0LL;
  v4 = (CAudioSystemEffectsPropertyChangeNotificationsDelegator *)operator new(
                                                                    0x18uLL,
                                                                    (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CAudioSystemEffectsPropertyChangeNotificationsDelegator::CAudioSystemEffectsPropertyChangeNotificationsDelegator(v4);
    v5 = CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsDelegator *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsDelegator *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
