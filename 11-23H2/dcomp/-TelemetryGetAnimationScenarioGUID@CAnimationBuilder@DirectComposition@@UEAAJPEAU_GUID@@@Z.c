/*
 * XREFs of ?TelemetryGetAnimationScenarioGUID@CAnimationBuilder@DirectComposition@@UEAAJPEAU_GUID@@@Z @ 0x1800E8760
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::TelemetryGetAnimationScenarioGUID(
        DirectComposition::CAnimationBuilder *this,
        struct _GUID *a2)
{
  struct _GUID *v4; // rax
  unsigned int v5; // ebx
  DirectComposition::CDeviceLock *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v7);
  v4 = (struct _GUID *)*((_QWORD *)this + 4);
  v5 = 0;
  if ( v4 )
    *a2 = *v4;
  else
    v5 = -2147467259;
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v7);
  return v5;
}
