/*
 * XREFs of LdrpLogDllRelocationEtwEvent @ 0x1800890C4
 * Callers:
 *     LdrpRelocateImage @ 0x180088D94 (LdrpRelocateImage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

struct _PEB *__fastcall LdrpLogDllRelocationEtwEvent(
        const void **a1,
        _RTL_USER_PROCESS_PARAMETERS *a2,
        void *a3,
        void *a4)
{
  struct _PEB *result; // rax
  __int64 v9; // rbx
  __int64 v10; // r10
  unsigned int v11; // esi
  __int64 v12; // rdi

  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  v9 = 2147353476LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v10 = (__int64)result->SharedData + 554;
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( *(_BYTE *)v10 )
  {
    v11 = *(unsigned __int16 *)a1 + 64;
    result = (struct _PEB *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v11);
    v12 = (__int64)result;
    if ( result )
    {
      result->ProcessParameters = a2;
      result->SubSystemData = a3;
      *(_WORD *)&result->Padding0[2] = 5152;
      result->ProcessHeap = a4;
      memmove(&result->FastPebLock, a1[1], *(unsigned __int16 *)a1);
      *(_WORD *)(v12 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 56) = 0;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 554;
      NtTraceEvent(*(unsigned __int8 *)v9, 1026LL, v11 - 32, v12);
      return (struct _PEB *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
    }
  }
  return result;
}
