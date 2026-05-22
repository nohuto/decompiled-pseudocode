/*
 * XREFs of ?CreateCompositionBuffer@CDxDevice@DirectComposition@@QEAAJIIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x180034A9C
 * Callers:
 *     ?CreateDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034950 (-CreateDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?CreateCompositionBuffer@TokenFactory@DirectComposition@@SAJPEAUID3D11Device1@@IIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x180034B60 (-CreateCompositionBuffer@TokenFactory@DirectComposition@@SAJPEAUID3D11Device1@@IIW4DXGI_FORMAT@@.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::CreateCompositionBuffer(
        struct ID3D11Device1 **this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void **a8,
        struct IUnknown **a9)
{
  struct IUnknown **v9; // r14
  int v14; // ebx
  int v16; // [rsp+20h] [rbp-58h]
  _BYTE v17[16]; // [rsp+50h] [rbp-28h] BYREF
  struct IUnknown *v18; // [rsp+80h] [rbp+8h] BYREF

  v9 = a9;
  *a9 = 0LL;
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    (DirectComposition::SwapDeviceContextState *)v17,
    (const struct DirectComposition::CDxDevice *)this);
  v14 = DirectComposition::TokenFactory::CreateCompositionBuffer(this[3], a2, a3, a4, v16, a6, a7, (void **)&a9, &v18);
  if ( v14 >= 0 )
  {
    *a8 = a9;
    *v9 = v18;
  }
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v17);
  return (unsigned int)v14;
}
