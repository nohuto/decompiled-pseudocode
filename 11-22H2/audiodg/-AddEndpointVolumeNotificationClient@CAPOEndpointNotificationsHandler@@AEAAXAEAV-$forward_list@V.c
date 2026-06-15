/*
 * XREFs of ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400719C8
 * Callers:
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_TYPE@@PEAVCAPOProcessingHostObject@@@Z @ 0x140071A98 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_T.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x1400065E8 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ @ 0x140072478 (-RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient(
        CAPOEndpointNotificationsHandler *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *result; // rax
  int v6; // eax
  _QWORD *v7; // rdi
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( result = (_QWORD *)*a2; result; result = (_QWORD *)*result )
  {
    if ( result[1] == a3 )
      return result;
  }
  try
  {
    v6 = CAPOEndpointNotificationsHandler::RegisterControlChangeNotify(a1);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x91,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v6);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    result = wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
               v7 + 1,
               a3);
    *v7 = *a2;
    *a2 = v7;
  }
  catch ( ... )
  {
    return (_QWORD *)wil::details::in1diag3::Log_CaughtException(
                       retaddr,
                       (void *)0x96,
                       (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
                       v8);
  }
  return result;
}
