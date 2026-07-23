/*
 * XREFs of WbSetTrapFrame @ 0x140763238
 * Callers:
 *     sub_140762A5C @ 0x140762A5C (sub_140762A5C.c)
 *     WbHeapExecuteCall @ 0x140762E00 (WbHeapExecuteCall.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     PspSetContextThreadInternal @ 0x1407707E0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407709C4 (PspGetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x140A4DEF0 (WbSetWowTrapFrame.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int ContextThreadInternal; // edi
  struct _KTHREAD *v7; // rax
  bool v8; // zf
  __int16 v10; // ax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30]
    && ((v10 = WORD2(Process[2].Affinity.StaticBitmap[20]), v10 == 332) || v10 == 452) )
  {
    return (unsigned int)WbSetWowTrapFrame(a1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    *(_DWORD *)(a1 + 96) = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)a1 + 48, 0, 1, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 16);
      ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), 3);
    }
    v7 = KeGetCurrentThread();
    v8 = v7->SpecialApcDisable++ == -1;
    if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)ContextThreadInternal;
}
