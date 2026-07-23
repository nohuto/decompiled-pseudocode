/*
 * XREFs of sub_140758ED8 @ 0x140758ED8
 * Callers:
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140758ED8(__int64 a1, const void *a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rbp
  SIZE_T v4; // r15
  __int64 *v7; // r14
  __int64 *i; // rsi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  __int64 v11; // rax

  v3 = (volatile signed __int64 *)(a1 + 688);
  v4 = a3;
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  if ( (unsigned int)v4 <= 0x8000 && (unsigned int)(v4 + *(_DWORD *)(a1 + 324)) <= *(_DWORD *)(a1 + 4) )
  {
    v7 = (__int64 *)(a1 + 96);
    for ( i = *(__int64 **)(a1 + 96); i != v7; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
        goto LABEL_12;
    }
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(v4 + 24), 1651995717LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(a1 + 324) += v4;
      *(_DWORD *)(Pool2 + 20) = v4;
      memmove((void *)(Pool2 + 24), a2, v4);
      v11 = *v7;
      if ( *(__int64 **)(*v7 + 8) != v7 )
        __fastfail(3u);
      *(_QWORD *)v10 = v11;
      *(_QWORD *)(v10 + 8) = v7;
      *(_QWORD *)(v11 + 8) = v10;
      *v7 = v10;
      *(_BYTE *)(v10 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x8C0u);
    }
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  return sub_1402AFC00((ULONG_PTR)v3);
}
