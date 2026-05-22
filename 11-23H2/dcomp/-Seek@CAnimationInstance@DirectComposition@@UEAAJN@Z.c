/*
 * XREFs of ?Seek@CAnimationInstance@DirectComposition@@UEAAJN@Z @ 0x180088570
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z @ 0x180030EE0 (-ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::Seek(DirectComposition::CAnimationInstance *this, double a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  DirectComposition::CDeviceLock *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v8);
  if ( _finite(a2) )
  {
    v3 = DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(a2);
    v4 = *((_QWORD *)this + 4);
    v7 = v3;
    v5 = DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(v4 + 8),
           12,
           &v7,
           8uLL);
  }
  else
  {
    v5 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v8);
  return v5;
}
