/*
 * XREFs of ?CreateTranslateTransform3D@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTranslateTransform3D@@@Z @ 0x1800F10A0
 * Callers:
 *     ?CreateTranslateTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTranslateTransform3D@@@Z @ 0x1800A8A90 (-CreateTranslateTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTranslateTransf.c)
 *     ?CreateTranslateTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionTranslateTransform3D@@@Z @ 0x1800A8AB0 (-CreateTranslateTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionTranslateTran.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateTranslateTransform3D(
        DirectComposition::CDevice *this,
        struct IDCompositionTranslateTransform3D **a2)
{
  __int64 result; // rax
  struct IDCompositionTranslateTransform3D *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 191, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionTranslateTransform3D *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CTranslateTransform3DProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
