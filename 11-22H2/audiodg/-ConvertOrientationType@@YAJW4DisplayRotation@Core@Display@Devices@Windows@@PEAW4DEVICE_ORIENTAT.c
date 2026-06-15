/*
 * XREFs of ?ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTATION_TYPE@@@Z @ 0x140076E84
 * Callers:
 *     ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x14006D70C (-QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z @ 0x140076F60 (-OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ConvertOrientationType(int a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 != 1 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x46,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
            (const char *)0x8000FFFFLL);
          return 2147549183LL;
        }
        *a2 = 3;
      }
      else
      {
        *a2 = 2;
      }
    }
    else
    {
      *a2 = 1;
    }
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
