/*
 * XREFs of ?AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x180088600
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z @ 0x180030EE0 (-ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z.c)
 *     ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180034488 (-AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::AddFreeze(
        DirectComposition::CAnimationBuilder *this,
        double a2)
{
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  DirectComposition::CDeviceLock *v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v7);
  if ( _finite(a2) && (*(int *)(*((_QWORD *)this + 3) + 368LL) >= 2 || a2 >= 0.0) )
  {
    ReleaseInterface<DirectComposition::CAnimationProxy>((DirectComposition::CTransformGroupProxy **)this + 2);
    v6 = DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(a2);
    v5 = 6;
    v3 = DirectComposition::CAnimationBuilder::AddPrimitive(this, (const struct DwmAnimationPrimitive *)&v5);
  }
  else
  {
    v3 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v7);
  return v3;
}
