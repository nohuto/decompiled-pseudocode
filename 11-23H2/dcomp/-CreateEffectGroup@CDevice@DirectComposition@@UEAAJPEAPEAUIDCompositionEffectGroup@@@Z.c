/*
 * XREFs of ?CreateEffectGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionEffectGroup@@@Z @ 0x1800100E0
 * Callers:
 *     ?CreateEffectGroup@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionEffectGroup@@@Z @ 0x1800A8650 (-CreateEffectGroup@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionEffectGroup@@@Z.c)
 *     ?CreateEffectGroup@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionEffectGroup@@@Z @ 0x1800A8670 (-CreateEffectGroup@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionEffectGroup@@@Z.c)
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateEffectGroup(
        DirectComposition::CDevice *this,
        struct IDCompositionEffectGroup **a2)
{
  __int64 result; // rax
  struct IDCompositionEffectGroup *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(this, 0x3Au, 0, &v6, &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionEffectGroup *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CEffectGroupProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
