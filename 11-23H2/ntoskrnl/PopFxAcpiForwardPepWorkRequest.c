/*
 * XREFs of PopFxAcpiForwardPepWorkRequest @ 0x1405A11D8
 * Callers:
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x140312780 (IoAcquireRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 */

LONG __fastcall PopFxAcpiForwardPepWorkRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  LONG result; // eax
  int v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+34h] [rbp-24h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  int *v9; // [rsp+48h] [rbp-10h]

  v6 = 0;
  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 272), (PVOID)0x77466F50, &Src, 1u, 0x20u);
  if ( result >= 0 )
  {
    v6 = 0;
    v8 = 0LL;
    v5 = 0;
    v7 = *((_QWORD *)&PopFxPlatformInterface + 1);
    v9 = a2;
    ((void (__fastcall *)(int *))PopFxPlatformInterface)(&v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 276), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 280), 0, 0);
  }
  return result;
}
