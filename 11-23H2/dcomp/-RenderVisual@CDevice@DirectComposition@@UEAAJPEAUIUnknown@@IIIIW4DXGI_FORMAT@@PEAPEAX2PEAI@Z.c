/*
 * XREFs of ?RenderVisual@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z @ 0x1800F40D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z @ 0x1800F22CC (-InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::RenderVisual(
        DirectComposition::CDevice *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        void **a8,
        void **a9,
        unsigned int *a10)
{
  __int64 v12; // r11
  struct DirectComposition::CDevice *v14; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0;
  DirectComposition::CDevice::GetDeviceAndHandleWorker((unsigned __int64)a2, &v14, &v15);
  if ( (struct DirectComposition::CDevice *)(v12 - 64) == v14 )
    return DirectComposition::CDevice::InternalRenderVisual(
             (DirectComposition::CDevice *)(v12 - 64),
             v15,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10);
  else
    return 2147942487LL;
}
