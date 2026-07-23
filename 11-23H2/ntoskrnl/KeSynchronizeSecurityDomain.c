/*
 * XREFs of KeSynchronizeSecurityDomain @ 0x140356B24
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PspCombineSecurityDomains @ 0x1407C6FDC (PspCombineSecurityDomains.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402C0450 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402C0540 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C0580 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402C05C0 (KiIpiSendPacket.c)
 *     KiSynchronizeSecurityDomainTarget @ 0x14036EE70 (KiSynchronizeSecurityDomainTarget.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeSynchronizeSecurityDomain(_KPROCESS *a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rbp
  int v4; // esi
  __int64 result; // rax
  __int64 v6; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  _DWORD v14[68]; // [rsp+30h] [rbp-138h] BYREF

  memset(&v14[2], 0, 0x100uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v8) = 4096;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14[0] = 2097153;
  memset(&v14[1], 0, 0x104uLL);
  KiCopyAffinityEx((__int64)v14, 0x20u, &a1->ActiveProcessors.Count);
  KeRemoveProcessorAffinityEx((unsigned __int16 *)v14, CurrentPrcb->Number);
  v4 = KeCountSetBitsAffinityEx((unsigned __int16 *)v14);
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
    KiSynchronizeSecurityDomainTarget(0LL, 0LL, 0LL, 0LL);
  if ( v4 )
  {
    KiIpiSendPacket(0, (int)v14, (__int64)KiSynchronizeSecurityDomainTarget, 1LL, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v6, (__int64)CurrentPrcb);
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
