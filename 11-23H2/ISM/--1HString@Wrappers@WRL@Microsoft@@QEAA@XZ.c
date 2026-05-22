/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800D7B84
 * Callers:
 *     _LampArrayRawInputProvider::UpdateDeviceAmbientProcess_::_1_::dtor$1 @ 0x18005A7F7 (_LampArrayRawInputProvider--UpdateDeviceAmbientProcess_--_1_--dtor$1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$0 @ 0x1800D76CF (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryProperties_--_1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$1 @ 0x1800D76DF (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D76DF.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$2 @ 0x1800D76EF (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D76EF.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$3 @ 0x1800D76FF (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D76FF.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$4 @ 0x1800D770F (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800D770F.c)
 *     _MPCConstantManagerClient::OnConstantChanged_::_1_::dtor$0 @ 0x18018A05A (_MPCConstantManagerClient--OnConstantChanged_--_1_--dtor$0.c)
 *     _StringToHstringVectorParser_::_1_::dtor$1 @ 0x18018BE65 (_StringToHstringVectorParser_--_1_--dtor$1.c)
 *     _StringToHstringVectorParser_::_1_::dtor$2 @ 0x18018BE71 (_StringToHstringVectorParser_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
