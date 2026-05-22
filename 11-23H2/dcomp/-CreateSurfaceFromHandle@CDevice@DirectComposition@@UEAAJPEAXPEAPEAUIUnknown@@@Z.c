/*
 * XREFs of ?CreateSurfaceFromHandle@CDevice@DirectComposition@@UEAAJPEAXPEAPEAUIUnknown@@@Z @ 0x1800F0A70
 * Callers:
 *     ?CreateSurfaceFromHandle@CDevice@DirectComposition@@WBA@EAAJPEAXPEAPEAUIUnknown@@@Z @ 0x1800A8990 (-CreateSurfaceFromHandle@CDevice@DirectComposition@@WBA@EAAJPEAXPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurfaceFromHandle(
        DirectComposition::CDevice *this,
        void *a2,
        struct IUnknown **a3)
{
  int v5; // ebx
  DirectComposition::CTransformGroupProxy *v6; // rdi
  DirectComposition::CResourceProxy *v7; // rcx
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  DirectComposition::CTransformGroupProxy *v10; // [rsp+68h] [rbp+20h] BYREF

  v5 = -2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    v5 = DirectComposition::CDevice::CreateProxyInternal(this, 42, 0, (void **)&v10, &v9);
    if ( v5 >= 0 )
    {
      v6 = v10;
      v7 = (DirectComposition::CTransformGroupProxy *)((char *)v10 + 8);
      *((_DWORD *)v10 + 3) = v9;
      *(_QWORD *)v6 = &DirectComposition::CCompositionSurfaceProxy::`vftable';
      *(_DWORD *)v7 = 1;
      v5 = DirectComposition::CResourceProxy::SetHandleProperty(v7, 0, a2);
      if ( v5 < 0 )
        DirectComposition::CTransformGroupProxy::Release(v6);
      else
        *a3 = (struct IUnknown *)v6;
    }
  }
  return (unsigned int)v5;
}
