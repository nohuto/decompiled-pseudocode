/*
 * XREFs of ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x18003DE20
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18003DF70 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800D10D0 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18003C894 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18003E3A0 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceGuidProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        const struct _DEVPROPKEY *a4)
{
  unsigned int v6; // esi
  __int64 result; // rax
  int DeviceStringProperty; // eax
  unsigned int v9; // ebx
  HSTRING v10; // rcx
  PCWSTR StringRawBuffer; // r9
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // ebx
  HSTRING *v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-20h] BYREF
  HSTRING string[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING v20; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v20) = 16;
  v15 = &v20;
  v6 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, _BYTE *))this)(
         a2,
         a3,
         v17);
  if ( !v6 )
    return 0LL;
  a4->fmtid = GUID_NULL;
  if ( v6 == 37 )
  {
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v16 = *(_DWORD *)a2;
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v16,
                             (void *)&DEVPKEY_Device_InstanceId,
                             (const struct _DEVPROPKEY *)string,
                             &v20);
    v9 = DeviceStringProperty;
    v10 = string[0];
    if ( string[0] )
    {
      if ( DeviceStringProperty >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string[0], 0LL);
        v12 = -1LL;
        do
        {
          v13 = StringRawBuffer[v12 + 1] - aHtreeRoot0[v12 + 1];
          if ( v13 )
            break;
          v12 += 2LL;
          if ( v12 == 13 )
            break;
          v13 = StringRawBuffer[v12] - aHtreeRoot0[v12];
        }
        while ( !v13 );
        if ( !v13 )
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
      v9 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x80004005LL,
        (int)v15);
      v10 = string[0];
    }
    WindowsDeleteString(v10);
    return v9;
  }
LABEL_17:
  result = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v6);
  v14 = result;
  if ( (_DWORD)result != -2147023728 )
  {
    if ( (int)result < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x183,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)result,
        (int)v15);
      return v14;
    }
    return 0LL;
  }
  return result;
}
