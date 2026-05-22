/*
 * XREFs of ?CreateAnimationProxy@CDevice@DirectComposition@@QEAAJPEAPEAVCAnimationProxy@2@@Z @ 0x180063B94
 * Callers:
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateAnimationProxy(
        DirectComposition::CDevice *this,
        struct DirectComposition::CAnimationProxy **a2)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  unsigned int v5; // ecx
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  void *v7; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 2, 0, &v7, &v6);
  if ( (int)result >= 0 )
  {
    v4 = v7;
    v5 = v6;
    *a2 = (struct DirectComposition::CAnimationProxy *)v7;
    v4[3] = v5;
    *(_QWORD *)v4 = &DirectComposition::CFilterEffectProxy::`vftable';
    v4[2] = 1;
  }
  return result;
}
