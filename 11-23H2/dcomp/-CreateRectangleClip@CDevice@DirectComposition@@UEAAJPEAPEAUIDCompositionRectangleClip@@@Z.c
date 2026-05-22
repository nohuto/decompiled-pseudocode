/*
 * XREFs of ?CreateRectangleClip@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionRectangleClip@@@Z @ 0x1800F00F0
 * Callers:
 *     ?CreateRectangleClip@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionRectangleClip@@@Z @ 0x1800A8770 (-CreateRectangleClip@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionRectangleClip@@@Z.c)
 *     ?CreateRectangleClip@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionRectangleClip@@@Z @ 0x1800A8790 (-CreateRectangleClip@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionRectangleClip@@@Z.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateRectangleClip(
        DirectComposition::CDevice *this,
        struct IDCompositionRectangleClip **a2)
{
  __int64 result; // rax
  struct IDCompositionRectangleClip *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 138, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionRectangleClip *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CRectangleClipProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
