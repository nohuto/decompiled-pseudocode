/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x1402A1E00
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1402F4A7C (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140349A9C (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFile @ 0x140723980 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B90 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryOpen @ 0x1407AC0F4 (FsRtlQueryOpen.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B4A78 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4D18 (FsRtlReleaseFileForCcFlush.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2)
{
  unsigned __int16 i; // ax
  __int64 v5; // r8

  for ( i = *(_WORD *)(a1 + 74); i; *(_WORD *)(a1 + 74) = i )
  {
    v5 = *(_QWORD *)(a1 + 80) + 32LL * i;
    if ( *(_BYTE *)(a1 + 4) == 0xF9 )
      *(_DWORD *)(a1 + 52) = 0;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v5 - 32);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(v5 - 24);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v5 - 8))(a1, a2, *(_QWORD *)(v5 - 16));
    if ( *(_BYTE *)(a1 + 4) == 0xF9 )
      a2 = *(_DWORD *)(a1 + 52);
    i = *(_WORD *)(a1 + 74) - 1;
  }
  return a2;
}
