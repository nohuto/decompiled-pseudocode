/*
 * XREFs of RtlpHpHeapExtendContext @ 0x180064110
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x180064100 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x1800473D0 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataCommit @ 0x180065ABC (RtlpHpMetadataCommit.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180080D00 (RtlAcquireReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rsi
  signed __int64 Value; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int128 v9; // xmm0
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  bool v12; // zf
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v16; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF

  v2 = a1 + 28;
  RtlAcquireReleaseSRWLockExclusive(a1 + 28);
  while ( 1 )
  {
    while ( 1 )
    {
      Value = a1[29].Value;
      if ( Value + a2 > a1[30].Value )
        break;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[29], Value + a2, Value) )
        return Value;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = a1[29].Value;
    v8 = a1[30].Value;
    if ( v7 + a2 > v8 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  v9 = *(_OWORD *)&a1->0;
  v10 = v7 - v8;
  BaseAddress = a1[30].Ptr;
  v11 = (v10 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v12 = (BYTE6(a1[3].Ptr) & 1) == 0;
  v16 = v11;
  if ( v12 )
  {
    *(_OWORD *)v15 = v9;
    v13 = RtlpHpAllocVA(&BaseAddress, &v16, 0LL, 4096, 4u, (__int128 *)v15);
    v11 = v16;
  }
  else
  {
    v14 = v9;
    v13 = RtlpHpMetadataCommit((_DWORD)a1, v8, (v10 + a2 + 4095) & 0xFFFFF000, (unsigned int)&v14, 1);
  }
  if ( v13 >= 0 )
  {
    a1[30].Value += v11;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[17], v11 >> 12);
    goto LABEL_10;
  }
  Value = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return Value;
}
