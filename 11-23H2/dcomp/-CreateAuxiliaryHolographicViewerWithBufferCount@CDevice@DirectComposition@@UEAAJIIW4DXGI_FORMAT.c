/*
 * XREFs of ?CreateAuxiliaryHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@IAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800EEAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x18010003C (-CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEA.c)
 */

int __fastcall DirectComposition::CDevice::CreateAuxiliaryHolographicViewerWithBufferCount(
        DirectComposition::CDevice *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        unsigned int a5,
        const struct _GUID *a6,
        unsigned int a7,
        struct IDCompositionHolographicViewer **a8)
{
  return DirectComposition::CDevice::CreateHolographicViewerCore(
           (DirectComposition::CDevice *)((char *)this - 32),
           a2,
           a3,
           a4,
           1,
           a5,
           a6,
           a7,
           a8);
}
