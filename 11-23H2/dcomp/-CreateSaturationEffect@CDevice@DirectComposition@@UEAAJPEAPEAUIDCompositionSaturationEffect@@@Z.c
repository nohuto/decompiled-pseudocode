/*
 * XREFs of ?CreateSaturationEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionSaturationEffect@@@Z @ 0x1800F0550
 * Callers:
 *     ?CreateSaturationEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionSaturationEffect@@@Z @ 0x1800A8830 (-CreateSaturationEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionSaturationEffect@@@.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Create@CSaturationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionSaturationEffect@@@Z @ 0x1800EE668 (-Create@CSaturationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionSat.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSaturationEffect(
        DirectComposition::CDevice *this,
        struct IDCompositionSaturationEffect **a2)
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
           150,
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
      v3 = DirectComposition::CSaturationEffect::Create(v5, a2);
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
