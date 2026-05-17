/*
 * XREFs of TpWaitForWait @ 0x180070C30
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180070010 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18001E368 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     TppWorkWait @ 0x18001F59C (TppWorkWait.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, int a2)
{
  int v3; // ebx
  char v5; // bp
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v14; // ebx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v15 = 0;
  v5 = 0;
  result = TppWaitpValidateWait(a1, 0);
  if ( (_DWORD)result )
  {
    if ( a2 )
    {
      v10 = *(_QWORD *)(a1 + 144);
      RtlAcquireSRWLockExclusive(a1 + 240, v7, v8, v9);
      ++*(_BYTE *)(a1 + 355);
      TppCancelWait(a1, (volatile signed __int64 *)(v10 + 112), 2, &v15);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v3 = v15;
    }
    result = (__int64)TppWorkWait((_QWORD *)a1, a2);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240, v11, v12, v13);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v3 )
    {
      v14 = -v3;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v14);
      if ( (_DWORD)result == v14 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
