/*
 * XREFs of ?IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z @ 0x1800E4E0C
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800E25B0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CursorNotificationProcessor::IsTimestampNewest(CursorNotificationProcessor *this, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( a2 > *((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 5) = a2;
    return 1;
  }
  return 0;
}
