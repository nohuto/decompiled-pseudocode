/*
 * XREFs of ??1DevicePropertyHelper@DevicePropertyHelpers@@QEAA@XZ @ 0x1800D7B74
 * Callers:
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$5 @ 0x1800D771F (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D771F.c)
 * Callees:
 *     <none>
 */

void __fastcall DevicePropertyHelpers::DevicePropertyHelper::~DevicePropertyHelper(
        DevicePropertyHelpers::DevicePropertyHelper *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
