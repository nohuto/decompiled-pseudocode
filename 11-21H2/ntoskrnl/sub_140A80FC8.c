/*
 * XREFs of sub_140A80FC8 @ 0x140A80FC8
 * Callers:
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 *     sub_140A805A8 @ 0x140A805A8 (sub_140A805A8.c)
 *     sub_140A805EC @ 0x140A805EC (sub_140A805EC.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x14025D2A0 (KeExpandKernelStackAndCallout.c)
 *     sub_1405E47F4 @ 0x1405E47F4 (sub_1405E47F4.c)
 *     sub_140A80F90 @ 0x140A80F90 (sub_140A80F90.c)
 */

unsigned __int64 __fastcall sub_140A80FC8(__int64 a1)
{
  unsigned __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !qword_140C1B2D8 || (qword_140D01450 & 0x400000) != 0 )
    return 0LL;
  v1 = qword_140C1B2D8
     + ((unsigned __int64)(_InterlockedIncrement(&dword_140C1B2E0) & (unsigned int)(dword_140C0C84C - 1)) << 7);
  *(_QWORD *)v1 = a1;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v1 + 8) = CurrentThread;
  *(_DWORD *)(v1 + 16) = *((_DWORD *)CurrentThread + 121);
  LOBYTE(CurrentThread) = KeGetCurrentIrql();
  *(_BYTE *)(v1 + 20) = (_BYTE)CurrentThread;
  if ( (unsigned __int8)CurrentThread > 1u || (unsigned int)sub_1405E47F4() )
  {
    sub_140A80F90((PVOID *)v1);
  }
  else if ( KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)sub_140A80F90, (PVOID)v1, 0xE30uLL) < 0 )
  {
    *(_QWORD *)(v1 + 24) = 0LL;
  }
  return v1;
}
