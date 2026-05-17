/*
 * XREFs of TpWaitForTimer @ 0x18002F9A0
 * Callers:
 *     RtlDeleteTimer @ 0x18004D210 (RtlDeleteTimer.c)
 * Callees:
 *     TppWorkWait @ 0x18002FA78 (TppWorkWait.c)
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x1800349B8 (TppTimerpValidateTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char v5; // r14
  char v6; // bp
  _BYTE *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8

  result = TppTimerpValidateTimer(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v5 = 0;
    v6 = 0;
    v7 = (_BYTE *)(a1 + 355);
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      v8 = *(_QWORD *)(a1 + 144);
      LOBYTE(v9) = 1;
      ++*v7;
      v5 = TppCancelTimer(a1, v8 + 112, v9);
      if ( *(_DWORD *)(a1 + 56) )
        v6 = 1;
      else
        --*v7;
      RtlReleaseSRWLockExclusive(a1 + 240);
    }
    result = TppWorkWait(a1, a2);
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      --*v7;
      result = RtlReleaseSRWLockExclusive(a1 + 240);
    }
    if ( v5 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
