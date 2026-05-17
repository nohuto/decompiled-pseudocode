/*
 * XREFs of TpWaitForTimer @ 0x18001F020
 * Callers:
 *     RtlDeleteTimer @ 0x18006FC50 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 *     TppWorkWait @ 0x18001F59C (TppWorkWait.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  char v8; // bp
  char v9; // si
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9

  result = TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v8 = 0;
    v9 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240, v5, v6, v7);
      v10 = *(_QWORD *)(a1 + 144);
      ++*(_BYTE *)(a1 + 355);
      v8 = TppCancelTimer(a1, (volatile signed __int64 *)(v10 + 112), 1);
      if ( *(_DWORD *)(a1 + 56) )
        v9 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    result = TppWorkWait(a1, a2);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240, v11, v12, v13);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v8 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
