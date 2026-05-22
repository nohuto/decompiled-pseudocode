/*
 * XREFs of ?RegisterDeviceHandleNotification@PnpApiWrapper@@YAJPEAXP6AXW4DeviceEventId@1@PEAUHSTRING__@@0@Z0AEAPEAX@Z @ 0x18006450C
 * Callers:
 *     ?CreateFileHandle@PnpDevice@@AEAAJKK@Z @ 0x1800639A0 (-CreateFileHandle@PnpDevice@@AEAAJKK@Z.c)
 * Callees:
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x180040D6C (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpApiWrapper::RegisterDeviceHandleNotification(
        PnpApiWrapper *this,
        void *a2,
        void (__high *a3)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *),
        _QWORD *a4)
{
  struct _CM_NOTIFY_FILTER *v7; // rdx
  void **v9; // [rsp+20h] [rbp-1B8h] BYREF
  int v10; // [rsp+28h] [rbp-1B0h]
  PnpApiWrapper *v11; // [rsp+30h] [rbp-1A8h]

  memset_0(&v9, 0, 0x1A0uLL);
  v9 = (void **)416;
  v10 = 1;
  v11 = this;
  return PnpApiWrapper::Details::RegisterDeviceEventHandler((PnpApiWrapper::Details *)&v9, v7, a3, a4);
}
