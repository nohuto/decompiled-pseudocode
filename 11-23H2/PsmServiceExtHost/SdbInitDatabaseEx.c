/*
 * XREFs of SdbInitDatabaseEx @ 0x180090A10
 * Callers:
 *     SdbInitDatabase @ 0x1800909C8 (SdbInitDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     SdbGetMergeStubPath @ 0x180051A70 (SdbGetMergeStubPath.c)
 *     SdbPdbIsRedirected @ 0x180051BA4 (SdbPdbIsRedirected.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     SdbCloseDatabaseRead @ 0x18008FD34 (SdbCloseDatabaseRead.c)
 *     SdbOpenDatabase @ 0x180090078 (SdbOpenDatabase.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x180090E44 (SdbpGetBinaryRuntimePlatform.c)
 *     SdbpGetCurrentOSKind @ 0x180090ED4 (SdbpGetCurrentOSKind.c)
 *     SdbGetPathSystemSdb @ 0x180092068 (SdbGetPathSystemSdb.c)
 *     SdbpInitializeMatchers @ 0x180096744 (SdbpInitializeMatchers.c)
 *     ShimExceptionHandler @ 0x180096F34 (ShimExceptionHandler.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098570 (AslFree.c)
 */

_WORD *__fastcall SdbInitDatabaseEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  _WORD *Heap; // rax
  __int64 v5; // rdx
  _WORD *v6; // rbx
  int v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // rax
  int MergeStubPath; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int16 v14; // [rsp+38h] [rbp-250h] BYREF
  unsigned __int64 v15[4]; // [rsp+40h] [rbp-248h] BYREF
  wchar_t v16[264]; // [rsp+60h] [rbp-228h] BYREF

  memset_0(v16, 0, 0x208uLL);
  v15[0] = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x6F8uLL);
  v6 = Heap;
  v15[1] = (unsigned __int64)Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseEx", 541, (unsigned int)"Failed to allocate sdb context");
    return 0LL;
  }
  Heap[292] = a3;
  v14 = a3;
  if ( (unsigned int)SdbGetPathSystemSdb(v16, v5, 1LL, &v14) )
  {
    v8 = 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpResolveInitSdbPath",
      471,
      (unsigned int)"SdbGetPathSystemSdb failed to get file path for SDB_SYSTEM");
    v8 = -1073741823;
  }
  if ( v8 < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbInitDatabaseEx",
      556,
      (unsigned int)"SdbpResolveInitSdbPath failed to resolve the sdb path [%x]",
      v8);
    v9 = (__int64 *)(v6 + 4);
LABEL_17:
    if ( *v9 )
      SdbCloseDatabaseRead(*v9);
    v13 = *((_QWORD *)v6 + 2);
    if ( v13 )
      SdbCloseDatabaseRead(v13);
    AslFree(NtCurrentPeb()->ProcessHeap, v6);
    if ( v15[0] )
      AslFree(NtCurrentPeb()->ProcessHeap, v15[0]);
    return 0LL;
  }
  *((_QWORD *)v6 + 1) = SdbOpenDatabase();
  v9 = (__int64 *)(v6 + 4);
  v15[2] = (unsigned __int64)(v6 + 4);
  v10 = *((_QWORD *)v6 + 1);
  if ( !v10 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseEx", 575, (unsigned int)"Unable to open main database %S", v16);
    goto LABEL_17;
  }
  *((_QWORD *)v6 + 7) = v10;
  *((_DWORD *)v6 + 16) = 3;
  *(_OWORD *)(v6 + 20) = *(_OWORD *)(v10 + 28);
  v15[3] = (unsigned __int64)(v6 + 18);
  *((_DWORD *)v6 + 9) |= 1u;
  MergeStubPath = SdbGetMergeStubPath(v15, (__int64)v16);
  if ( MergeStubPath == -1073741772 )
    goto LABEL_24;
  if ( MergeStubPath < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbInitDatabaseEx",
      608,
      (unsigned int)"Unable to find merge stub database for %S",
      v16);
    goto LABEL_17;
  }
  if ( (unsigned int)SdbPdbIsRedirected((const wchar_t ***)*v9, v16) )
  {
LABEL_24:
    *((_QWORD *)v6 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)v6 + 2) = SdbOpenDatabase();
    v12 = *((_QWORD *)v6 + 2);
    if ( !v12 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbInitDatabaseEx",
        637,
        (unsigned int)"Unable to open merge stub database %S",
        v16);
      goto LABEL_17;
    }
    *((_QWORD *)v6 + 15) = v12;
    *((_DWORD *)v6 + 32) = 3;
    *(_OWORD *)(v6 + 52) = *(_OWORD *)(v12 + 28);
    *((_DWORD *)v6 + 9) |= 4u;
  }
  if ( v15[0] )
    AslFree(NtCurrentPeb()->ProcessHeap, v15[0]);
  SdbpInitializeMatchers(v6);
  *((_DWORD *)v6 + 138) = SdbpGetBinaryRuntimePlatform(a3);
  SdbpGetCurrentOSKind(v6 + 284);
  return v6;
}
