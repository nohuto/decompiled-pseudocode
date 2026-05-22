/*
 * XREFs of ?CreateCursorVisual@CDevice@DirectComposition@@UEAAJ_KPEAPEAUIDCompositionCursorVisualPartner@@@Z @ 0x1800EF010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Release@CCursorVisualProxy@DirectComposition@@UEAAKXZ @ 0x1800F3CC0 (-Release@CCursorVisualProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateCursorVisual(
        DirectComposition::CDevice *this,
        __int64 a2,
        struct IDCompositionCursorVisualPartner **a3)
{
  int ProxyInternal; // ebx
  int v6; // eax
  DirectComposition::CCursorVisualProxy *v7; // rsi
  DirectComposition::CResourceProxy *v8; // rcx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  DirectComposition::CCursorVisualProxy *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(
                      (DirectComposition::CDevice *)((char *)this - 16),
                      50,
                      0,
                      (void **)&v11,
                      (unsigned int *)&v10);
    if ( ProxyInternal >= 0 )
    {
      v6 = v10;
      v7 = v11;
      v10 = a2;
      v8 = (DirectComposition::CCursorVisualProxy *)((char *)v11 + 8);
      *((_DWORD *)v11 + 3) = v6;
      *(_QWORD *)v7 = &DirectComposition::CCursorVisualProxy::`vftable';
      *(_DWORD *)v8 = 1;
      ProxyInternal = DirectComposition::CResourceProxy::SetBufferProperty(v8, 0, &v10, 8uLL);
      if ( ProxyInternal >= 0 )
      {
        *a3 = v7;
        return (unsigned int)ProxyInternal;
      }
      DirectComposition::CCursorVisualProxy::Release(v7);
    }
    *a3 = 0LL;
    return (unsigned int)ProxyInternal;
  }
  return (unsigned int)-2147024809;
}
