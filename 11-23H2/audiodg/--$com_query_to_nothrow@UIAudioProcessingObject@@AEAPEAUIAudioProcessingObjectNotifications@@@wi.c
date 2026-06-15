/*
 * XREFs of ??$com_query_to_nothrow@UIAudioProcessingObject@@AEAPEAUIAudioProcessingObjectNotifications@@@wil@@YAJAEAPEAUIAudioProcessingObjectNotifications@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1400229CC
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14006DC40 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioProcessingObject,IAudioProcessingObjectNotifications * &>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a2);
}
