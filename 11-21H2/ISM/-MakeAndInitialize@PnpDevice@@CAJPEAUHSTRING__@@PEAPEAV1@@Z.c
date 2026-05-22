/*
 * XREFs of ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18003DF70
 * Callers:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18003D6C4 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18003D980 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18003C894 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x18003DE20 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18003E3A0 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     swscanf_s @ 0x18004B03C (swscanf_s.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800D4E2C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800D4F94 (-LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PnpDevice::MakeAndInitialize(HSTRING string, struct PnpDevice **a2)
{
  char *v4; // rax
  char *v5; // rbx
  HRESULT v6; // eax
  int DeviceStringProperty; // edi
  WCHAR *StringRawBuffer; // rax
  CONFIGRET DevNodeW; // eax
  unsigned int v10; // r13d
  int DeviceGuidProperty; // esi
  DEVNODE v12; // r9d
  int i; // esi
  CONFIGRET Parent; // eax
  DEVNODE v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  PCWSTR v19; // rdi
  UINT32 v20; // ecx
  size_t v21; // rsi
  bool v22; // zf
  __int16 v24; // ax
  __int16 v25; // cx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // edi
  HSTRING *v29; // [rsp+20h] [rbp-60h]
  DEVNODE pdnDevInst; // [rsp+30h] [rbp-50h] BYREF
  __int16 v31; // [rsp+34h] [rbp-4Ch] BYREF
  __int16 v32; // [rsp+38h] [rbp-48h] BYREF
  UINT32 length; // [rsp+3Ch] [rbp-44h] BYREF
  struct _DEVPROPKEY stringa; // [rsp+40h] [rbp-40h] BYREF
  int v35; // [rsp+58h] [rbp-28h] BYREF
  int v36; // [rsp+60h] [rbp-20h] BYREF
  int v37; // [rsp+64h] [rbp-1Ch] BYREF
  struct _DEVPROPKEY v38; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a2 = 0LL;
  v4 = (char *)malloc(0x80uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *(_DWORD *)(v4 + 121) = 0;
    *(_WORD *)(v4 + 125) = 0;
    v4[127] = 0;
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &PnpDevice::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = -1LL;
    *((GUID *)v4 + 3) = GUID_NULL;
    *((GUID *)v4 + 4) = GUID_NULL;
    *((GUID *)v4 + 5) = GUID_NULL;
    *((_QWORD *)v4 + 12) = 0LL;
    *((_QWORD *)v4 + 13) = 0LL;
    *((_QWORD *)v4 + 14) = 0LL;
    v4[120] = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x8007000ELL,
      (int)v29);
    return 2147942414LL;
  }
  if ( !string || string != *((HSTRING *)v5 + 3) )
  {
    WindowsDeleteString(*((HSTRING *)v5 + 3));
    *((_QWORD *)v5 + 3) = 0LL;
    v6 = WindowsDuplicateString(string, (HSTRING *)v5 + 3);
    DeviceStringProperty = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
        (const char *)(unsigned int)v6,
        (int)v29);
      RefCountedObject::Release((RefCountedObject *)v5);
      return (unsigned int)DeviceStringProperty;
    }
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  DevNodeW = CM_Locate_DevNodeW((PDEVINST)v5 + 24, StringRawBuffer, 0);
  v10 = -2147023728;
  if ( !DevNodeW )
    goto LABEL_8;
  *((_DWORD *)v5 + 24) = 0;
  v27 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)DevNodeW);
  v28 = v27;
  if ( v27 == -2147023728 )
  {
LABEL_52:
    RefCountedObject::Release((RefCountedObject *)v5);
    return v10;
  }
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v27,
      (int)v29);
    v10 = v28;
    goto LABEL_52;
  }
LABEL_8:
  *(_DWORD *)stringa.fmtid.Data4 = *((_DWORD *)v5 + 24);
  DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                         (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                         (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))stringa.fmtid.Data4,
                         (void *)&DEVPKEY_Device_ClassGuid,
                         (const struct _DEVPROPKEY *)(v5 + 48));
  if ( DeviceGuidProperty < 0 )
  {
    RefCountedObject::Release((RefCountedObject *)v5);
    return (unsigned int)DeviceGuidProperty;
  }
  v12 = *((_DWORD *)v5 + 24);
  *((_DWORD *)v5 + 26) = v12;
  *((_OWORD *)v5 + 5) = *((_OWORD *)v5 + 3);
  pdnDevInst = v12;
  for ( i = 1; ; ++i )
  {
    Parent = CM_Get_Parent(&pdnDevInst, v12, 0);
    if ( !Parent )
    {
      v15 = pdnDevInst;
      goto LABEL_12;
    }
    pdnDevInst = 0;
    v26 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)Parent);
    DeviceStringProperty = v26;
    if ( v26 == -2147023728 )
    {
      DeviceStringProperty = -2147023728;
LABEL_44:
      RefCountedObject::Release((RefCountedObject *)v5);
      return (unsigned int)DeviceStringProperty;
    }
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x354,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v26,
        (int)v29);
      goto LABEL_44;
    }
LABEL_12:
    stringa.pid = v15;
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&stringa.pid,
                             (void *)&DEVPKEY_Device_ClassGuid,
                             &v38);
    if ( DeviceStringProperty < 0 )
      goto LABEL_44;
    v16 = *(_QWORD *)&v38.fmtid.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&v38.fmtid.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v16 = *(_QWORD *)v38.fmtid.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v16 )
      break;
    v17 = *(_QWORD *)&v38.fmtid.Data1 - 0x4647CD8BE0CBF06CLL;
    if ( *(_QWORD *)&v38.fmtid.Data1 == 0x4647CD8BE0CBF06CLL )
      v17 = *(_QWORD *)v38.fmtid.Data4 - 0x74F9F0433B268ABBLL;
    v12 = pdnDevInst;
    if ( !v17 )
      goto LABEL_37;
    v18 = *(_QWORD *)&v38.fmtid.Data1 - 0x11D074D3745A17A0LL;
    if ( *(_QWORD *)&v38.fmtid.Data1 == 0x11D074D3745A17A0LL )
      v18 = *(_QWORD *)v38.fmtid.Data4 + 0x25A8F0365FFF014ALL;
    if ( !v18 )
    {
LABEL_37:
      *((_OWORD *)v5 + 5) = v38.fmtid;
      *((_DWORD *)v5 + 26) = v12;
      *((_DWORD *)v5 + 25) = i;
    }
  }
  WindowsDeleteString(0LL);
  *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
  v35 = *((_DWORD *)v5 + 24);
  DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                           (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                           (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v35,
                           (void *)&DEVPKEY_Device_HardwareIds,
                           &stringa,
                           v29);
  if ( DeviceStringProperty < 0 )
  {
    WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
    *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
    RefCountedObject::Release((RefCountedObject *)v5);
    return (unsigned int)DeviceStringProperty;
  }
  v19 = WindowsGetStringRawBuffer(*(HSTRING *)&stringa.fmtid.Data1, &length);
  v20 = length;
  if ( length )
  {
    do
    {
      if ( !*v19 )
        break;
      v21 = wcsnlen(v19, v20);
      if ( (!*((_WORD *)v5 + 54) || !*((_WORD *)v5 + 55))
        && (swscanf_s(v19, L"USB\\VID_%4x&PID_%4x", &v31, &v32) == 2
         || swscanf_s(v19, L"HID\\VID_%4x&PID_%4x", &v31, &v32) == 2
         || swscanf_s(v19, L"HID\\{%*8c-%*4c-%*4c-%*4c-%*12c}_VID&%4x_PID&%4x", &v31, &v32) == 2) )
      {
        *((_WORD *)v5 + 54) = v31;
        *((_WORD *)v5 + 55) = v32;
      }
      if ( (!*((_WORD *)v5 + 56) || !*((_WORD *)v5 + 57)) && swscanf_s(v19, L"HID_DEVICE_UP:%4x_U:%4x", &v36, &v37) == 2 )
      {
        v24 = v36;
        *((_WORD *)v5 + 56) = v36;
        v25 = v37;
        *((_WORD *)v5 + 57) = v37;
        if ( v24 == 89 && v25 == 1 )
        {
          LampArrayTelemetry::GetInstance();
          LampArrayTelemetry::LogPnPDeviceInfo(
            (LampArrayTelemetry *)*((unsigned __int16 *)v5 + 56),
            v19,
            *((_WORD *)v5 + 54),
            *((_WORD *)v5 + 55),
            *((_WORD *)v5 + 56),
            *((_WORD *)v5 + 57));
        }
      }
      v19 += v21 + 1;
      v22 = -1 - (_DWORD)v21 + length == 0;
      v20 = -1 - v21 + length;
      length = v20;
    }
    while ( !v22 );
  }
  _InterlockedExchange((volatile __int32 *)v5 + 29, 1);
  *a2 = (struct PnpDevice *)v5;
  WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
  return 0LL;
}
