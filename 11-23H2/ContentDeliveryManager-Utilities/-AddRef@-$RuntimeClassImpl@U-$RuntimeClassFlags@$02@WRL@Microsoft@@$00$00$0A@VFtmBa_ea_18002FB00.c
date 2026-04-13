/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationManager@ContentManagement@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x18002FB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::INotificationManager>::AddRef(
        __int64 a1)
{
  return ContentManagement::MobilityExperienceSettings::AddRef((ContentManagement::MobilityExperienceSettings *)(a1 - 48));
}
