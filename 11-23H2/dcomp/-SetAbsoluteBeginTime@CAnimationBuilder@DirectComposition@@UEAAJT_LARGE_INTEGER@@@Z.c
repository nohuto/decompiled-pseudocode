/*
 * XREFs of ?SetAbsoluteBeginTime@CAnimationBuilder@DirectComposition@@UEAAJT_LARGE_INTEGER@@@Z @ 0x1800E85B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::SetAbsoluteBeginTime(
        DirectComposition::CAnimationBuilder *this,
        union _LARGE_INTEGER a2)
{
  unsigned int v4; // esi
  DirectComposition::CDeviceLock *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v6 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v6);
  if ( *((_QWORD *)this + 7) )
  {
    v4 = -2147024891;
  }
  else
  {
    ReleaseInterface<DirectComposition::CAnimationProxy>((DirectComposition::CTransformGroupProxy **)this + 2);
    *((_BYTE *)this + 40) |= 2u;
    *((union _LARGE_INTEGER *)this + 6) = a2;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v6);
  return v4;
}
