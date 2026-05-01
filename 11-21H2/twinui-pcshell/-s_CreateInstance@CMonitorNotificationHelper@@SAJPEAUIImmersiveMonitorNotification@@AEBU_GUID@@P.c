/*
 * XREFs of ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18015BE84
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1800B5E00 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DEF30 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z @ 0x18015BF24 (--0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorNotificationHelper::s_CreateInstance(
        struct IImmersiveMonitorNotification *a1,
        const struct _GUID *a2,
        void **a3)
{
  CMonitorNotificationHelper *v5; // rax
  CMonitorNotificationHelper *v6; // rax
  CMonitorNotificationHelper *v7; // rbx
  unsigned int v8; // edi

  *a3 = 0LL;
  v5 = (CMonitorNotificationHelper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CMonitorNotificationHelper::CMonitorNotificationHelper(v5, a1);
    v7 = v6;
    if ( v6 )
    {
      v8 = (**(__int64 (__fastcall ***)(CMonitorNotificationHelper *, GUID *, void **))v6)(
             v6,
             &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270,
             a3);
      goto LABEL_4;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = -2147024882;
LABEL_4:
  if ( v7 )
    (*(void (__fastcall **)(CMonitorNotificationHelper *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
