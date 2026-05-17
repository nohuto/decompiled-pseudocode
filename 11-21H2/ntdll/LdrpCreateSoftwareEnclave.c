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
  __int64 Heap; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 *v12; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 136LL);
  v8 = Heap;
  if ( !Heap )
    return 3221225626LL;
  *(_QWORD *)(Heap + 88) = 0LL;
  v10 = Heap + 16;
  *(_QWORD *)(Heap + 112) = 0LL;
  *(_QWORD *)(Heap + 72) = a1;
  *(_QWORD *)(Heap + 80) = a2;
  *(_DWORD *)(Heap + 56) = a3;
  v11 = (_QWORD *)(Heap + 96);
  v11[1] = v11;
  *v11 = v11;
  RtlInitializeCriticalSectionEx(v10, 0LL, 0LL, v7);
  *(_DWORD *)(v8 + 64) = 0;
  *(_QWORD *)(v8 + 120) = 0LL;
  *(_QWORD *)(v8 + 128) = 0LL;
  *(_DWORD *)(v8 + 60) = 1;
  RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
  v12 = (__int64 *)qword_18017A888;
  if ( *(__int64 **)qword_18017A888 != &LdrpEnclaveList )
    __fastfail(3u);
  *(_QWORD *)v8 = &LdrpEnclaveList;
  *(_QWORD *)(v8 + 8) = v12;
  *v12 = v8;
  qword_18017A888 = v8;
  RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
  return 0LL;
}
