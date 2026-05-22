/*
 * XREFs of ?CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x18010003C
 * Callers:
 *     ?CreateAuxiliaryHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800EEA50 (-CreateAuxiliaryHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@IP.c)
 *     ?CreateAuxiliaryHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@IAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800EEAA0 (-CreateAuxiliaryHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT.c)
 *     ?CreateHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800EF690 (-CreateHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPEAUIDCo.c)
 *     ?CreateHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@IAEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800EF6E0 (-CreateHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@IAEBU_G.c)
 *     ?CreateStereoHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800F09D0 (-CreateStereoHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPE.c)
 *     ?CreateStereoHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@IAEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z @ 0x1800F0A20 (-CreateStereoHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@I.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@_NIAEBU_GUID@@I@Z @ 0x1800E7D48 (-Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMA.c)
 *     ?Release@CHolographicViewerProxy@DirectComposition@@UEAAKXZ @ 0x1800E82E0 (-Release@CHolographicViewerProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateHolographicViewerCore(
        struct DirectComposition::CSurfaceFactory **this,
        UINT a2,
        UINT a3,
        enum DXGI_FORMAT a4,
        bool a5,
        unsigned int a6,
        struct _GUID *a7,
        unsigned int a8,
        struct IDCompositionHolographicViewer **a9)
{
  struct IDCompositionHolographicViewer **v9; // rdi
  int ProxyInternal; // ebx
  DirectComposition::CHolographicViewerProxy *v15; // rsi
  int v16; // eax
  DirectComposition::CHolographicViewerProxy *v17; // rcx
  DirectComposition::CHolographicViewerProxy *v19; // [rsp+50h] [rbp-28h] BYREF

  v9 = a9;
  if ( !a9 || !a2 || !a3 )
  {
    ProxyInternal = -2147024809;
    if ( !a9 )
      return (unsigned int)ProxyInternal;
LABEL_9:
    *v9 = 0LL;
    return (unsigned int)ProxyInternal;
  }
  ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(
                    (DirectComposition::CDevice *)this,
                    81,
                    0,
                    (void **)&v19,
                    (unsigned int *)&a9);
  if ( ProxyInternal < 0 )
    goto LABEL_9;
  v15 = v19;
  v16 = (int)a9;
  v17 = v19;
  *((_QWORD *)v19 + 2) = 0LL;
  *((_QWORD *)v17 + 3) = 0LL;
  *((_DWORD *)v17 + 3) = v16;
  *(_QWORD *)v17 = &DirectComposition::CHolographicViewerProxy::`vftable';
  *((_DWORD *)v17 + 2) = 1;
  ProxyInternal = DirectComposition::CHolographicViewerProxy::Initialize(v17, this[75], a2, a3, a4, a5, a6, a7, a8);
  if ( ProxyInternal < 0 )
  {
    DirectComposition::CHolographicViewerProxy::Release(v15);
    goto LABEL_9;
  }
  *v9 = v15;
  return (unsigned int)ProxyInternal;
}
