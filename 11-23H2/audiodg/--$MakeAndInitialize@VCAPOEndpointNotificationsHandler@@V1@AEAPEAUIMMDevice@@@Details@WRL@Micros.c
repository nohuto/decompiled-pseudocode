/*
 * XREFs of ??$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x14006A5A0
 * Callers:
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14006CC7C (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CAPOEndpointNotificationsHandler@@QEAA@XZ @ 0x14006B2BC (--0CAPOEndpointNotificationsHandler@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x1400717AC (--4-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsHandler,CAPOEndpointNotificationsHandler,IMMDevice * &>(
        CAPOEndpointNotificationsHandler **a1,
        _QWORD *a2)
{
  void *v4; // rax
  CAPOEndpointNotificationsHandler *v6; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  if ( v4 )
  {
    v6 = CAPOEndpointNotificationsHandler::CAPOEndpointNotificationsHandler((CAPOEndpointNotificationsHandler *)v4);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=((char *)v6 + 40, *a2);
    if ( v6 )
      (*(void (__fastcall **)(CAPOEndpointNotificationsHandler *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(CAPOEndpointNotificationsHandler *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v7);
    return 2147942414LL;
  }
}
