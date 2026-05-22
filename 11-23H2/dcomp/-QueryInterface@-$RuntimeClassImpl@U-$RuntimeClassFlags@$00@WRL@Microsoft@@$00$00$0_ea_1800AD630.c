/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Windows::UI::UIContext::QueryInterface(a1 - 24, a2, a3);
}
