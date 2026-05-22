/*
 * XREFs of ?ProhibitDescendantConfiguration@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18008D8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::ProhibitDescendantConfiguration(
        DirectComposition::CInteractionProxy *this,
        struct IDCompositionInteractionConfigurationPartner *a2)
{
  return DirectComposition::CInteractionProxy::_ProcessSupportedInteractionConfigurationChange(
           (unsigned __int64)this,
           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
           8u);
}
