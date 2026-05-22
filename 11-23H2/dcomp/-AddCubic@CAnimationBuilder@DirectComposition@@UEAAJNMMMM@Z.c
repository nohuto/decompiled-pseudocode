/*
 * XREFs of ?AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x180035D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z @ 0x180030EE0 (-ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z.c)
 *     ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180034488 (-AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::AddCubic(
        DirectComposition::CAnimationBuilder *this,
        double a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  __int64 v7; // rax
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
    ReleaseInterface<DirectComposition::CAnimationProxy>((char *)this + 16);
    v7 = DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(a2);
    v13 = a5;
    v12 = a6;
    v14 = a4;
    v15 = a3;
    v11 = v7;
    v10 = 1;
    v8 = DirectComposition::CAnimationBuilder::AddPrimitive(this, (const struct DwmAnimationPrimitive *)&v10);
  }
  else
  {
    v8 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v16);
  return v8;
}
