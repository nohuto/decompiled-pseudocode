/*
 * XREFs of RtlpHpReallocMove @ 0x18008E8AC
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x18008E80C (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpHpExtrasSetPresent @ 0x180045BC0 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpAllocateHeapInternal @ 0x180066E14 (RtlpHpAllocateHeapInternal.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

unsigned __int64 __fastcall RtlpHpReallocMove(char *a1, const void *a2, __int64 a3, unsigned int a4)
{
  void *v8; // rax
  unsigned __int64 v9; // rsi
  size_t v10; // r8
  __int64 v12; // rdx
  unsigned __int8 *v13; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v8 = (void *)RtlpHpAllocateHeapInternal(a1, *(_QWORD *)(a3 + 24), *(_QWORD *)(a3 + 32), a4, &v15);
  v9 = (unsigned __int64)v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 24) )
      v10 = *(_QWORD *)(a3 + 24);
    memmove(v8, a2, v10);
    if ( *(_DWORD *)(a3 + 16) )
    {
      v12 = (__int64)a2 + *(_QWORD *)a3 + 16;
      if ( (a4 & 0x10000000) == 0 )
        v12 = (__int64)a2 + *(_QWORD *)a3;
      v13 = (unsigned __int8 *)((v12 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = v9 + *(_QWORD *)(a3 + 24) + 16;
      if ( (a4 & 0x10000000) == 0 )
        v14 = v9 + *(_QWORD *)(a3 + 24);
      memmove((void *)((v14 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v13, 16 * (v13[3] + 1LL));
      RtlpHpExtrasSetPresent((__int64)a1, v9, a4);
    }
    RtlpHpFreeHeap(a1, (unsigned __int64)a2, a4 & 0x11000001, 0LL, 0LL);
  }
  return v9;
}
