/*
 * XREFs of ?CreateScaleTransform3D@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionScaleTransform3D@@@Z @ 0x1800F0660
 * Callers:
 *     ?CreateScaleTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionScaleTransform3D@@@Z @ 0x1800A8850 (-CreateScaleTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionScaleTransform3D@@@.c)
 *     ?CreateScaleTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionScaleTransform3D@@@Z @ 0x1800A8870 (-CreateScaleTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionScaleTransform3D@.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateScaleTransform3D(
        DirectComposition::CDevice *this,
        struct IDCompositionScaleTransform3D **a2)
{
  __int64 result; // rax
  struct IDCompositionScaleTransform3D *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 153, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionScaleTransform3D *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CScaleTransform3DProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
