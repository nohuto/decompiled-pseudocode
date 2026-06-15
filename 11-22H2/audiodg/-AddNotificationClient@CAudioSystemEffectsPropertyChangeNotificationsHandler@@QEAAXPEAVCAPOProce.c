/*
 * XREFs of ?AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140072CE8
 * Callers:
 *     ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006BFFC (-AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEME.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x1400065E8 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJXZ @ 0x140073248 (-RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // rsi
  __int64 **i; // rax
  int v7; // eax
  _QWORD *v8; // rdi
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = (_QWORD *)((char *)this + 176);
  for ( i = (__int64 **)*((_QWORD *)this + 22); i; i = (__int64 **)*i )
  {
    if ( i[1] == (__int64 *)a2 )
    {
      if ( v4 )
        LeaveCriticalSection(v4);
      return;
    }
  }
  try
  {
    v7 = CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification(this);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x46,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
        (const char *)(unsigned int)v7);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
      v8 + 1,
      (__int64)a2);
    *v8 = *v5;
    *v5 = v8;
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      v9);
  }
}
