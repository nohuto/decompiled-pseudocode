/*
 * XREFs of ?AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140076D48
 * Callers:
 *     ?AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x14006C0DC (-AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x1400065E8 (--0-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcess.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ @ 0x140077088 (-RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceOrientationNotificationsHandler::AddNotificationClient(
        struct _RTL_CRITICAL_SECTION *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  LONG *p_LockCount; // rsi
  __int64 **i; // rax
  __int64 result; // rax
  int v8; // eax
  _QWORD *v9; // rdi
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 1;
  EnterCriticalSection(this + 1);
  p_LockCount = &this[2].LockCount;
  for ( i = *(__int64 ***)&this[2].LockCount; i; i = (__int64 **)*i )
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
    v8 = CDeviceOrientationNotificationsHandler::RegisterDeviceOrientationNotification((CDeviceOrientationNotificationsHandler *)this);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
        (const char *)(unsigned int)v8);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
      v9 + 1,
      (__int64)a2);
    *v9 = *(_QWORD *)p_LockCount;
    *(_QWORD *)p_LockCount = v9;
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
                           v10);
  }
  return result;
}
