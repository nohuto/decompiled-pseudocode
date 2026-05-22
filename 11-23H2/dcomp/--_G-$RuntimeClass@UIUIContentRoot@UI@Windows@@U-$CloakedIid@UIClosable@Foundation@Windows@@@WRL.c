/*
 * XREFs of ??_G?$RuntimeClass@UIUIContentRoot@UI@Windows@@U?$CloakedIid@UIClosable@Foundation@Windows@@@WRL@Microsoft@@U?$CloakedIid@UIUIContentRootPartner@UI@Windows@@@56@VFtmBase@56@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801141F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContentRoot@UI@Windows@@U?$CloakedIid@UIClosable@Foundation@Windows@@@23@U?$CloakedIid@UIUIContentRootPartner@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180011874 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContentRoot@UI@Windo.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Windows::UI::IUIContentRoot,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContentRoot,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContentRoot,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
