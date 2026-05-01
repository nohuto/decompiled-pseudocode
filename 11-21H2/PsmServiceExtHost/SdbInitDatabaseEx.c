/*
 * XREFs of SdbInitDatabaseEx @ 0x180095D78
 * Callers:
 *     SdbInitDatabase @ 0x180095D30 (SdbInitDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     SdbCloseDatabaseRead @ 0x18009512C (SdbCloseDatabaseRead.c)
 *     SdbOpenDatabaseEx @ 0x180095474 (SdbOpenDatabaseEx.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x18009604C (SdbpGetBinaryRuntimePlatform.c)
 *     SdbpGetCurrentOSKind @ 0x1800960DC (SdbpGetCurrentOSKind.c)
 *     SdbGetPathSystemSdb @ 0x180097350 (SdbGetPathSystemSdb.c)
 *     SdbpInitializeMatchers @ 0x18009BBC4 (SdbpInitializeMatchers.c)
 *     ShimExceptionHandler @ 0x18009C3B0 (ShimExceptionHandler.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

_QWORD *__fastcall SdbInitDatabaseEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  _WORD *Heap; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  _WORD v14[8]; // [rsp+30h] [rbp-248h] BYREF
  _WORD *v15; // [rsp+40h] [rbp-238h]
  _BYTE v16[528]; // [rsp+50h] [rbp-228h] BYREF

  v14[4] = a3;
  memset_0(v16, 0, 0x208uLL);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x5F0uLL);
  v6 = Heap;
  v15 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseEx", 533, (unsigned int)"Failed to allocate sdb context");
    return 0LL;
  }
  Heap[288] = a3;
  v14[0] = a3;
  if ( !(unsigned int)SdbGetPathSystemSdb(v16, v5, 1LL, v14) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpResolveInitSdbPath",
      466,
      (unsigned int)"SdbGetPathSystemSdb failed to get file path for SDB_SYSTEM");
    v10 = "SdbpResolveInitSdbPath failed to resolve the sdb path [%x]";
    v11 = 548;
LABEL_8:
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseEx", v11, (_DWORD)v10);
    v13 = v6[1];
    if ( v13 )
      SdbCloseDatabaseRead(v13);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    return 0LL;
  }
  v6[1] = SdbOpenDatabaseEx((__int64)v16, v8, v9);
  v12 = v6[1];
  if ( !v12 )
  {
    v10 = "Unable to open main database %S";
    v11 = 567;
    goto LABEL_8;
  }
  v6[6] = v12;
  *((_DWORD *)v6 + 14) = 3;
  *((_OWORD *)v6 + 2) = *(_OWORD *)(v12 + 28);
  *((_DWORD *)v6 + 7) |= 1u;
  SdbpInitializeMatchers(v6);
  *((_DWORD *)v6 + 136) = SdbpGetBinaryRuntimePlatform(a3);
  SdbpGetCurrentOSKind(v6 + 70);
  return v6;
}
