/*
 * XREFs of ??1GraphicsCaptureItem@Capture@Graphics@Windows@winrt@@QEAA@XZ @ 0x18053CF9C
 * Callers:
 *     __anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor$1 @ 0x18053D17C (__anonymous_namespace_--CreateGraphicsCaptureItem_--_1_--dtor$1.c)
 *     _ScreenClippingBrokerImpl::GetGraphicsCaptureItemForAllDisplays_::_1_::dtor$0 @ 0x18053D2FE (_ScreenClippingBrokerImpl--GetGraphicsCaptureItemForAllDisplays_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Graphics::Capture::GraphicsCaptureItem::~GraphicsCaptureItem(
        winrt::Windows::Graphics::Capture::GraphicsCaptureItem *this)
{
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
