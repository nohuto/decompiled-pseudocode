/*
 * XREFs of ?CreateVisualReferenceController@CDevice@DirectComposition@@UEAAJPEAUIDCompositionVisual@@PEAPEAUIDCompositionVisualReferenceControllerPartner@@@Z @ 0x1800F13A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateVisualReferenceController(
        DirectComposition::CDevice *this,
        struct IUnknown *a2,
        struct IDCompositionVisualReferenceControllerPartner **a3)
{
  int v5; // ebx
  DirectComposition::CTransformGroupProxy *v6; // rdi
  unsigned int v7; // edx
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  DirectComposition::CTransformGroupProxy *v10; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    *a3 = 0LL;
    v5 = DirectComposition::CDevice::CreateProxyInternal(
           (DirectComposition::CDevice *)((char *)this - 16),
           201,
           0,
           (void **)&v10,
           &v9);
    if ( v5 >= 0 )
    {
      v6 = v10;
      v7 = v9;
      *(_QWORD *)v10 = &DirectComposition::CVisualReferenceControllerProxy::`vftable';
      *((_DWORD *)v6 + 2) = 1;
      *((_DWORD *)v6 + 3) = v7;
      if ( a2
        && (v5 = DirectComposition::CResourceProxy::SetReferenceProperty(
                   (DirectComposition::CTransformGroupProxy *)((char *)v6 + 8),
                   0,
                   a2),
            v5 < 0) )
      {
        DirectComposition::CTransformGroupProxy::Release(v6);
      }
      else
      {
        *a3 = v6;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v5;
}
