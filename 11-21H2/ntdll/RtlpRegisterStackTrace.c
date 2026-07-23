/*
 * XREFs of RtlpRegisterStackTrace @ 0x180117A64
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x180117CA0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x180002690 (RtlExtendMemoryZone.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1800A8B30 (RtlCompareMemory.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpInitializeStackTraceLog @ 0x180116598 (RtlpInitializeStackTraceLog.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18012B010 (RtlAllocateMemoryBlockLookaside.c)
 */

char *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  const void *v6; // rbp
  __int64 v7; // r14
  _DWORD *v8; // rdi
  char *v10; // r15
  char *v11; // rdi
  char *v12; // rbp
  _DWORD *v13; // rbx
  PVOID Block; // [rsp+78h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
  v6 = a2;
  if ( !RtlpHeapStackTraceLog )
  {
    RtlpInitializeStackTraceLog();
    v3 = RtlpHeapStackTraceLog;
    if ( !RtlpHeapStackTraceLog )
      return 0LL;
  }
  if ( !(_DWORD)v5 )
    return 0LL;
  v7 = v3 + 16 * (a3 % 0x191 + 1LL);
  v8 = *(_DWORD **)(v7 + 8);
  if ( v8 && v8[2] == a3 && v8[3] == (_DWORD)v5 && RtlCompareMemory(v6, v8 + 4, 8 * v5) == 8 * v5 )
    return (char *)v8;
  while ( 1 )
  {
    v10 = *(char **)v7;
    Block = v10;
    v11 = v10;
    if ( v10 )
      break;
LABEL_16:
    if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, 8 * v5 + 16, &Block) < 0
      && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
       || RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, 8 * v5 + 16, &Block) < 0) )
    {
      return 0LL;
    }
    v13 = Block;
    *((_DWORD *)Block + 2) = a3;
    v13[3] = v5;
    *(_QWORD *)v13 = v10;
    memmove(v13 + 4, v6, 8 * v5);
    if ( v10 == (char *)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)v7,
                          (signed __int64)v13,
                          (signed __int64)v10) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
      return (char *)Block;
    }
    RtlpInterlockedPushEntrySList(*((__int128 **)Block - 2), (_QWORD *)Block - 6);
  }
  v12 = v10;
  while ( *((_DWORD *)v11 + 2) != a3
       || *((_DWORD *)v11 + 3) != (_DWORD)v5
       || RtlCompareMemory(a2, v12 + 16, 8 * v5) != 8 * v5 )
  {
    v12 = *(char **)v11;
    Block = v12;
    v11 = v12;
    if ( !v12 )
    {
      v6 = a2;
      goto LABEL_16;
    }
  }
  *(_QWORD *)(v7 + 8) = v11;
  return v12;
}
