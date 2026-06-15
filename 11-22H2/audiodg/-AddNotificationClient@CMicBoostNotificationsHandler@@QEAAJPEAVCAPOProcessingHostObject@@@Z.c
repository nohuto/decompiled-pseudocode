/*
 * XREFs of ?AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140078038
 * Callers:
 *     ?AddMicBoostNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14002D628 (-AddMicBoostNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICAT.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x1400065E8 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterMicBoostNotification@CMicBoostNotificationsHandler@@AEAAJXZ @ 0x1400784A8 (-RegisterMicBoostNotification@CMicBoostNotificationsHandler@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMicBoostNotificationsHandler::AddNotificationClient(
        CMicBoostNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // rsi
  __int64 **i; // rax
  __int64 result; // rax
  int v8; // eax
  _QWORD *v9; // rdi
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v5 = (_QWORD *)((char *)this + 120);
  for ( i = (__int64 **)*((_QWORD *)this + 15); i; i = (__int64 **)*i )
  {
    if ( i[1] == (__int64 *)a2 )
    {
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
  }
  try
  {
    v8 = CMicBoostNotificationsHandler::RegisterMicBoostNotification(this);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x74,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        (const char *)(unsigned int)v8);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
      v9 + 1,
      (__int64)a2);
    *v9 = *v5;
    *v5 = v9;
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7A,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
                           v10);
  }
  return result;
}
