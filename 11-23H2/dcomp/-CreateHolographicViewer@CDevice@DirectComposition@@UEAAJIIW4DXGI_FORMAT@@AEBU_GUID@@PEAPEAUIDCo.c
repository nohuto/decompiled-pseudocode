/*
 * XREFs of ?CreateHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800EF690
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x18010003C (-CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEA.c)
 */

int __fastcall DirectComposition::CDevice::CreateHolographicViewer(
        DirectComposition::CDevice *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        const struct _GUID *a5,
        struct IDCompositionHolographicViewer **a6)
{
  return DirectComposition::CDevice::CreateHolographicViewerCore(
           (DirectComposition::CDevice *)((char *)this - 32),
           a2,
           a3,
           a4,
           0,
           0,
           a5,
           0,
           a6);
}
