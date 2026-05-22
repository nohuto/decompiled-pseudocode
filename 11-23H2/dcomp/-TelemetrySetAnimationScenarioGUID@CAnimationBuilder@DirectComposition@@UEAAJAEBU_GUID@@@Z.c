/*
 * XREFs of ?TelemetrySetAnimationScenarioGUID@CAnimationBuilder@DirectComposition@@UEAAJAEBU_GUID@@@Z @ 0x1800E87C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::TelemetrySetAnimationScenarioGUID(
        DirectComposition::CAnimationBuilder *this,
        const struct _GUID *a2)
{
  unsigned int v4; // ebx
  struct _GUID *v5; // rax
  DirectComposition::CDeviceLock *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v7);
  v4 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    v4 = -2147024891;
  }
  else
  {
    v5 = (struct _GUID *)DefaultHeap::Alloc(0x10uLL);
    *((_QWORD *)this + 4) = v5;
    if ( v5 )
      *v5 = *a2;
    else
      v4 = -2147024882;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v7);
  return v4;
}
