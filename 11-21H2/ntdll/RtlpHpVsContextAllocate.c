/*
 * XREFs of RtlpHpVsContextAllocate @ 0x18002F3E4
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x18002E5E4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpVsContextAllocateInternal @ 0x180019520 (RtlpHpVsContextAllocateInternal.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

char *__fastcall RtlpHpVsContextAllocate(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // bl
  char *v5; // rdi
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]

  v7 = 0;
  v4 = a4;
  v8 = 0LL;
  v9 = 0LL;
  v5 = RtlpHpVsContextAllocateInternal(a1, a2, a3, a4, &v8, &v7);
  if ( v7 && (v4 & 1) == 0 )
    RtlReleaseSRWLockExclusive(*((volatile signed __int64 **)&v8 + 1));
  return v5;
}
