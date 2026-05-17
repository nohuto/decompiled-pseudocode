/*
 * XREFs of RtlpRegisterStackTrace @ 0x180119380
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1801195D0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A4C80 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1800A5A20 (RtlCompareMemory.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlExtendMemoryZone @ 0x1800F6FE0 (RtlExtendMemoryZone.c)
 *     RtlpInitializeStackTraceLog @ 0x180117E38 (RtlpInitializeStackTraceLog.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180131010 (RtlAllocateMemoryBlockLookaside.c)
 */

_DWORD *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  signed __int64 *v7; // r14
  _DWORD *v8; // rdi
  __int64 v10; // rbp
  signed __int64 v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  signed __int64 v17; // rbx
  _QWORD *v18; // [rsp+68h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
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
  if ( v8 && v8[2] == a3 && v8[3] == (_DWORD)v5 && RtlCompareMemory(a2, v8 + 4, 8 * v5) == 8 * v5 )
    return v8;
  v10 = 8 * v5;
  while ( 1 )
  {
    v11 = *v7;
    v12 = (_QWORD *)v11;
    v18 = (_QWORD *)*v7;
    if ( v11 )
      break;
LABEL_16:
    if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, v10 + 16, &v18) < 0
      && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
       || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, v10 + 16, &v18) < 0) )
    {
      return 0LL;
    }
    v17 = (signed __int64)v18;
    *((_DWORD *)v18 + 2) = a3;
    *(_DWORD *)(v17 + 12) = v5;
    *(_QWORD *)v17 = v11;
    memmove((void *)(v17 + 16), a2, 8 * v5);
    if ( v11 == _InterlockedCompareExchange64(v7, v17, v11) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
      return v18;
    }
    RtlpInterlockedPushEntrySList((__int128 *)*(v18 - 2), v18 - 6);
  }
  v13 = (_QWORD *)v11;
  v14 = (_QWORD *)v11;
  v15 = (_QWORD *)v11;
  v16 = (_QWORD *)v11;
  while ( *((_DWORD *)v15 + 2) != a3
       || *((_DWORD *)v16 + 3) != (_DWORD)v5
       || RtlCompareMemory(a2, v13 + 2, 8 * v5) != v10 )
  {
    v12 = (_QWORD *)*v12;
    v18 = v12;
    v15 = v12;
    v13 = v12;
    v14 = v12;
    v16 = v12;
    if ( !v12 )
      goto LABEL_16;
  }
  v7[1] = (signed __int64)v12;
  return v14;
}
