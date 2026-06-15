/*
 * XREFs of ??0CAudioSignalProcessingModeArray@@QEAA@XZ @ 0x18000DE80
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002BDD0 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     <none>
 */

CAudioSignalProcessingModeArray *__fastcall CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray(
        CAudioSignalProcessingModeArray *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  return this;
}
