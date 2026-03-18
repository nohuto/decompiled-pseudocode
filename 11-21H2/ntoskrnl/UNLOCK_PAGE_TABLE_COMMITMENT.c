/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14030B538
 * Callers:
 *     MmAssignProcessToJob @ 0x140682D84 (MmAssignProcessToJob.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140709A08 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x14079EF3C (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall UNLOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r9d
  _QWORD *v10; // rax

  v3 = a2 + 1232;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 1232);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&CurrentThread[1].Process;
  v7 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v7
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v8 = (unsigned int)(v8 + 1);
    p_Process += 96;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_18;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v8, v7);
      _disable();
    }
    v9 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    LOBYTE(v10) = p_Process[16];
    CurrentThread->AbEntrySummary |= 1 << (char)v10;
    _enable();
    if ( v9 )
      LOBYTE(v10) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v3, v9);
    goto LABEL_15;
  }
LABEL_18:
  LODWORD(v10) = *((_DWORD *)&CurrentThread->0 + 1);
  if ( ((unsigned int)v10 & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
  _enable();
LABEL_15:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v10 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v10 != v10 )
      LOBYTE(v10) = KiCheckForKernelApcDelivery();
  }
  return (char)v10;
}
