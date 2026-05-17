/*
 * XREFs of TpWaitForWait @ 0x18004FD20
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18004C9D0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWorkWait @ 0x18002FC48 (TppWorkWait.c)
 *     TppCancelWait @ 0x180030818 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180031BDC (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, int a2)
{
  int v3; // ebx
  char v5; // r14
  __int64 result; // rax
  _BYTE *v7; // rsi
  __int64 v8; // rbx
  int v9; // ebx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v10 = 0;
  v5 = 0;
  result = TppWaitpValidateWait(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v7 = (_BYTE *)(a1 + 355);
    if ( a2 )
    {
      v8 = *(_QWORD *)(a1 + 144);
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      ++*v7;
      TppCancelWait(a1, v8 + 112, 2, &v10);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*v7;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v3 = v10;
    }
    result = (__int64)TppWorkWait((_QWORD *)a1, a2);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      --*v7;
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v3 )
    {
      v9 = -v3;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v9);
      if ( (_DWORD)result == v9 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
