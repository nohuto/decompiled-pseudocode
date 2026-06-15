/*
 * XREFs of ??$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsDelegator@@$$QEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140069138
 * Callers:
 *     ?RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ @ 0x140069E38 (-RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAPOEndpointNotificationsDelegator@@QEAA@XZ @ 0x140069304 (--0CAPOEndpointNotificationsDelegator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14006A150 (-RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHa.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsHandler *>(
        CAPOEndpointNotificationsDelegator **a1,
        struct CAPOEndpointNotificationsHandler **a2)
{
  CAPOEndpointNotificationsDelegator *v4; // rax
  int v5; // edi
  CAPOEndpointNotificationsDelegator *v6; // rbx

  *a1 = 0LL;
  v4 = (CAPOEndpointNotificationsDelegator *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CAPOEndpointNotificationsDelegator::CAPOEndpointNotificationsDelegator(v4);
    v5 = CAPOEndpointNotificationsDelegator::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(CAPOEndpointNotificationsDelegator *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      (*(void (__fastcall **)(CAPOEndpointNotificationsDelegator *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
