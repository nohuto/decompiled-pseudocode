/*
 * XREFs of ?CreateScaleTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionScaleTransform@@@Z @ 0x18000AC00
 * Callers:
 *     ?CreateScaleTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionScaleTransform@@@Z @ 0x1800A8890 (-CreateScaleTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionScaleTransform@@@Z.c)
 *     ?CreateScaleTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionScaleTransform@@@Z @ 0x1800A88B0 (-CreateScaleTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionScaleTransform@@@Z.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateScaleTransform(
        DirectComposition::CDevice *this,
        struct IDCompositionScaleTransform **a2)
{
  __int64 result; // rax
  struct IDCompositionScaleTransform *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 0x98u, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionScaleTransform *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CScaleTransformProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
