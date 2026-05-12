/*
 * XREFs of RaidAdapterGetFirstUnit @ 0x1C0035AAC
 * Callers:
 *     StorEtwMiniportLogError @ 0x1C004510C (StorEtwMiniportLogError.c)
 *     StorpMarkDeviceFailed @ 0x1C0049684 (StorpMarkDeviceFailed.c)
 *     StorEtwMiniportLogByteStream @ 0x1C0068AAC (StorEtwMiniportLogByteStream.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0008708 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterGetFirstUnit(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int CurrentIrql; // ebp
  unsigned int i; // r14d
  _QWORD **v5; // rsi
  _QWORD *j; // r15
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  char (__fastcall *v9)(__int64 *, __int64); // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v8 = 0LL;
  v9 = RaidpAdapterEnumerateUnit;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < *(_DWORD *)(a1 + 736) )
    LOBYTE(CurrentIrql) = RaidAdapterAcquireInterruptLock(a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 192) + 16LL * i);
    for ( j = *v5; j != v5; j = (_QWORD *)*j )
    {
      if ( !v9(&v8, (__int64)j) )
        goto LABEL_9;
    }
  }
LABEL_9:
  if ( (unsigned int)(unsigned __int8)CurrentIrql < *(_DWORD *)(a1 + 736) )
    RaidAdapterReleaseInterruptLock(a1, CurrentIrql);
  if ( v8 )
    return v8 - 72;
  return v1;
}
