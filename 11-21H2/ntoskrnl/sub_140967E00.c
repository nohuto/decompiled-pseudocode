/*
 * XREFs of sub_140967E00 @ 0x140967E00
 * Callers:
 *     sub_1405A7608 @ 0x1405A7608 (sub_1405A7608.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_14041D020 @ 0x14041D020 (sub_14041D020.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_14092972C @ 0x14092972C (sub_14092972C.c)
 *     sub_140961390 @ 0x140961390 (sub_140961390.c)
 */

_QWORD *__fastcall sub_140967E00(_DWORD *Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rax
  _QWORD v7[24]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+170h] [rbp+70h] BYREF
  PVOID Object; // [rsp+178h] [rbp+78h] BYREF

  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( *((_BYTE *)CurrentThread + 586) == 1 || (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 )
  {
    _m_prefetchw(Process + 280);
    v3 = Process[280];
    do
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange(Process + 280, v3 | 0x4000000, v3);
    }
    while ( v4 != v3 );
    if ( (v3 & 0x4000000) == 0 )
    {
      if ( (*((_DWORD *)PsGetThreadProcess(CurrentThread) + 543) & 0x1000) != 0 )
      {
        ProcessId = PsGetProcessId((PEPROCESS)Process);
        DbgkWerCaptureLiveKernelDump(L"MemoryManager", 26, 36864LL, -1073739994LL, (__int64)ProcessId, 0LL, 0LL, 0LL, 0);
      }
      else
      {
        memset(v7, 0, 0x98uLL);
        LODWORD(v7[0]) = -1073739994;
        LODWORD(v7[3]) = 1;
        v7[4] = PsGetProcessId((PEPROCESS)Process);
        sub_14092972C((__int64)CurrentThread, 0xEu, (__int64)v7);
      }
      sub_1406C03F0((ULONG_PTR)Process, 0);
      if ( (int)sub_14041D020((__int64)&Handle, 0x1FFFFFLL) < 0 )
      {
        sub_1407D80A4((__int64)Process, 0xC0000725);
      }
      else
      {
        Object = 0LL;
        ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        sub_140961390((__int64)Object, 3);
        ObCloseHandle(Handle, 0);
        ObfDereferenceObject(Object);
      }
    }
  }
  else
  {
    sub_140961390((__int64)CurrentThread, 2);
  }
  return sub_1402AC800((__int64)CurrentThread);
}
