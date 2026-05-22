/*
 * XREFs of ?CreateGdiSpriteBitmap@CDevice@DirectComposition@@UEAAJPEAUHLSURF__@@W4DXGI_FORMAT@@HPEAPEAUIDCompositionGdiSpriteBitmapPartner@@@Z @ 0x1800EF3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateGdiSpriteBitmap(
        DirectComposition::CDevice *this,
        __int64 a2,
        enum DXGI_FORMAT a3,
        int a4,
        struct IDCompositionGdiSpriteBitmapPartner **a5)
{
  struct IDCompositionGdiSpriteBitmapPartner **v5; // rdi
  __int64 v7; // r12
  int v9; // ebx
  DirectComposition::CTransformGroupProxy *v10; // rsi
  DirectComposition::CResourceProxy *v11; // r14
  DirectComposition::CTransformGroupProxy *v13; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+10h] BYREF

  v5 = a5;
  v7 = a3;
  if ( !a2 || !a5 )
  {
    v9 = -2147024809;
LABEL_12:
    if ( !v5 )
      return (unsigned int)v9;
LABEL_13:
    *v5 = 0LL;
    return (unsigned int)v9;
  }
  v9 = DirectComposition::CDevice::CreateProxyInternal(
         (DirectComposition::CDevice *)((char *)this - 24),
         65,
         0,
         (void **)&v13,
         &v14);
  if ( v9 < 0 )
    goto LABEL_13;
  v10 = v13;
  v11 = (DirectComposition::CTransformGroupProxy *)((char *)v13 + 8);
  *((_DWORD *)v13 + 3) = v14;
  *(_DWORD *)v11 = 1;
  *(_QWORD *)v10 = &DirectComposition::CGdiSpriteBitmapProxy::`vftable';
  v9 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v11, 3, a2);
  if ( v9 < 0
    || (v9 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v11, 1, v7), v9 < 0)
    || a4 && (v9 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v11, 2, 1LL), v9 < 0) )
  {
    DirectComposition::CTransformGroupProxy::Release(v10);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_12;
  }
  *v5 = v10;
  return (unsigned int)v9;
}
