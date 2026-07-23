/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x1403CE7F8
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CE794 (KeSetIdealProcessorThreadByNumber.c)
 *     MiRestoreIdealProcessorThread @ 0x1406670B4 (MiRestoreIdealProcessorThread.c)
 *     MiSetIdealProcessorThread @ 0x1406670DC (MiSetIdealProcessorThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiSetIdealProcessorThread @ 0x1403CE96C (KiSetIdealProcessorThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405FCE20 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v3; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  bool v9; // si
  int v10; // ebp
  __int64 v11; // r9
  unsigned int v12; // esi
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rax
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0;
  v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v15) = 4;
    if ( CurrentIrql != 2 )
      v15 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (_DWORD *)((unsigned int)v15 | SchedulerAssist[5]);
    SchedulerAssist[5] = (_DWORD)a3;
  }
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(_DWORD *)(a1 + 588);
  v8 = *(_DWORD *)(a1 + 196);
  v9 = (*(_DWORD *)(a1 + 116) & 8) != 0 && (struct _KTHREAD *)a1 == KeGetCurrentThread();
  LOBYTE(a3) = v9;
  v10 = KiSetIdealProcessorThread(a1, a2, a3, &v21);
  if ( v10 >= 0 && !v9 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  v11 = *(unsigned int *)(a1 + 588);
  v12 = *(_DWORD *)(a1 + 196);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v7, v11);
    if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v8, v12);
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v3 )
    *v3 = v21;
  return (unsigned int)v10;
}
