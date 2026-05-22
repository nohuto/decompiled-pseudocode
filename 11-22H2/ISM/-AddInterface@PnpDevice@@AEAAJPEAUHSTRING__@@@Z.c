/*
 * XREFs of ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800F9940
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C160 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180012F0C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x18001E2F0 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDevice::AddInterface(PnpDevice *this, HSTRING a2)
{
  int v3; // edx
  int v4; // edx
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING v8; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v9; // [rsp+28h] [rbp-30h] BYREF
  struct _DEVPROPKEY v10; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = a2;
  v3 = *((_DWORD *)this + 31);
  if ( !v3 )
    return 2147549183LL;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( (unsigned int)(v4 - 1) <= 1 )
      return 1LL;
    return 2147549183LL;
  }
  v9 = v8;
  result = PnpApiWrapper::Details::GetDeviceGuidProperty(
             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v9,
             (void *)&DEVPKEY_DeviceInterface_ClassGuid,
             &v10);
  if ( (int)result < 0 )
    return result;
  if ( !*((_QWORD *)this + 4) )
  {
    v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 4, &v8);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    *(DEVPROPGUID *)((char *)this + 72) = v10.fmtid;
  }
  return 0LL;
}
