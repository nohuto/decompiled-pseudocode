/*
 * XREFs of RtlpHpHeapExtendContext @ 0x180059290
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x180059280 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x180022888 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataCommit @ 0x180056AF0 (RtlpHpMetadataCommit.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800854A0 (RtlAcquireReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(unsigned __int64 a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rsi
  signed __int64 v5; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  bool v12; // zf
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v16; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF

  v2 = (_RTL_SRWLOCK *)(a1 + 224);
  RtlAcquireReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 224));
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 232);
      if ( (unsigned __int64)(v5 + a2) > *(_QWORD *)(a1 + 240) )
        break;
      if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 232), v5 + a2, v5) )
        return v5;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = *(_QWORD *)(a1 + 232);
    v8 = *(_QWORD *)(a1 + 240);
    if ( v7 + a2 > v8 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  v9 = *(_OWORD *)a1;
  v10 = v7 - v8;
  BaseAddress = *(PVOID *)(a1 + 240);
  v11 = (v10 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v12 = (*(_BYTE *)(a1 + 30) & 1) == 0;
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
    v13 = RtlpHpMetadataCommit(a1, v8, (v10 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL, &v14, 1);
  }
  if ( v13 >= 0 )
  {
    *(_QWORD *)(a1 + 240) += v11;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), v11 >> 12);
    goto LABEL_10;
  }
  v5 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v5;
}
