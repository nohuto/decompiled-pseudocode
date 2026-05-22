/*
 * XREFs of ?AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x1800E8490
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z @ 0x180030EE0 (-ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z.c)
 *     ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180034488 (-AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::AddSinusoidal(
        DirectComposition::CAnimationBuilder *this,
        double a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  float v7; // xmm0_4
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  float v12; // [rsp+30h] [rbp-48h]
  float v13; // [rsp+34h] [rbp-44h]
  float v14; // [rsp+38h] [rbp-40h]
  float v15; // [rsp+3Ch] [rbp-3Ch]
  DirectComposition::CDeviceLock *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v16);
  if ( _finite(a2) && (*(int *)(*((_QWORD *)this + 3) + 368LL) >= 2 || a2 >= 0.0) )
  {
    ReleaseInterface<DirectComposition::CAnimationProxy>((DirectComposition::CTransformGroupProxy **)this + 2);
    v11 = DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(a2);
    v10 = 2;
    v12 = a3;
    v13 = a4;
    v7 = (float)(a5 + a5) * 3.141592653589793;
    v14 = v7;
    v15 = a6 * 3.141592653589793 / 180.0;
    v8 = DirectComposition::CAnimationBuilder::AddPrimitive(this, (const struct DwmAnimationPrimitive *)&v10);
  }
  else
  {
    v8 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v16);
  return v8;
}
