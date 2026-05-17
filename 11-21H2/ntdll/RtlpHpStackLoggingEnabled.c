/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x180027750
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FF0F0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x180055544 (RtlpHpMetadataHeapCtxGet.c)
 */

_BOOL8 RtlpHpStackLoggingEnabled()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_18017AE98 & 1) == 0 || (dword_18017AE98 & 2) == 0 || !NtCurrentPeb()->ProcessHeap )
    return 0LL;
  v3 = RtlpHpEnvHandle;
  v1 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v3);
  return v2 != *v1;
}
