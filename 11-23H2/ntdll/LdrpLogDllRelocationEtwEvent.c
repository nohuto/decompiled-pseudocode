/*
 * XREFs of LdrpLogDllRelocationEtwEvent @ 0x1800DAFCC
 * Callers:
 *     LdrpRelocateImage @ 0x180086268 (LdrpRelocateImage.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

struct _PEB *__fastcall LdrpLogDllRelocationEtwEvent(
        const void **a1,
        _RTL_USER_PROCESS_PARAMETERS *a2,
        void *a3,
        void *a4)
{
  struct _PEB *result; // rax
  __int64 v9; // r10
  __int64 v10; // rdi

  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v9 = (__int64)result->SharedData + 554;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    result = (struct _PEB *)RtlAllocateHeap(
                              (__int64)NtCurrentPeb()->ProcessHeap,
                              NtdllBaseTag + 1572864,
                              (unsigned int)*(unsigned __int16 *)a1 + 64);
    v10 = (__int64)result;
    if ( result )
    {
      result->ProcessParameters = a2;
      result->SubSystemData = a3;
      *(_WORD *)&result->Padding0[2] = 5152;
      result->ProcessHeap = a4;
      memmove(&result->FastPebLock, a1[1], *(unsigned __int16 *)a1);
      *(_WORD *)(v10 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 56) = 0;
      RtlGetCurrentServiceSessionId();
      NtTraceEvent();
      return (struct _PEB *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  return result;
}
