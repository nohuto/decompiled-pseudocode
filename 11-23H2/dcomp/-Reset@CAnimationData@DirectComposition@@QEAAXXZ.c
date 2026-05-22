/*
 * XREFs of ?Reset@CAnimationData@DirectComposition@@QEAAXXZ @ 0x18006409C
 * Callers:
 *     ??1CAnimationInstance@DirectComposition@@EEAA@XZ @ 0x180061D94 (--1CAnimationInstance@DirectComposition@@EEAA@XZ.c)
 *     ??1CAnimationBuilder@DirectComposition@@QEAA@XZ @ 0x180063EB4 (--1CAnimationBuilder@DirectComposition@@QEAA@XZ.c)
 *     ?Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ @ 0x180064050 (-Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180064104 (--$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectCo.c)
 *     ?Release@CLegacyAnimationTrigger@DirectComposition@@UEAAKXZ @ 0x1800E8890 (-Release@CLegacyAnimationTrigger@DirectComposition@@UEAAKXZ.c)
 */

void __fastcall DirectComposition::CAnimationData::Reset(DirectComposition::CAnimationData *this)
{
  __int64 v1; // rax
  DirectComposition::CLegacyAnimationTrigger *v3; // rcx
  DirectComposition::CDeviceLock *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v4 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*(_QWORD *)(v1 + 48) + 24LL) + 96LL);
    DirectComposition::CDeviceLock::Enter(v4);
    ReleaseInterface<DirectComposition::CSharedAllocation>((char *)this + 16);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v4);
  }
  v3 = (DirectComposition::CLegacyAnimationTrigger *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    DirectComposition::CLegacyAnimationTrigger::Release(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
