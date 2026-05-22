/*
 * XREFs of ?AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z @ 0x180036C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z @ 0x180030EE0 (-ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z.c)
 *     ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180034488 (-AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::AddRepeat(
        DirectComposition::CAnimationBuilder *this,
        double a2,
        double a3)
{
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  DirectComposition::CDeviceLock *v9; // [rsp+80h] [rbp+8h] BYREF

  v9 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v9);
  if ( _finite(a2) && (*(int *)(*((_QWORD *)this + 3) + 368LL) >= 2 || a2 >= 0.0) && _finite(a3) && a3 > 0.0 )
  {
    ReleaseInterface<DirectComposition::CAnimationProxy>((char *)this + 16);
    v7 = DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(a2);
    v6 = 3;
    v8 = DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(a3);
    v4 = DirectComposition::CAnimationBuilder::AddPrimitive(this, (const struct DwmAnimationPrimitive *)&v6);
  }
  else
  {
    v4 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v9);
  return v4;
}
