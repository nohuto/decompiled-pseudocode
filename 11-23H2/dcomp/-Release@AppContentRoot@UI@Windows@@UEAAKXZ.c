/*
 * XREFs of ?Release@AppContentRoot@UI@Windows@@UEAAKXZ @ 0x18007F460
 * Callers:
 *     ?Release@AppContentRoot@UI@Windows@@W7EAAKXZ @ 0x1800AD7F0 (-Release@AppContentRoot@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@AppContentRoot@UI@Windows@@WBA@EAAKXZ @ 0x1800AD810 (-Release@AppContentRoot@UI@Windows@@WBA@EAAKXZ.c)
 *     ?Release@AppContentRoot@UI@Windows@@WBI@EAAKXZ @ 0x1800AD830 (-Release@AppContentRoot@UI@Windows@@WBI@EAAKXZ.c)
 *     ?Release@AppContentRoot@UI@Windows@@WCA@EAAKXZ @ 0x1800AD850 (-Release@AppContentRoot@UI@Windows@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::UI::AppContentRoot::Release(Windows::UI::AppContentRoot *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContentRoot,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::Release(this);
}
