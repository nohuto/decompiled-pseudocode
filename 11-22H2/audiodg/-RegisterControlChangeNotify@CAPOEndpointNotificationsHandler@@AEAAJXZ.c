/*
 * XREFs of ?RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ @ 0x140072478
 * Callers:
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400719C8 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV-$forward_list@V.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsDelegator@@$$QEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14007141C (--$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandle.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOEndpointNotificationsHandler::RegisterControlChangeNotify(
        CAPOEndpointNotificationsHandler *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, char *); // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v15)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF
  struct CAPOEndpointNotificationsHandler *v16; // [rsp+58h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 136) )
  {
    v15 = 0LL;
    v2 = (__int64 *)*((_QWORD *)this + 5);
    v3 = *v2;
    v15 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v3 + 24))(
           v2,
           &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
           1LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 124LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_15;
    }
    v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
    v8 = **v15;
    v9 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v8(v7, &GUID_65512d3a_e7b3_4e02_9663_19b0542ebe96, (char *)this + 144);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 125LL;
      goto LABEL_14;
    }
    v16 = this;
    v10 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsHandler *>(
            (CAPOEndpointNotificationsDelegator **)this + 23,
            &v16);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v11);
      v5 = v12;
LABEL_15:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v15);
      return v5;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 24LL))(
           *((_QWORD *)this + 18),
           *((_QWORD *)this + 23));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 127LL;
      goto LABEL_14;
    }
    *((_BYTE *)this + 136) = 1;
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v15);
  }
  return 0LL;
}
