/*
 * XREFs of ?CreateAuxiliaryHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800EEA50
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x18010003C (-CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEA.c)
 */

int __fastcall DirectComposition::CDevice::CreateAuxiliaryHolographicViewer(
        DirectComposition::CDevice *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        const struct _GUID *a5,
        unsigned int a6,
        struct IDCompositionHolographicViewer **a7)
{
  return DirectComposition::CDevice::CreateHolographicViewerCore(
           (DirectComposition::CDevice *)((char *)this - 32),
           a2,
           a3,
           a4,
           0,
           0,
           a5,
           a6,
           a7);
}
