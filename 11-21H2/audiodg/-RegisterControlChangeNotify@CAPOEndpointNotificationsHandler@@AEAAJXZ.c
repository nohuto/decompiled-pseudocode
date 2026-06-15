/*
 * XREFs of ?RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ @ 0x140069E38
 * Callers:
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400696E8 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsDelegator@@$$QEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140069138 (--$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandle.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEndpointNotificationsHandler::RegisterControlChangeNotify(
        CAPOEndpointNotificationsHandler *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, __int64); // rsi
  _QWORD *v4; // r14
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAPOEndpointNotificationsHandler *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 168) )
  {
    v2 = *((_QWORD *)this + 9);
    v3 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v2 + 24LL);
    v4 = (_QWORD *)((char *)this + 176);
    v5 = *((_QWORD *)this + 22);
    *v4 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = v3(v2, &GUID_5cdf2c82_841e_4546_9722_0cf74078229a, 1LL);
    if ( v6 < 0 )
    {
      v7 = 124LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v13 = this;
    v9 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsHandler *>(
            (CAPOEndpointNotificationsDelegator **)this + 26,
            &v13);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL))(*v4, *((_QWORD *)this + 26));
    if ( v6 < 0 )
    {
      v7 = 126LL;
      goto LABEL_6;
    }
    *((_BYTE *)this + 168) = 1;
  }
  return 0LL;
}
