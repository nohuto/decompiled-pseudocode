/*
 * XREFs of ?CreateLinearTransferEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionLinearTransferEffect@@@Z @ 0x1800EF8C0
 * Callers:
 *     ?CreateLinearTransferEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionLinearTransferEffect@@@Z @ 0x1800A86D0 (-CreateLinearTransferEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionLinearTransferE.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Create@CLinearTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionLinearTransferEffect@@@Z @ 0x1800EE5E0 (-Create@CLinearTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositio.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateLinearTransferEffect(
        DirectComposition::CDevice *this,
        struct IDCompositionLinearTransferEffect **a2)
{
  int v3; // ebx
  struct DirectComposition::CFilterEffectProxy *v4; // rsi
  struct DirectComposition::CFilterEffectProxy *v5; // rcx
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::CFilterEffectProxy *v8; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    *a2 = 0LL;
    v3 = DirectComposition::CDevice::CreateProxyInternal(
           (DirectComposition::CDevice *)((char *)this - 8),
           101,
           0,
           (void **)&v8,
           &v7);
    if ( v3 >= 0 )
    {
      v4 = v8;
      v5 = v8;
      *((_DWORD *)v8 + 3) = v7;
      *(_QWORD *)v5 = &DirectComposition::CFilterEffectProxy::`vftable';
      *((_DWORD *)v5 + 2) = 1;
      v3 = DirectComposition::CLinearTransferEffect::Create(v5, a2);
      if ( v3 < 0 )
        *a2 = 0LL;
      DirectComposition::CTransformGroupProxy::Release(v4);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v3;
}
