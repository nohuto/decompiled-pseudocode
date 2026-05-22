/*
 * XREFs of ?CreateGenericInkProxy@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionGenericInkPartner@@@Z @ 0x1800EF4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateGenericInkProxy(
        DirectComposition::CDevice *this,
        struct IDCompositionGenericInkPartner **a2)
{
  int v3; // ebx
  volatile signed __int32 *v4; // rsi
  _DWORD *v5; // rax
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  DirectComposition::CTransformGroupProxy *v8; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( a2 )
  {
    v3 = DirectComposition::CDevice::CreateProxyInternal(
           (DirectComposition::CDevice *)((char *)this - 24),
           66,
           0,
           (void **)&v8,
           &v7);
    if ( v3 >= 0 )
    {
      v4 = (volatile signed __int32 *)v8;
      *((_DWORD *)v8 + 3) = v7;
      *((_DWORD *)v4 + 2) = 1;
      *(_QWORD *)v4 = &DirectComposition::CFilterEffectProxy::`vftable';
      v5 = DefaultHeap::Alloc(0x38uLL);
      if ( v5 )
      {
        v5[4] = 0;
        *(_QWORD *)v5 = &DirectComposition::CGenericInk::`vftable'{for `IDCompositionGenericInkPartner'};
        *((_QWORD *)v5 + 1) = &DirectComposition::CGenericInk::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
        *((_QWORD *)v5 + 3) = v4;
        _InterlockedIncrement(v4 + 2);
        *((_QWORD *)v5 + 4) = 0LL;
        *((_QWORD *)v5 + 5) = 0LL;
        *((_QWORD *)v5 + 6) = 0LL;
        *a2 = (struct IDCompositionGenericInkPartner *)v5;
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 4));
        v4 = (volatile signed __int32 *)v8;
      }
      else
      {
        *a2 = 0LL;
      }
      if ( !*a2 )
        v3 = -2147024882;
      DirectComposition::CTransformGroupProxy::Release((DirectComposition::CTransformGroupProxy *)v4);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v3;
}
