/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x18008DB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int64 __fastcall TppStopWaitCallbackGeneration(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi
  int v7; // ebx
  signed __int64 result; // rax
  unsigned int v9; // ecx
  signed int v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 144);
  v5 = (volatile signed __int64 *)(a1 + 240);
  v7 = a2;
  RtlAcquireSRWLockExclusive(a1 + 240, a2, a3, a4);
  TppCancelWait(a1, (volatile signed __int64 *)(v4 + 112), v7 != 0 ? 2 : 0, &v10);
  ++*(_BYTE *)(a1 + 355);
  result = RtlReleaseSRWLockExclusive(v5);
  if ( v10 < 0 )
  {
    v9 = -v10;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v10);
    if ( (_DWORD)result == v9 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
