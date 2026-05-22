/*
 * XREFs of ?CreateRotateTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionRotateTransform@@@Z @ 0x1800F04E0
 * Callers:
 *     ?CreateRotateTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionRotateTransform@@@Z @ 0x1800A87F0 (-CreateRotateTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionRotateTransform@@@Z.c)
 *     ?CreateRotateTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionRotateTransform@@@Z @ 0x1800A8810 (-CreateRotateTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionRotateTransform@@@.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateRotateTransform(
        DirectComposition::CDevice *this,
        struct IDCompositionRotateTransform **a2)
{
  __int64 result; // rax
  struct IDCompositionRotateTransform *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 148, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionRotateTransform *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CRotateTransformProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
