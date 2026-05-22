/*
 * XREFs of ?CreateRotateTransform3D@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionRotateTransform3D@@@Z @ 0x1800F0470
 * Callers:
 *     ?CreateRotateTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionRotateTransform3D@@@Z @ 0x1800A87B0 (-CreateRotateTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionRotateTransform3D@.c)
 *     ?CreateRotateTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionRotateTransform3D@@@Z @ 0x1800A87D0 (-CreateRotateTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionRotateTransform3.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateRotateTransform3D(
        DirectComposition::CDevice *this,
        struct IDCompositionRotateTransform3D **a2)
{
  __int64 result; // rax
  struct IDCompositionRotateTransform3D *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 149, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionRotateTransform3D *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CRotateTransform3DProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
