/*
 * XREFs of LdrpCreateSoftwareEnclave @ 0x1800D88EC
 * Callers:
 *     LdrCreateEnclave @ 0x1800D8270 (LdrCreateEnclave.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpCreateSoftwareEnclave(__int64 a1, __int64 a2, int a3)
{
  char *Heap; // rax
  __int64 v7; // rbx
  _RTL_CRITICAL_SECTION *v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11; // rax

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v7 = (__int64)Heap;
  if ( !Heap )
    return 3221225626LL;
  *((_QWORD *)Heap + 11) = 0LL;
  v9 = (_RTL_CRITICAL_SECTION *)(Heap + 16);
  *((_QWORD *)Heap + 14) = 0LL;
  *((_QWORD *)Heap + 9) = a1;
  *((_QWORD *)Heap + 10) = a2;
  *((_DWORD *)Heap + 14) = a3;
  v10 = Heap + 96;
  v10[1] = v10;
  *v10 = v10;
  RtlInitializeCriticalSectionEx(v9, 0, 0);
  *(_DWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_DWORD *)(v7 + 60) = 1;
  RtlEnterCriticalSection(&LdrpEnclaveListLock);
  v11 = (__int64 *)qword_18017A888;
  if ( *(PVOID **)qword_18017A888 != &LdrpEnclaveList )
    __fastfail(3u);
  *(_QWORD *)v7 = &LdrpEnclaveList;
  *(_QWORD *)(v7 + 8) = v11;
  *v11 = v7;
  qword_18017A888 = v7;
  RtlLeaveCriticalSection(&LdrpEnclaveListLock);
  return 0LL;
}
