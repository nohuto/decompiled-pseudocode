/*
 * XREFs of ?AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400695F8
 * Callers:
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400652E8 (-AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERT.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x14001CB80 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14001CBBC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient(
        struct _RTL_CRITICAL_SECTION *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  PRTL_CRITICAL_SECTION_DEBUG i; // rax
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  struct _RTL_CRITICAL_SECTION_DEBUG *v7; // rbx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = this + 2;
  EnterCriticalSection(this + 2);
  v10 = v4;
  for ( i = this[3].DebugInfo; i; i = *(PRTL_CRITICAL_SECTION_DEBUG *)&i->Type )
  {
    if ( (struct CAPOProcessingHostObject *)i->CriticalSection == a2 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v10);
      return;
    }
  }
  v6 = this + 3;
  try
  {
    v7 = (struct _RTL_CRITICAL_SECTION_DEBUG *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
      &v7->CriticalSection,
      (__int64)a2);
    *(_QWORD *)&v7->Type = v6->DebugInfo;
    v6->DebugInfo = v7;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x39,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v8);
  }
}
