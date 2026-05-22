/*
 * XREFs of ?SetHandoff@CAnimationBuilder@DirectComposition@@UEAAJNH@Z @ 0x1800E8620
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z @ 0x180030EE0 (-ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::SetHandoff(
        DirectComposition::CAnimationBuilder *this,
        double a2,
        int a3)
{
  unsigned int v5; // ebx
  DirectComposition::CDeviceLock *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v7);
  v5 = 0;
  if ( _finite(a2) && a2 > 0.0 )
  {
    *((_DWORD *)this + 22) = 2 - (a3 != 0);
    *((_QWORD *)this + 12) = DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(a2);
  }
  else
  {
    v5 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v7);
  return v5;
}
