/*
 * XREFs of ?AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140071868
 * Callers:
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006C15C (-AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERT.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x1400065E8 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient(
        CAPOEndpointNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 ***v5; // rdi
  __int64 **i; // rax
  __int64 **v7; // r14
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v5 = (__int64 ***)((char *)this + 88);
  for ( i = *v5; i; i = (__int64 **)*i )
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
    v7 = (__int64 **)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
      v7 + 1,
      (__int64)a2);
    *v7 = (__int64 *)*v5;
    *v5 = v7;
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x38,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v8);
  }
}
