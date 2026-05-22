/*
 * XREFs of ??1AppContentRoot@UI@Windows@@UEAA@XZ @ 0x18001183C
 * Callers:
 *     ??_GAppContentRoot@UI@Windows@@UEAAPEAXI@Z @ 0x180011800 (--_GAppContentRoot@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C910 (-InternalRelease@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::AppContentRoot::~AppContentRoot(Windows::UI::AppContentRoot *this)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 96);
  Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease((char *)this + 88);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 80);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContentRoot,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContentRoot,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>(this);
}
