/*
 * XREFs of KeUserModeCallback @ 0x14076EA70
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStackEx @ 0x14026FB60 (MmDeleteKernelStackEx.c)
 *     MmCreateKernelStack @ 0x140271930 (MmCreateKernelStack.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14030B24C (KeGetProcessorNodeNumberByIndex.c)
 *     KeExitRetpoline @ 0x14034C27C (KeExitRetpoline.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x1404235D0 (KiCallUserMode.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MmCreateKernelShadowStack @ 0x14064567C (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x140645B14 (MmDeleteKernelShadowStack.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  ULONG_PTR v6; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v8; // al
  unsigned int ProcessorNodeNumberByIndex; // edi
  __int64 KernelStack; // rax
  _KERNEL_SHADOW_STACK_LIMIT v11; // rax
  SIZE_T v12; // rdx
  unsigned __int64 v13; // r13
  unsigned __int8 BpbRetpolineState; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r13d
  unsigned __int64 v19; // r14
  unsigned __int64 v21; // rax
  _KTRAP_FRAME *TrapFrame; // [rsp+30h] [rbp-88h]
  unsigned __int64 *p_Rsp; // [rsp+40h] [rbp-78h]
  __int64 v24; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 Rsp; // [rsp+58h] [rbp-60h]
  __int64 v27; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *v28; // [rsp+68h] [rbp-50h]
  unsigned __int8 *p_CallbackNestingLevel; // [rsp+70h] [rbp-48h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThread;
  if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  if ( CurrentThread->ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  p_CallbackNestingLevel = &CurrentThread->CallbackNestingLevel;
  v8 = CurrentThread->CallbackNestingLevel + 1;
  CurrentThread->CallbackNestingLevel = v8;
  if ( v8 > 0x1Fu )
  {
    v18 = -1073741571;
    goto LABEL_17;
  }
  ProcessorNodeNumberByIndex = (unsigned __int16)KeGetProcessorNodeNumberByIndex(CurrentThread->IdealProcessor);
  KernelStack = MmCreateKernelStack(0x10u, ProcessorNodeNumberByIndex, (unsigned __int64)CurrentThread);
  v6 = KernelStack;
  v27 = KernelStack;
  if ( !KernelStack )
  {
    v18 = -1073741801;
    goto LABEL_17;
  }
  *(_QWORD *)(KernelStack - 80) = KernelStack;
  *(_QWORD *)(KernelStack - 72) = KernelStack - (unsigned int)KeKernelStackSize;
  *(_QWORD *)(KernelStack - 64) = CurrentThread->StackBase;
  *(_QWORD *)(KernelStack - 56) = CurrentThread->StackLimit;
  *(_QWORD *)(KernelStack - 40) = CurrentThread->InitialStack;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v18 = MmCreateKernelShadowStack((unsigned __int64)CurrentThread, 2, 0x10u, ProcessorNodeNumberByIndex, &v25, &v24);
    if ( v18 < 0 )
      goto LABEL_17;
    *(_QWORD *)(v6 - 8) = CurrentThread->KernelShadowStackInitial;
    *(_QWORD *)(v6 - 32) = CurrentThread->KernelShadowStackBase;
    v11.AllFields = (unsigned __int64)CurrentThread->KernelShadowStackLimit;
  }
  else
  {
    *(_QWORD *)(KernelStack - 8) = 0LL;
    *(_QWORD *)(KernelStack - 32) = 0LL;
    *(_QWORD *)(KernelStack - 16) = 0LL;
    v11.AllFields = 0LL;
  }
  *(_KERNEL_SHADOW_STACK_LIMIT *)(v6 - 24) = v11;
  TrapFrame = CurrentThread->TrapFrame;
  p_Rsp = &TrapFrame->Rsp;
  Rsp = TrapFrame->Rsp;
  v30 = Rsp;
  v12 = ((a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) + 88;
  v13 = (Rsp - v12) & 0xFFFFFFFFFFFFFFF0uLL;
  ProbeForWrite((volatile void *)v13, v12, 0x10u);
  memmove((void *)(v13 + 88), a2, a3);
  *(_QWORD *)(v13 + 32) = v13 + 88;
  *(_DWORD *)(v13 + 40) = a3;
  *(_DWORD *)(v13 + 44) = a1;
  *(_QWORD *)(v13 + 72) = Rsp;
  *(_QWORD *)(v13 + 48) = TrapFrame->Rip;
  if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
  {
    v21 = __readmsr(0x6A0u);
    if ( (v21 & 1) != 0 )
      v5 = __readmsr(0x6A7u);
  }
  BpbRetpolineState = KeGetPcr()->Prcb.BpbRetpolineState;
  *p_Rsp = v13;
  v18 = KiCallUserMode(a4, a5, (int)v6 - 80, v6, v25, v24);
  if ( (BpbRetpolineState & 1) != 0 )
    KeExitRetpoline(v16, v15, v17);
  _mm_lfence();
  v19 = Rsp;
  if ( *((_DWORD *)CurrentThread->Teb + 1488) )
  {
    *p_Rsp -= 256LL;
    PsInvokeWin32Callout(7, 0LL, 0, 0LL);
  }
  if ( v5 )
    __writemsr(0x6A7u, v5);
  *p_Rsp = v19;
LABEL_17:
  --CurrentThread->CallbackNestingLevel;
  if ( v6 )
    MmDeleteKernelStackEx(v6, 4u, (__int64)CurrentThread);
  if ( v24 )
    MmDeleteKernelShadowStack(v25, 2, 4);
  return (unsigned int)v18;
}
