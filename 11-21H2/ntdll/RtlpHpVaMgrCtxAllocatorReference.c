/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x180055694
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1800555C0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x1800B1B08 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x18005572C (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  volatile signed __int64 *v4; // rbp
  unsigned int v6; // edi
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int16 v11; // ax
  __int64 v13; // r8
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (volatile signed __int64 *)(a1 + 2144);
  v6 = a3;
  RtlAcquireSRWLockExclusive(a1 + 2144, a2, a3, a4);
  v8 = v6 >> 20;
  v9 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v8, &v16);
  v10 = v9;
  if ( v9 )
  {
    v11 = *(_WORD *)(v9 + 42);
    if ( v11 == -1 )
      v10 = 0LL;
    else
      *(_WORD *)(v10 + 42) = v11 + 1;
  }
  else
  {
    v13 = v16;
    if ( v16 )
    {
      *(_BYTE *)(v16 + 46) &= ~1u;
      v14 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 32) = v14;
      *(_WORD *)(v13 + 40) = v8;
      *(_WORD *)(v13 + 42) = 1;
      v10 = v13;
      *(_QWORD *)(v13 + 24) = a1;
      LOBYTE(v14) = *(_BYTE *)(a2 + 8);
      *(_BYTE *)(v13 + 44) = (v13 - a1 - 2160) / 48;
      v15 = *(_BYTE *)(a2 + 12);
      *(_BYTE *)(v13 + 45) = v14;
      *(_BYTE *)(v13 + 46) = *(_BYTE *)(v13 + 46) & 0xE1 | (*(_DWORD *)(a2 + 4) != 0) | (2
                                                                                       * (*(_BYTE *)(a2 + 4) & 7 | (8 * (v15 & 1))));
      ++*(_DWORD *)(a1 + 2152);
    }
  }
  RtlReleaseSRWLockExclusive(v4);
  if ( v10 )
    return *(unsigned __int8 *)(v10 + 44);
  else
    return 0xFFFFFFFFLL;
}
