/*
 * XREFs of ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800E6414
 * Callers:
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800EB6D4 (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004885C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800AC0D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x1800E4B0C (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 *     ?GetInterfaceProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z @ 0x1800E7F08 (-GetInterfaceProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEA.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x1800E828C (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
RawInputProvidersTracing::SpatialInputTelemetryProperties *__fastcall RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
        RawInputProvidersTracing::SpatialInputTelemetryProperties *this,
        unsigned __int16 *a2)
{
  HSTRING *v3; // rdi
  HSTRING *v4; // rsi
  HSTRING *v5; // r14
  HSTRING *v6; // r15
  HSTRING *v7; // r12
  const struct _DEVPROPKEY *v8; // rdx
  unsigned int v9; // r8d
  ULONG v11[4]; // [rsp+30h] [rbp-39h] BYREF
  RawInputProvidersTracing::SpatialInputTelemetryProperties *v12; // [rsp+40h] [rbp-29h]
  int v13; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v14[4]; // [rsp+58h] [rbp-11h] BYREF
  int v15; // [rsp+78h] [rbp+Fh]

  v12 = this;
  v3 = (HSTRING *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v4 = (HSTRING *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v5 = (HSTRING *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  v6 = (HSTRING *)((char *)this + 48);
  *((_QWORD *)this + 6) = 0LL;
  v7 = (HSTRING *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = a2;
  v13 = 0;
  std::wstring::wstring(v14, a2);
  v15 = 0;
  if ( (int)DevicePropertyHelpers::DevicePropertyHelper::Initialize((DevicePropertyHelpers::DevicePropertyHelper *)&v13) >= 0 )
  {
    v11[0] = 16;
    DevicePropertyHelpers::DevicePropertyHelper::GetInterfaceProperty(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v13,
      v8,
      v9,
      (unsigned __int8 *)this + 16,
      v11);
    WindowsDeleteString(*v3);
    *v3 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v13,
      (struct _DEVPROPKEY *)&DEVPKEY_NAME,
      v3);
    WindowsDeleteString(*v4);
    *v4 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v13,
      (struct _DEVPROPKEY *)&DEVPKEY_Device_Manufacturer,
      v4);
    WindowsDeleteString(*v5);
    *v5 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v13,
      (struct _DEVPROPKEY *)&DEVPKEY_Device_Model,
      v5);
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v13,
      (struct _DEVPROPKEY *)&DEVPKEY_Device_FirmwareVersion,
      v6);
    WindowsDeleteString(*v7);
    *v7 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      (DevicePropertyHelpers::DevicePropertyHelper *)&v13,
      (struct _DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
      v7);
  }
  std::wstring::_Tidy_deallocate((__int64)v14);
  return this;
}
