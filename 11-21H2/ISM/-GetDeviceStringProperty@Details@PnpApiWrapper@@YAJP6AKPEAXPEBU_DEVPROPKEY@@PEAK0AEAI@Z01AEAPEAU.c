/*
 * XREFs of ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18003E3A0
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18003D980 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x18003DE20 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18003DF70 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800D0094 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18003C894 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceStringProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        HSTRING *a4)
{
  size_t v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // edi
  UINT32 v10; // r13d
  HRESULT v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  WCHAR *v14; // rcx
  HRESULT v15; // ebx
  __int16 v17; // ax
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rdx
  HRESULT v21; // eax
  unsigned int v22; // edi
  HSTRING_BUFFER v23; // rcx
  int v24; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_BUFFER bufferHandle; // [rsp+38h] [rbp-28h] BYREF
  WCHAR *charBuffer; // [rsp+40h] [rbp-20h] BYREF
  HSTRING_BUFFER v27; // [rsp+48h] [rbp-18h] BYREF
  WCHAR *v28; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v30; // [rsp+A0h] [rbp+40h] BYREF
  HSTRING *string; // [rsp+B8h] [rbp+58h]

  string = a4;
  v7 = 0LL;
  *a4 = 0LL;
  v30 = 0;
  v8 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, int *, _QWORD))this)(
         a2,
         a3,
         &v24,
         0LL);
  if ( v8 != 26 && v8 )
  {
    if ( v8 == 37 )
      return 1LL;
    v18 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v8);
    v19 = v18;
    if ( v18 == -2147023728 )
      return 2147943568LL;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v18,
        (int)&v30);
      return v19;
    }
  }
  if ( (unsigned int)v30 <= 2 )
    return 0LL;
  v9 = (unsigned int)v30 >> 1;
  v10 = ((unsigned int)v30 >> 1) - 1;
  v11 = WindowsPreallocateStringBuffer(v10, &charBuffer, &bufferHandle);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v11,
      (int)&v30);
    return v12;
  }
  v13 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, int *, WCHAR *))this)(
          a2,
          a3,
          &v24,
          charBuffer);
  if ( v13 )
  {
    switch ( v13 )
    {
      case 2:
        v15 = -2147024882;
        break;
      case 13:
      case 37:
      case 55:
        WindowsDeleteStringBuffer(bufferHandle);
        return 2147943568LL;
      case 19:
        v15 = -2147467259;
        break;
      case 51:
        v15 = -2147024891;
        break;
      default:
        v15 = -2147418113;
        break;
    }
    v20 = 462LL;
    goto LABEL_37;
  }
  v14 = charBuffer;
  if ( !v9 )
    goto LABEL_8;
  if ( v24 == 18 )
  {
    v7 = wcsnlen(charBuffer, v9);
    goto LABEL_8;
  }
  if ( v24 != 8210 || !*charBuffer )
  {
LABEL_8:
    if ( v7 < v9 )
      goto LABEL_9;
LABEL_38:
    v15 = -2147418113;
    v20 = 466LL;
    goto LABEL_37;
  }
  v7 = 1LL;
  if ( v9 <= 1uLL )
    goto LABEL_38;
  while ( 1 )
  {
    v17 = *v14++;
    if ( !v17 && !*v14 )
      break;
    if ( ++v7 >= v9 )
      goto LABEL_38;
  }
LABEL_9:
  if ( !v7 )
  {
    WindowsDeleteStringBuffer(bufferHandle);
    return 0LL;
  }
  if ( v7 == v10 )
    goto LABEL_11;
  v21 = WindowsPreallocateStringBuffer(v7, &v28, &v27);
  v22 = v21;
  if ( v21 >= 0 )
  {
    _o_wcscpy_s(v28, v7 + 1, charBuffer);
    v23 = bufferHandle;
    bufferHandle = v27;
    v27 = v23;
    v15 = WindowsDeleteStringBuffer(v23);
    if ( v15 >= 0 )
    {
LABEL_11:
      v15 = WindowsPromoteStringBuffer(bufferHandle, string);
      if ( v15 >= 0 )
        return 0LL;
      v20 = 491LL;
      goto LABEL_37;
    }
    v20 = 487LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v15,
      (int)&v30);
    WindowsDeleteStringBuffer(bufferHandle);
    return (unsigned int)v15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E2,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
    (const char *)(unsigned int)v21,
    (int)&v30);
  WindowsDeleteStringBuffer(bufferHandle);
  return v22;
}
