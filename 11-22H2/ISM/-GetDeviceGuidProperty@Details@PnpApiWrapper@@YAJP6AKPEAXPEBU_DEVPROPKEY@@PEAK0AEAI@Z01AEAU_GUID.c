/*
 * XREFs of ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x18001E2F0
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x180063A48 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800F9940 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18001E440 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x180041080 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceGuidProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        const struct _DEVPROPKEY *a4)
{
  unsigned int v6; // edx
  unsigned int v7; // esi
  __int64 result; // rax
  int DeviceStringProperty; // eax
  unsigned int v10; // ebx
  HSTRING v11; // rcx
  PCWSTR StringRawBuffer; // r9
  __int64 v13; // rcx
  int v14; // r8d
  unsigned int v15; // ebx
  HSTRING *v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-20h] BYREF
  HSTRING string[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING v21; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v21) = 16;
  v16 = &v21;
  v7 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, _BYTE *))this)(
         a2,
         a3,
         v18);
  if ( !v7 )
    return 0LL;
  a4->fmtid = GUID_NULL;
  if ( v7 == 37 )
  {
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v17 = *(_DWORD *)a2;
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v17,
                             (void *)&DEVPKEY_Device_InstanceId,
                             (const struct _DEVPROPKEY *)string,
                             &v21);
    v10 = DeviceStringProperty;
    v11 = string[0];
    if ( string[0] )
    {
      if ( DeviceStringProperty >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string[0], 0LL);
        v13 = -1LL;
        do
        {
          v14 = StringRawBuffer[v13 + 1] - aHtreeRoot0[v13 + 1];
          if ( v14 )
            break;
          v13 += 2LL;
          if ( v13 == 13 )
            break;
          v14 = StringRawBuffer[v13] - aHtreeRoot0[v13];
        }
        while ( !v14 );
        if ( !v14 )
        {
          WindowsDeleteString(string[0]);
          return 1LL;
        }
        WindowsDeleteString(string[0]);
        goto LABEL_17;
      }
    }
    else if ( DeviceStringProperty >= 0 )
    {
      v10 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x80004005LL,
        (int)v16);
      v11 = string[0];
    }
    WindowsDeleteString(v11);
    return v10;
  }
LABEL_17:
  result = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v7, v6);
  v15 = result;
  if ( (_DWORD)result != -2147023728 )
  {
    if ( (int)result < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x183,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)result,
        (int)v16);
      return v15;
    }
    return 0LL;
  }
  return result;
}
