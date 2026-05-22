/*
 * XREFs of ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x180063A48
 * Callers:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18001BF80 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C160 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x18000C2A0 (-ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180012F0C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x18001E2F0 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18001E440 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x180041080 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800638EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDevice::MakeAndInitialize(HSTRING string, struct PnpDeviceWatcher *a2, struct PnpDevice **a3)
{
  char *v5; // rax
  char *v6; // rbx
  int v8; // eax
  int DeviceGuidProperty; // edi
  DEVNODE *v10; // r15
  WCHAR *StringRawBuffer; // rax
  CONFIGRET DevNodeW; // eax
  unsigned int v13; // esi
  int v14; // eax
  unsigned int v15; // edi
  DEVNODE v16; // eax
  int i; // r12d
  CONFIGRET Parent; // eax
  int v19; // eax
  DEVNODE v20; // r8d
  DEVNODE pdnDevInst; // [rsp+20h] [rbp-50h] BYREF
  HSTRING stringa; // [rsp+28h] [rbp-48h] BYREF
  DEVNODE v23; // [rsp+30h] [rbp-40h] BYREF
  DEVNODE v24; // [rsp+38h] [rbp-38h] BYREF
  DEVNODE v25; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v26; // [rsp+48h] [rbp-28h] BYREF
  struct PnpDevice **v27; // [rsp+50h] [rbp-20h]
  struct _DEVPROPKEY v28; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v27 = a3;
  v26 = string;
  *a3 = 0LL;
  v5 = (char *)RefCountedObject::operator new(0x98uLL);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &PnpDevice::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = -1LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *(GUID *)(v5 + 56) = GUID_NULL;
    *(GUID *)(v5 + 72) = GUID_NULL;
    *(GUID *)(v5 + 88) = GUID_NULL;
    *((_QWORD *)v5 + 13) = 0LL;
    *((_QWORD *)v5 + 14) = 0LL;
    *((_QWORD *)v5 + 15) = 0LL;
    v5[128] = 0;
    *(_QWORD *)(v5 + 132) = 0LL;
    *((_QWORD *)v5 + 18) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v8 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)v6 + 3, &v26);
  DeviceGuidProperty = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)(unsigned int)v8);
    RefCountedObject::Release((RefCountedObject *)v6);
    return (unsigned int)DeviceGuidProperty;
  }
  v10 = (DEVNODE *)(v6 + 104);
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  DevNodeW = CM_Locate_DevNodeW((PDEVINST)v6 + 26, StringRawBuffer, 0);
  v13 = -2147023728;
  if ( DevNodeW )
  {
    *v10 = 0;
    v14 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)DevNodeW);
    v15 = v14;
    if ( v14 == -2147023728 )
    {
LABEL_12:
      RefCountedObject::Release((RefCountedObject *)v6);
      return v13;
    }
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x353,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v14);
      v13 = v15;
      goto LABEL_12;
    }
  }
  v23 = *v10;
  DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                         (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                         (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v23,
                         (void *)&DEVPKEY_Device_ClassGuid,
                         (const struct _DEVPROPKEY *)(v6 + 56));
  if ( DeviceGuidProperty < 0 )
  {
    RefCountedObject::Release((RefCountedObject *)v6);
    return (unsigned int)DeviceGuidProperty;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    *((_QWORD *)v6 + 18) = a2;
  v16 = *v10;
  *((_DWORD *)v6 + 28) = *v10;
  *(_OWORD *)(v6 + 88) = *(_OWORD *)(v6 + 56);
  pdnDevInst = v16;
  for ( i = 1; ; ++i )
  {
    Parent = CM_Get_Parent(&pdnDevInst, v16, 0);
    if ( Parent )
    {
      pdnDevInst = 0;
      v19 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)Parent);
      DeviceGuidProperty = v19;
      if ( v19 == -2147023728 )
      {
        DeviceGuidProperty = -2147023728;
        goto LABEL_37;
      }
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x398,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)(unsigned int)v19);
LABEL_37:
        RefCountedObject::Release((RefCountedObject *)v6);
        return (unsigned int)DeviceGuidProperty;
      }
    }
    else
    {
      v20 = pdnDevInst;
    }
    v24 = v20;
    DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                           (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                           (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v24,
                           (void *)&DEVPKEY_Device_ClassGuid,
                           &v28);
    if ( DeviceGuidProperty < 0 )
      goto LABEL_37;
    if ( *(_QWORD *)&v28.fmtid.Data1 == *(_QWORD *)&GUID_NULL.Data1
      && *(_QWORD *)v28.fmtid.Data4 == *(_QWORD *)GUID_NULL.Data4 )
    {
      break;
    }
    v16 = pdnDevInst;
    if ( *(_QWORD *)&v28.fmtid.Data1 == 0x4647CD8BE0CBF06CLL && *(_QWORD *)v28.fmtid.Data4 == 0x74F9F0433B268ABBLL
      || *(_QWORD *)&v28.fmtid.Data1 == 0x11D074D3745A17A0LL && *(_QWORD *)v28.fmtid.Data4 == 0xDA570FC9A000FEB6uLL )
    {
      *(DEVPROPGUID *)(v6 + 88) = v28.fmtid;
      *((_DWORD *)v6 + 28) = v16;
      *((_DWORD *)v6 + 27) = i;
    }
  }
  WindowsDeleteString(0LL);
  stringa = 0LL;
  v25 = *v10;
  DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                         (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                         (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v25,
                         (void *)&DEVPKEY_Device_HardwareIds,
                         &stringa);
  if ( DeviceGuidProperty < 0
    || (DeviceGuidProperty = PnpDevice::ParseHardwareIdStrings((PnpDevice *)v6, stringa), DeviceGuidProperty < 0) )
  {
    WindowsDeleteString(stringa);
    stringa = 0LL;
    RefCountedObject::Release((RefCountedObject *)v6);
    return (unsigned int)DeviceGuidProperty;
  }
  _InterlockedExchange((volatile __int32 *)v6 + 31, 1);
  *v27 = (struct PnpDevice *)v6;
  WindowsDeleteString(stringa);
  return 0LL;
}
