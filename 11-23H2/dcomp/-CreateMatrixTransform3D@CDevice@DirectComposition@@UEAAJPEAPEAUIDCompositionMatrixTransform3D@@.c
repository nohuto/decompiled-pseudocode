/*
 * XREFs of ?CreateMatrixTransform3D@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z @ 0x1800EF9D0
 * Callers:
 *     ?CreateMatrixTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z @ 0x1800A86F0 (-CreateMatrixTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionMatrixTransform3D@.c)
 *     ?CreateMatrixTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z @ 0x1800A8710 (-CreateMatrixTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionMatrixTransform3.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateMatrixTransform3D(
        DirectComposition::CDevice *this,
        struct IDCompositionMatrixTransform3D **a2)
{
  __int64 result; // rax
  struct IDCompositionMatrixTransform3D *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 110, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionMatrixTransform3D *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CMatrixTransform3DProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
