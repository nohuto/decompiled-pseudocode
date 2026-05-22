/*
 * XREFs of ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18003D448
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18003D860 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x18003C310 (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x18003C640 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     ?RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX@Z2AEAPEAX@Z @ 0x180048860 (-RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800D0274 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
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
  int v13; // [rsp+20h] [rbp-1D8h]
  int v14; // [rsp+20h] [rbp-1D8h]
  int v15; // [rsp+28h] [rbp-1D0h]
  int v16; // [rsp+28h] [rbp-1D0h]
  int v17; // [rsp+38h] [rbp-1C0h]
  int v18; // [rsp+38h] [rbp-1C0h]
  __int64 v19; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-1B0h]
  __int128 v21; // [rsp+50h] [rbp-1A8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  *(_QWORD *)this = a2;
  CurrentThreadId = GetCurrentThreadId();
  _InterlockedExchange64((volatile __int64 *)this + 3, (__int64)OpenThread(0x1FFFFFu, 0, CurrentThreadId));
  if ( *((_QWORD *)this + 3) )
  {
    v6 = 0x11CFF16F4D1E55B2LL - *(_QWORD *)&GUID_NULL.Data1;
    LODWORD(v19) = 416;
    if ( *(_QWORD *)&GUID_NULL.Data1 == 0x11CFF16F4D1E55B2LL )
      v6 = 0x300000111100CB88LL - *(_QWORD *)GUID_NULL.Data4;
    LODWORD(v20) = 0;
    HIDWORD(v19) = v6 == 0;
    v21 = xmmword_1801F7BB0;
    LastError = PnpApiWrapper::Details::RegisterDeviceEventHandler(
                  (PnpApiWrapper::Details *)&v19,
                  v4,
                  (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                  (_QWORD *)this + 2);
    if ( LastError >= 0 )
    {
      LastError = PnpApiWrapper::RegisterDeviceInstanceNotification(
                    v9,
                    v8,
                    (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                    (char *)this + 8,
                    v12);
      if ( LastError >= 0 )
      {
        PnpApiWrapper::Details::EnumerateDevices(
          (__int64 (__fastcall *)(__int64, PCWSTR, _WORD *, _QWORD))PnpApiWrapper::Adapters::GetDeviceInterfaceList,
          (__int64 (__fastcall *)(__int64, PCWSTR, unsigned int *))PnpApiWrapper::Adapters::GetDeviceInterfaceListSize,
          3,
          (__int64)&xmmword_1801F7BB0,
          v13,
          v15,
          (HSTRING)this,
          v17,
          v19,
          v20,
          v21,
          *((__int64 *)&v21 + 1));
        PnpApiWrapper::Details::EnumerateDevices(
          (__int64 (__fastcall *)(__int64, PCWSTR, _WORD *, _QWORD))PnpApiWrapper::Adapters::GetDeviceInstanceList,
          (__int64 (__fastcall *)(__int64, PCWSTR, unsigned int *))PnpApiWrapper::Adapters::GetDeviceInstanceListSize,
          1,
          (__int64)&GUID_NULL,
          v14,
          v16,
          (HSTRING)this,
          v18,
          v19,
          v20,
          v21,
          *((__int64 *)&v21 + 1));
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
