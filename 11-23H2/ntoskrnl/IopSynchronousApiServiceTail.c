/*
 * XREFs of IopSynchronousApiServiceTail @ 0x140687008
 * Callers:
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x1407B4DB0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1407CA290 (NtQueryEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140881B10 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945CC0 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14094AE60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B470 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x14094457C (IopCancelAlertedRequest.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSynchronousApiServiceTail(
        unsigned int a1,
        void *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        unsigned int *a5,
        _OWORD *a6)
{
  unsigned int v8; // edi

  v8 = a1;
  if ( a1 == 259 )
  {
    if ( KeWaitForSingleObject(a2, Executive, a4, 0, 0LL) == 192 )
      IopCancelAlertedRequest(a2, a3);
    v8 = *a5;
  }
  *a6 = *(_OWORD *)a5;
  ExFreePoolWithTag(a2, 0);
  return v8;
}
