/*
 * XREFs of ??1GraphicsCaptureItem@Capture@Graphics@Windows@winrt@@QEAA@XZ @ 0x1805F7A80
 * Callers:
 *     __anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor$1 @ 0x1805F7C6D (__anonymous_namespace_--CreateGraphicsCaptureItem_--_1_--dtor$1.c)
 *     _ScreenClippingBrokerImpl::GetGraphicsCaptureItemForAllDisplays_::_1_::dtor$0 @ 0x1805F7DEE (_ScreenClippingBrokerImpl--GetGraphicsCaptureItemForAllDisplays_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Graphics::Capture::GraphicsCaptureItem::~GraphicsCaptureItem(
        winrt::Windows::Graphics::Capture::GraphicsCaptureItem *this)
{
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
