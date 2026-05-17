/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x18003B0F0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180100200 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666B0 (RtlpHpMetadataHeapCtxGet.c)
 */

_BOOL8 __fastcall RtlpHpStackLoggingEnabled(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1801881E8 & 1) == 0 || (dword_1801881E8 & 2) == 0 || !NtCurrentPeb()->ProcessHeap )
    return 0LL;
  v4 = RtlpHpEnvHandle;
  v2 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v4, a1);
  return v3 != *v2;
}
