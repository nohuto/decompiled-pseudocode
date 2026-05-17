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

_DWORD *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  const void *v6; // rbp
  signed __int64 *v7; // r14
  _DWORD *v8; // rdi
  signed __int64 v10; // r15
  signed __int64 v11; // rdi
  signed __int64 v12; // rbp
  signed __int64 v13; // rbx
  signed __int64 v15; // [rsp+78h] [rbp+20h] BYREF

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
  v7 = (signed __int64 *)(v3 + 16 * (a3 % 0x191 + 1LL));
  v8 = (_DWORD *)v7[1];
  if ( v8 && v8[2] == a3 && v8[3] == (_DWORD)v5 && RtlCompareMemory(v6, v8 + 4, 8 * v5) == 8 * v5 )
    return v8;
  while ( 1 )
  {
    v10 = *v7;
    v15 = v10;
    v11 = v10;
    if ( v10 )
      break;
LABEL_16:
    if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, 8 * v5 + 16, &v15) < 0
      && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
       || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, 8 * v5 + 16, &v15) < 0) )
    {
      return 0LL;
    }
    v13 = v15;
    *(_DWORD *)(v15 + 8) = a3;
    *(_DWORD *)(v13 + 12) = v5;
    *(_QWORD *)v13 = v10;
    memmove((void *)(v13 + 16), v6, 8 * v5);
    if ( v10 == _InterlockedCompareExchange64(v7, v13, v10) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
      return (_DWORD *)v15;
    }
    RtlpInterlockedPushEntrySList(*(__int128 **)(v15 - 16), (_QWORD *)(v15 - 48));
  }
  v12 = v10;
  while ( *(_DWORD *)(v11 + 8) != a3
       || *(_DWORD *)(v11 + 12) != (_DWORD)v5
       || RtlCompareMemory(a2, (const void *)(v12 + 16), 8 * v5) != 8 * v5 )
  {
    v12 = *(_QWORD *)v11;
    v15 = v12;
    v11 = v12;
    if ( !v12 )
    {
      v6 = a2;
      goto LABEL_16;
    }
  }
  v7[1] = v11;
  return (_DWORD *)v12;
}
