/*
 * XREFs of ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C13F4
 * Callers:
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x180063424 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     _lambda_9f1ed336c6f1042f8318a1cd576b00ef_::operator() @ 0x180065930 (_lambda_9f1ed336c6f1042f8318a1cd576b00ef_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 */

const struct _tlgProvider_t *__fastcall AudioSrvTelemetryProvider::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                          a1,
                                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
}
