/*
 * XREFs of KiCheckForFreezeExecution @ 0x14020EA10
 * Callers:
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 * Callees:
 *     KiFreezeTargetExecution @ 0x14020E1D0 (KiFreezeTargetExecution.c)
 *     VslKernelShadowStackAssist @ 0x14054C100 (VslKernelShadowStackAssist.c)
 */

char __fastcall KiCheckForFreezeExecution(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  unsigned __int64 v8; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->IpiFrozen != 5 )
    return 0;
  KiFreezeTargetExecution(a1, a2);
  if ( KiResumeForReboot && a1 )
  {
    if ( *(_WORD *)(a1 + 368) != 16 )
    {
      *(_WORD *)(a1 + 368) = 16;
      *(_WORD *)(a1 + 392) = 24;
      *(_QWORD *)(a1 + 384) = CurrentPrcb->RspBase;
    }
    *(_DWORD *)(a1 + 376) &= ~0x200u;
    v5 = __readmsr(0xC0000101);
    *(_QWORD *)(a1 + 104) = ((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5;
    *(_QWORD *)(a1 + 360) = KiWaitForReboot;
    if ( (_BYTE)KiKernelCetEnabled )
      VslKernelShadowStackAssist(3, *(_QWORD *)(a1 + 216), 0, 0, (__int64)KiWaitForReboot, 4);
    if ( KiKvaShadow )
    {
      v6 = 7LL;
      v7 = (_QWORD *)(CurrentPrcb[-1].PrcbPad141[472] + 5168);
      do
      {
        v8 = __readcr3();
        v7[1] = v8;
        *v7 = __readmsr(0xC0000101);
        v7 += 64;
        --v6;
      }
      while ( v6 );
    }
  }
  return 1;
}
