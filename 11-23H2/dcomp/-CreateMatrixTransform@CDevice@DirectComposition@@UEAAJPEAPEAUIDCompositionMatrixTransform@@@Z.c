/*
 * XREFs of ?CreateMatrixTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionMatrixTransform@@@Z @ 0x1800EFA40
 * Callers:
 *     ?CreateMatrixTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionMatrixTransform@@@Z @ 0x1800A8730 (-CreateMatrixTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionMatrixTransform@@@Z.c)
 *     ?CreateMatrixTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionMatrixTransform@@@Z @ 0x1800A8750 (-CreateMatrixTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionMatrixTransform@@@.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateMatrixTransform(
        DirectComposition::CDevice *this,
        struct IDCompositionMatrixTransform **a2)
{
  __int64 result; // rax
  struct IDCompositionMatrixTransform *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 109, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionMatrixTransform *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CMatrixTransformProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
