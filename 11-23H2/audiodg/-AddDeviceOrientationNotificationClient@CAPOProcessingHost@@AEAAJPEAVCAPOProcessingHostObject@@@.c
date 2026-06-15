/*
 * XREFs of ?AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x14006C08C
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___ @ 0x14006AB60 (std--call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___.c)
 *     ?AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140076CF8 (-AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject.c)
 */

__int64 __fastcall CAPOProcessingHost::AddDeviceOrientationNotificationClient(
        union _RTL_RUN_ONCE *this,
        struct CAPOProcessingHostObject *a2)
{
  CDeviceOrientationNotificationsHandler *Ptr; // rcx
  __int64 result; // rax
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  union _RTL_RUN_ONCE *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___(this + 38, (__int64)&v10);
  Ptr = (CDeviceOrientationNotificationsHandler *)this[37].Ptr;
  if ( Ptr )
  {
    try
    {
      v6 = CDeviceOrientationNotificationsHandler::AddNotificationClient(Ptr, a2);
      v8 = v6;
      if ( v6 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE1,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v6);
        result = v8;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xE4,
                             (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                             v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
