/*
 * XREFs of ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18003AC10
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004C684 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX@Z2AEAPEAX@Z @ 0x18003FC8C (-RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX.c)
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x180040D6C (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180040E20 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800F8AD0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 */

__int64 __fastcall PnpDeviceWatcher::Initialize(PnpDeviceWatcher *this, struct LampArrayRawInputProvider *a2)
{
  DWORD CurrentThreadId; // eax
  struct _CM_NOTIFY_FILTER *v4; // rdx
  const char *v5; // r9
  __int64 v6; // rcx
  int LastError; // eax
  HSTRING v8; // rdx
  PnpApiWrapper *v9; // rcx
  unsigned int v11; // edi
  void **v12; // [rsp+20h] [rbp-1D8h]
  void **v13; // [rsp+20h] [rbp-1D8h]
  _DWORD v14[4]; // [rsp+40h] [rbp-1B8h] BYREF
  __int128 v15; // [rsp+50h] [rbp-1A8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  *(_QWORD *)this = a2;
  CurrentThreadId = GetCurrentThreadId();
  _InterlockedExchange64((volatile __int64 *)this + 3, (__int64)OpenThread(0x1FFFFFu, 0, CurrentThreadId));
  if ( *((_QWORD *)this + 3) )
  {
    v6 = 0x11CFF16F4D1E55B2LL - *(_QWORD *)&GUID_NULL.Data1;
    v14[0] = 416;
    if ( *(_QWORD *)&GUID_NULL.Data1 == 0x11CFF16F4D1E55B2LL )
      v6 = 0x300000111100CB88LL - *(_QWORD *)GUID_NULL.Data4;
    v14[2] = 0;
    v14[1] = v6 == 0;
    v15 = xmmword_180223A48;
    LastError = PnpApiWrapper::Details::RegisterDeviceEventHandler(
                  (PnpApiWrapper::Details *)v14,
                  v4,
                  (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                  (char *)this + 16,
                  v12);
    if ( LastError >= 0 )
    {
      LastError = PnpApiWrapper::RegisterDeviceInstanceNotification(
                    v9,
                    v8,
                    (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                    (char *)this + 8,
                    v13);
      if ( LastError >= 0 )
      {
        PnpApiWrapper::Details::EnumerateDevices(
          PnpApiWrapper::Adapters::GetDeviceInterfaceList,
          PnpApiWrapper::Adapters::GetDeviceInterfaceListSize,
          3LL,
          &xmmword_180223A48);
        PnpApiWrapper::Details::EnumerateDevices(
          PnpApiWrapper::Adapters::GetDeviceInstanceList,
          PnpApiWrapper::Adapters::GetDeviceInstanceListSize,
          1LL,
          &GUID_NULL);
        return 0LL;
      }
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x26,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
                  v5);
  }
  v11 = LastError;
  PnpDeviceWatcher::Shutdown(this);
  return v11;
}
