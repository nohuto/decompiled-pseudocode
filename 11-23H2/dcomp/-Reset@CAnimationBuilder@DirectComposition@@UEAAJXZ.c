/*
 * XREFs of ?Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ @ 0x180064050
 * Callers:
 *     ??1CAnimationBuilder@DirectComposition@@QEAA@XZ @ 0x180063EB4 (--1CAnimationBuilder@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 *     ?Reset@CAnimationData@DirectComposition@@QEAAXXZ @ 0x18006409C (-Reset@CAnimationData@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::Reset(DirectComposition::CAnimationBuilder *this)
{
  DirectComposition::CDeviceLock *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v3);
  DirectComposition::CAnimationData::Reset((DirectComposition::CAnimationBuilder *)((char *)this + 48));
  ReleaseInterface<DirectComposition::CAnimationProxy>((DirectComposition::CTransformGroupProxy **)this + 2);
  *((_BYTE *)this + 40) &= 0xFCu;
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v3);
  return 0LL;
}
