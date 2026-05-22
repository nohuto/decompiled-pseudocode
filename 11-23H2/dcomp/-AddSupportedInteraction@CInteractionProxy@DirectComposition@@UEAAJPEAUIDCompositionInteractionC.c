/*
 * XREFs of ?AddSupportedInteraction@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18008D360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::AddSupportedInteraction(
        DirectComposition::CInteractionProxy *this,
        struct IDCompositionInteractionConfigurationPartner *a2)
{
  return DirectComposition::CInteractionProxy::_ProcessSupportedInteractionConfigurationChange(
           (unsigned __int64)this,
           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
           1u);
}
