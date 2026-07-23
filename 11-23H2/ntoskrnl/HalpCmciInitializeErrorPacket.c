/*
 * XREFs of HalpCmciInitializeErrorPacket @ 0x140380284
 * Callers:
 *     HalpCmciInit @ 0x140A8A70C (HalpCmciInit.c)
 *     HalpInitializeCmc @ 0x140A8AD2C (HalpInitializeCmc.c)
 * Callees:
 *     HalpGetMcaPcrContext @ 0x1403804D4 (HalpGetMcaPcrContext.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x140380828 (HalpCmcInitializeErrorPacketContents.c)
 *     HalpMmAllocCtxAlloc @ 0x14039B000 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpCmciInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 McaPcrContext; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  v3 = 0LL;
  McaPcrContext = HalpGetMcaPcrContext(a2);
  if ( !*(_QWORD *)(McaPcrContext + 16) )
  {
    v3 = HalpMmAllocCtxAlloc(v4, 372LL);
    if ( !v3 )
      KeBugCheckEx(0xACu, 0x174uLL, 0xDA00uLL, 0LL, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v9) = 0x8000;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v9;
  }
  if ( v3 )
    *(_QWORD *)(McaPcrContext + 16) = v3;
  HalpCmcInitializeErrorPacketContents(*(_QWORD *)(McaPcrContext + 16));
  *(_OWORD *)(*(_QWORD *)(McaPcrContext + 16) + 32LL) = CMCI_NOTIFY_TYPE_GUID;
  *(_QWORD *)(McaPcrContext + 24) = a1;
  if ( (_DWORD)KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
