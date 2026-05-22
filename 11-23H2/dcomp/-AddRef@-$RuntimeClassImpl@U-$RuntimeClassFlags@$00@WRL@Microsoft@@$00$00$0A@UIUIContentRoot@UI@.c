/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContentRoot@UI@Windows@@U?$CloakedIid@UIClosable@Foundation@Windows@@@23@U?$CloakedIid@UIUIContentRootPartner@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800AD270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContentRoot,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1)
{
  return Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::AddRef((Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *)(a1 - 24));
}
