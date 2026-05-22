/*
 * XREFs of ?CreateTransform3DGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTransform3D@@I0@Z @ 0x1800F0F20
 * Callers:
 *     ?CreateTransform3DGroup@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTransform3D@@I0@Z @ 0x1800A8A10 (-CreateTransform3DGroup@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTransform3D@@I0@Z.c)
 *     ?CreateTransform3DGroup@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionTransform3D@@I0@Z @ 0x1800A8A30 (-CreateTransform3DGroup@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionTransform3D@@I0@Z.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?SetTransformList@CTransform3DGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform3D@@I@Z @ 0x1800FD5A4 (-SetTransformList@CTransform3DGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform3D.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateTransform3DGroup(
        DirectComposition::CDevice *this,
        struct IDCompositionTransform3D **a2,
        unsigned int a3,
        struct IDCompositionTransform3D **a4)
{
  int v7; // ebx
  DirectComposition::CTransformGroupProxy *v8; // rsi
  DirectComposition::CTransform3DGroupProxy *v9; // rcx
  DirectComposition::CTransform3DGroupProxy *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 || !a4 )
  {
    v7 = -2147024809;
    if ( !a4 )
      return (unsigned int)v7;
LABEL_8:
    *a4 = 0LL;
    return (unsigned int)v7;
  }
  v7 = DirectComposition::CDevice::CreateProxyInternal(this, 188, 0, (void **)&v11, &v12);
  if ( v7 < 0 )
    goto LABEL_8;
  v8 = v11;
  v9 = v11;
  *((_DWORD *)v11 + 3) = v12;
  *(_QWORD *)v9 = &DirectComposition::CSharedTransform3DProxy::`vftable';
  *((_DWORD *)v9 + 2) = 1;
  v7 = DirectComposition::CTransform3DGroupProxy::SetTransformList(v9, a2, a3);
  if ( v7 < 0 )
  {
    DirectComposition::CTransformGroupProxy::Release(v8);
    goto LABEL_8;
  }
  *a4 = v8;
  return (unsigned int)v7;
}
