/*
 * XREFs of PsspDumpThread @ 0x18012B4B0
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18012B150 (PsspCaptureThreadInformation.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x1800A2DC0 (ZwGetContextThread.c)
 *     PsspInitializeContextOrExtendedContext @ 0x18012B764 (PsspInitializeContextOrExtendedContext.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspDumpThread(
        __int64 *a1,
        __int16 a2,
        ULONG a3,
        int a4,
        int ThreadInformation,
        HANDLE ThreadHandle)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // r14d
  __int16 v10; // r13
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  NTSTATUS result; // eax
  HANDLE v16; // rsi
  struct _CONTEXT *v17; // rax
  ULONG ReturnLength; // [rsp+78h] [rbp+20h] BYREF

  v6 = *((_DWORD *)a1 + 3);
  v7 = *a1;
  v8 = (a4 + 15) & 0xFFFFFFF0;
  v10 = a4;
  v13 = v8 + 128;
  v14 = v6 + v8 + 128;
  if ( v14 < v6 )
    return -1073741675;
  if ( v14 > *((_DWORD *)a1 + 2) )
    return -1073741789;
  memset_thunk_772440563353939046((void *)v7, 0, 0x80uLL);
  v16 = ThreadHandle;
  result = ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, (PVOID)v7, 0x30u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( (a2 & 0x400) != 0
      && ZwQueryInformationThread(v16, ThreadLastSystemCall, (PVOID)(v7 + 48), 0x18u, &ReturnLength) < 0 )
    {
      *(_WORD *)(v7 + 56) = -1;
    }
    result = ZwQueryInformationThread(v16, ThreadTimes, (PVOID)(v7 + 72), 0x20u, &ReturnLength);
    if ( result >= 0 )
    {
      result = ZwQueryInformationThread(v16, ThreadQuerySetWin32StartAddress, (PVOID)(v7 + 104), 8u, &ReturnLength);
      if ( result >= 0 )
      {
        result = ZwQueryInformationThread(v16, ThreadIsTerminated, &ThreadInformation, 4u, &ReturnLength);
        if ( result >= 0 )
        {
          *(_WORD *)(v7 + 122) = (ThreadInformation != 0) | *(_WORD *)(v7 + 122) & 0xFFFE;
          result = ZwQueryInformationThread(v16, ThreadSuspendCount, &ThreadInformation, 4u, &ReturnLength);
          if ( result >= 0 )
          {
            *(_WORD *)(v7 + 120) = ThreadInformation;
            if ( (a2 & 0x100) != 0 )
            {
              *(_WORD *)(v7 + 122) &= 1u;
              *(_WORD *)(v7 + 122) |= 2 * v10;
              v17 = (struct _CONTEXT *)PsspInitializeContextOrExtendedContext((void *)(v7 + 128), v8, a3);
              if ( ZwGetContextThread(v16, v17) < 0 )
              {
                *(_WORD *)(v7 + 122) &= 1u;
                v13 = 128;
              }
            }
            *((_DWORD *)a1 + 3) += v13;
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)(v7 + 112) = MEMORY[0x7FFE0014];
            *a1 += v13;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
