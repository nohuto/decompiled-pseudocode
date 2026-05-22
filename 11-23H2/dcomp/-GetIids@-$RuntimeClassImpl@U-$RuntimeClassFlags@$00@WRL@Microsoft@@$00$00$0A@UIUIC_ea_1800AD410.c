/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AD410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Windows::UI::UIContext::GetIids((Windows::UI::UIContext *)(a1 - 24), a2, a3);
}
