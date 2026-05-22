/*
 * XREFs of ?CreateManipulationTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionManipulationTransform@@@Z @ 0x1800EF960
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateManipulationTransform(
        DirectComposition::CDevice *this,
        struct IDCompositionManipulationTransform **a2)
{
  __int64 result; // rax
  struct IDCompositionManipulationTransform *v4; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::CreateProxyInternal(
             (DirectComposition::CDevice *)((char *)this - 16),
             106,
             0,
             &v6,
             &v5);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    v4 = (struct IDCompositionManipulationTransform *)v6;
    *((_DWORD *)v6 + 3) = v5;
    *(_QWORD *)v4 = &DirectComposition::CManipulationTransformProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *a2 = v4;
  }
  return result;
}
