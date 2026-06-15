/*
 * XREFs of ??$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsDelegator@@$$QEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14007141C
 * Callers:
 *     ?RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ @ 0x140072478 (-RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F0D4 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F10C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CAPOEndpointNotificationsDelegator@@QEAA@XZ @ 0x1400715F0 (--0CAPOEndpointNotificationsDelegator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x1400727F0 (-RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHa.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsHandler *>(
        CAPOEndpointNotificationsDelegator **a1,
        struct CAPOEndpointNotificationsHandler **a2)
{
  void *v4; // rax
  int v5; // edi
  CAPOEndpointNotificationsDelegator *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CAPOEndpointNotificationsDelegator *v9; // [rsp+40h] [rbp+18h] BYREF

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
  v6 = CAPOEndpointNotificationsDelegator::CAPOEndpointNotificationsDelegator((CAPOEndpointNotificationsDelegator *)v4);
  v9 = v6;
  v8 = 0LL;
  v5 = CAPOEndpointNotificationsDelegator::RuntimeClassInitialize(v6, *a2);
  if ( v5 < 0 )
  {
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v9);
    goto LABEL_5;
  }
  if ( v6 )
    (*(void (__fastcall **)(CAPOEndpointNotificationsDelegator *))(*(_QWORD *)v6 + 8LL))(v6);
  *a1 = v6;
  if ( v6 )
    (*(void (__fastcall **)(CAPOEndpointNotificationsDelegator *))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
