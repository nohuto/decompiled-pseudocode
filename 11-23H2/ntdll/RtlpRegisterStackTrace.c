/*
 * XREFs of RtlpRegisterStackTrace @ 0x180119350
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1801195A0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A4C80 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1800A5A20 (RtlCompareMemory.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlExtendMemoryZone @ 0x1800F6FE0 (RtlExtendMemoryZone.c)
 *     RtlpInitializeStackTraceLog @ 0x180117E08 (RtlpInitializeStackTraceLog.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180131010 (RtlAllocateMemoryBlockLookaside.c)
 */

_DWORD *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v7; // r14
  _DWORD *v8; // rdi
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _DWORD *v17; // rbx
  PVOID Block; // [rsp+68h] [rbp+20h] BYREF

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
  v7 = v3 + 16 * (a3 % 0x191 + 1LL);
  v8 = *(_DWORD **)(v7 + 8);
  if ( v8 && v8[2] == a3 && v8[3] == (_DWORD)v5 && RtlCompareMemory(a2, v8 + 4, 8 * v5) == 8 * v5 )
    return v8;
  v10 = 8 * v5;
  while ( 1 )
  {
    v11 = *(_QWORD **)v7;
    v12 = v11;
    Block = *(PVOID *)v7;
    if ( v11 )
      break;
LABEL_16:
    if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, v10 + 16, &Block) < 0
      && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
       || RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, v10 + 16, &Block) < 0) )
    {
      return 0LL;
    }
    v17 = Block;
    *((_DWORD *)Block + 2) = a3;
    v17[3] = v5;
    *(_QWORD *)v17 = v11;
    memmove(v17 + 4, a2, 8 * v5);
    if ( v11 == (_QWORD *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)v7,
                            (signed __int64)v17,
                            (signed __int64)v11) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
      return Block;
    }
    RtlpInterlockedPushEntrySList(*((__int128 **)Block - 2), (_QWORD *)Block - 6);
  }
  v13 = v11;
  v14 = v11;
  v15 = v11;
  v16 = v11;
  while ( *((_DWORD *)v15 + 2) != a3
       || *((_DWORD *)v16 + 3) != (_DWORD)v5
       || RtlCompareMemory(a2, v13 + 2, 8 * v5) != v10 )
  {
    v12 = (_QWORD *)*v12;
    Block = v12;
    v15 = v12;
    v13 = v12;
    v14 = v12;
    v16 = v12;
    if ( !v12 )
      goto LABEL_16;
  }
  *(_QWORD *)(v7 + 8) = v12;
  return v14;
}
