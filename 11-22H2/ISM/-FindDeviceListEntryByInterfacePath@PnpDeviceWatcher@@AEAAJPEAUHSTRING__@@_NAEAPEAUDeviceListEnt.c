/*
 * XREFs of ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18001D058
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C160 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18001BF80 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18001E440 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800F8ED8 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 */

__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
        PnpDeviceWatcher *this,
        HSTRING *a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v4; // rsi
  char *i; // rbx
  int DeviceStringProperty; // eax
  HSTRING v11; // rcx
  unsigned int DeviceListEntryByInstanceId; // ebx
  HSTRING *v14; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _DEVPROPKEY string; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); ; i = *(char **)i )
  {
    if ( i == v4 )
    {
      *a4 = 0LL;
      WindowsDeleteString(0LL);
      *(_QWORD *)&string.fmtid.Data1 = 0LL;
      DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                               (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
                               (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v14,
                               (void *)&DEVPKEY_Device_InstanceId,
                               &string,
                               a2);
      v11 = *(HSTRING *)&string.fmtid.Data1;
      DeviceListEntryByInstanceId = DeviceStringProperty;
      if ( *(_QWORD *)&string.fmtid.Data1 )
      {
        if ( DeviceStringProperty < 0 )
        {
LABEL_6:
          WindowsDeleteString(v11);
          return DeviceListEntryByInstanceId;
        }
        DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                        this,
                                        *(HSTRING *)&string.fmtid.Data1,
                                        a3,
                                        a4);
      }
      else
      {
        if ( DeviceStringProperty < 0 )
          goto LABEL_6;
        DeviceListEntryByInstanceId = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x32F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)0x80004005LL,
          (int)v14);
      }
      v11 = *(HSTRING *)&string.fmtid.Data1;
      goto LABEL_6;
    }
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 32LL), a2) )
      break;
  }
  *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
  return 0LL;
}
