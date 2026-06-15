/*
 * XREFs of ??$com_query_to_nothrow@UIApoAuxiliaryInputConfiguration@@AEAPEAUIAudioProcessingObject@@@wil@@YAJAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAuxiliaryInputConfiguration@@@Z @ 0x14004EFD4
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004F59C (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 *     ?Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14005D1AC (-Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IApoAuxiliaryInputConfiguration,IAudioProcessingObject * &>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, a2);
}
