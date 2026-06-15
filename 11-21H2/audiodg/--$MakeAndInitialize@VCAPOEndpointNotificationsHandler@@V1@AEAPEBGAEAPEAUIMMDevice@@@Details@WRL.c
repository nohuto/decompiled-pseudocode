/*
 * XREFs of ??$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEBGAEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsHandler@@AEAPEBGAEAPEAUIMMDevice@@@Z @ 0x14006416C
 * Callers:
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140065A98 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@PEAPEAVCAPOEndpointN.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAPOEndpointNotificationsHandler@@QEAA@XZ @ 0x1400649A4 (--0CAPOEndpointNotificationsHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOEndpointNotificationsHandler@@QEAAJPEBGPEAUIMMDevice@@@Z @ 0x14006A1F0 (-RuntimeClassInitialize@CAPOEndpointNotificationsHandler@@QEAAJPEBGPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsHandler,CAPOEndpointNotificationsHandler,unsigned short const * &,IMMDevice * &>(
        CAPOEndpointNotificationsHandler **a1,
        const unsigned __int16 **a2,
        struct IMMDevice **a3)
{
  CAPOEndpointNotificationsHandler *v6; // rax
  int v7; // edi
  CAPOEndpointNotificationsHandler *v8; // rbx

  *a1 = 0LL;
  v6 = (CAPOEndpointNotificationsHandler *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = CAPOEndpointNotificationsHandler::CAPOEndpointNotificationsHandler(v6);
    v7 = CAPOEndpointNotificationsHandler::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(CAPOEndpointNotificationsHandler *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v7 = 0;
    }
    if ( v8 )
      (*(void (__fastcall **)(CAPOEndpointNotificationsHandler *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
