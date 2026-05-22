/*
 * XREFs of ?CreateTranslateTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTranslateTransform@@@Z @ 0x1800F1110
 * Callers:
 *     ?CreateTranslateTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTranslateTransform@@@Z @ 0x1800A8AD0 (-CreateTranslateTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTranslateTransfor.c)
 *     ?CreateTranslateTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionTranslateTransform@@@Z @ 0x1800A8AF0 (-CreateTranslateTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionTranslateTransf.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateTranslateTransform(
        DirectComposition::CDevice *this,
        struct IDCompositionTranslateTransform **a2)
{
  __int64 result; // rax
  struct IDCompositionTranslateTransform *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 190, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionTranslateTransform *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CTranslateTransformProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
