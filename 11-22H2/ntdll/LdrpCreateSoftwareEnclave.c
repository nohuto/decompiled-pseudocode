/*
 * XREFs of LdrpCreateSoftwareEnclave @ 0x1800D8BFC
 * Callers:
 *     LdrCreateEnclave @ 0x1800D8570 (LdrCreateEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 */

__int64 __fastcall LdrpCreateSoftwareEnclave(__int64 a1, __int64 a2, int a3)
{
  __int64 Heap; // rax
  __int64 v7; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 136LL);
  v7 = Heap;
  if ( !Heap )
    return 3221225626LL;
  *(_QWORD *)(Heap + 88) = 0LL;
  v9 = Heap + 16;
  *(_QWORD *)(Heap + 112) = 0LL;
  *(_QWORD *)(Heap + 72) = a1;
  *(_QWORD *)(Heap + 80) = a2;
  *(_DWORD *)(Heap + 56) = a3;
  v10 = (_QWORD *)(Heap + 96);
  v10[1] = v10;
  *v10 = v10;
  RtlInitializeCriticalSectionEx(v9, 0, 0);
  *(_DWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_DWORD *)(v7 + 60) = 1;
  RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
  v11 = (__int64 *)qword_180184AC8;
  if ( *(__int64 **)qword_180184AC8 != &LdrpEnclaveList )
    __fastfail(3u);
  *(_QWORD *)v7 = &LdrpEnclaveList;
  *(_QWORD *)(v7 + 8) = v11;
  *v11 = v7;
  qword_180184AC8 = v7;
  RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
  return 0LL;
}
