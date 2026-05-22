/*
 * XREFs of ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18001CEB0
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C910 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800381B8 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 * Callees:
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x18001CD60 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18001D390 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18003F9A0 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     swscanf_s @ 0x180056E38 (swscanf_s.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800EE858 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800EE9D0 (-LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z.c)
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
  unsigned int v10; // edx
  unsigned int v11; // r13d
  int DeviceGuidProperty; // esi
  DEVNODE v13; // r9d
  int i; // esi
  CONFIGRET Parent; // eax
  unsigned int v16; // edx
  DEVNODE v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  PCWSTR v21; // rdi
  UINT32 v22; // ecx
  size_t v23; // rsi
  bool v24; // zf
  __int16 v26; // ax
  __int16 v27; // cx
  int v28; // eax
  int v29; // eax
  unsigned int v30; // edi
  HSTRING *v31; // [rsp+20h] [rbp-60h]
  DEVNODE pdnDevInst; // [rsp+30h] [rbp-50h] BYREF
  __int16 v33; // [rsp+34h] [rbp-4Ch] BYREF
  __int16 v34; // [rsp+38h] [rbp-48h] BYREF
  UINT32 length; // [rsp+3Ch] [rbp-44h] BYREF
  struct _DEVPROPKEY stringa; // [rsp+40h] [rbp-40h] BYREF
  int v37; // [rsp+58h] [rbp-28h] BYREF
  int v38; // [rsp+60h] [rbp-20h] BYREF
  int v39; // [rsp+64h] [rbp-1Ch] BYREF
  struct _DEVPROPKEY v40; // [rsp+68h] [rbp-18h] BYREF
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
      (int)v31);
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
        (int)v31);
      RefCountedObject::Release((RefCountedObject *)v5);
      return (unsigned int)DeviceStringProperty;
    }
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  DevNodeW = CM_Locate_DevNodeW((PDEVINST)v5 + 24, StringRawBuffer, 0);
  v11 = -2147023728;
  if ( !DevNodeW )
    goto LABEL_8;
  *((_DWORD *)v5 + 24) = 0;
  v29 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)DevNodeW, v10);
  v30 = v29;
  if ( v29 == -2147023728 )
  {
LABEL_52:
    RefCountedObject::Release((RefCountedObject *)v5);
    return v11;
  }
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v29,
      (int)v31);
    v11 = v30;
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
  v13 = *((_DWORD *)v5 + 24);
  *((_DWORD *)v5 + 26) = v13;
  *((_OWORD *)v5 + 5) = *((_OWORD *)v5 + 3);
  pdnDevInst = v13;
  for ( i = 1; ; ++i )
  {
    Parent = CM_Get_Parent(&pdnDevInst, v13, 0);
    if ( !Parent )
    {
      v17 = pdnDevInst;
      goto LABEL_12;
    }
    pdnDevInst = 0;
    v28 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)Parent, v16);
    DeviceStringProperty = v28;
    if ( v28 == -2147023728 )
    {
      DeviceStringProperty = -2147023728;
LABEL_44:
      RefCountedObject::Release((RefCountedObject *)v5);
      return (unsigned int)DeviceStringProperty;
    }
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x354,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v28,
        (int)v31);
      goto LABEL_44;
    }
LABEL_12:
    stringa.pid = v17;
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&stringa.pid,
                             (void *)&DEVPKEY_Device_ClassGuid,
                             &v40);
    if ( DeviceStringProperty < 0 )
      goto LABEL_44;
    v18 = *(_QWORD *)&v40.fmtid.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&v40.fmtid.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v18 = *(_QWORD *)v40.fmtid.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v18 )
      break;
    v19 = *(_QWORD *)&v40.fmtid.Data1 - 0x4647CD8BE0CBF06CLL;
    if ( *(_QWORD *)&v40.fmtid.Data1 == 0x4647CD8BE0CBF06CLL )
      v19 = *(_QWORD *)v40.fmtid.Data4 - 0x74F9F0433B268ABBLL;
    v13 = pdnDevInst;
    if ( !v19 )
      goto LABEL_37;
    v20 = *(_QWORD *)&v40.fmtid.Data1 - 0x11D074D3745A17A0LL;
    if ( *(_QWORD *)&v40.fmtid.Data1 == 0x11D074D3745A17A0LL )
      v20 = *(_QWORD *)v40.fmtid.Data4 + 0x25A8F0365FFF014ALL;
    if ( !v20 )
    {
LABEL_37:
      *((_OWORD *)v5 + 5) = v40.fmtid;
      *((_DWORD *)v5 + 26) = v13;
      *((_DWORD *)v5 + 25) = i;
    }
  }
  WindowsDeleteString(0LL);
  *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
  v37 = *((_DWORD *)v5 + 24);
  DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                           (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                           (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v37,
                           (void *)&DEVPKEY_Device_HardwareIds,
                           &stringa,
                           v31);
  if ( DeviceStringProperty < 0 )
  {
    WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
    *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
    RefCountedObject::Release((RefCountedObject *)v5);
    return (unsigned int)DeviceStringProperty;
  }
  v21 = WindowsGetStringRawBuffer(*(HSTRING *)&stringa.fmtid.Data1, &length);
  v22 = length;
  if ( length )
  {
    do
    {
      if ( !*v21 )
        break;
      v23 = wcsnlen(v21, v22);
      if ( (!*((_WORD *)v5 + 54) || !*((_WORD *)v5 + 55))
        && (swscanf_s(v21, L"USB\\VID_%4x&PID_%4x", &v33, &v34) == 2
         || swscanf_s(v21, L"HID\\VID_%4x&PID_%4x", &v33, &v34) == 2
         || swscanf_s(v21, L"HID\\{%*8c-%*4c-%*4c-%*4c-%*12c}_VID&%4x_PID&%4x", &v33, &v34) == 2) )
      {
        *((_WORD *)v5 + 54) = v33;
        *((_WORD *)v5 + 55) = v34;
      }
      if ( (!*((_WORD *)v5 + 56) || !*((_WORD *)v5 + 57)) && swscanf_s(v21, L"HID_DEVICE_UP:%4x_U:%4x", &v38, &v39) == 2 )
      {
        v26 = v38;
        *((_WORD *)v5 + 56) = v38;
        v27 = v39;
        *((_WORD *)v5 + 57) = v39;
        if ( v26 == 89 && v27 == 1 )
        {
          LampArrayTelemetry::GetInstance();
          LampArrayTelemetry::LogPnPDeviceInfo(
            (LampArrayTelemetry *)*((unsigned __int16 *)v5 + 56),
            v21,
            *((_WORD *)v5 + 54),
            *((_WORD *)v5 + 55),
            *((_WORD *)v5 + 56),
            *((_WORD *)v5 + 57));
        }
      }
      v21 += v23 + 1;
      v24 = -1 - (_DWORD)v23 + length == 0;
      v22 = -1 - v23 + length;
      length = v22;
    }
    while ( !v24 );
  }
  _InterlockedExchange((volatile __int32 *)v5 + 29, 1);
  *a2 = (struct PnpDevice *)v5;
  WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
  return 0LL;
}
