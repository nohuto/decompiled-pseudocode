/*
 * XREFs of ?Release@UIContext@UI@Windows@@UEAAKXZ @ 0x180087620
 * Callers:
 *     ?Release@UIContext@UI@Windows@@W7EAAKXZ @ 0x1800AD870 (-Release@UIContext@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@UIContext@UI@Windows@@WBA@EAAKXZ @ 0x1800AD890 (-Release@UIContext@UI@Windows@@WBA@EAAKXZ.c)
 *     ?Release@UIContext@UI@Windows@@WBI@EAAKXZ @ 0x1800AD8B0 (-Release@UIContext@UI@Windows@@WBI@EAAKXZ.c)
 *     ?Release@UIContext@UI@Windows@@WCA@EAAKXZ @ 0x1800AD8D0 (-Release@UIContext@UI@Windows@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::UI::UIContext::Release(Windows::UI::UIContext *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::Release(this);
}
