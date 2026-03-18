/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x1402881A0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14028B12C (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14028D3BC (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406FE4F0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407F0748 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407F099C (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x1407F730C (FsRtlQueryOpen.c)
 * Callees:
 *     Feature_Servicing_FSRTLQueryOpen__private_IsEnabled @ 0x140417574 (Feature_Servicing_FSRTLQueryOpen__private_IsEnabled.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  char v5; // dl
  __int64 v6; // rsi
  int IsEnabled; // eax
  unsigned int v8; // ecx

  v2 = *(_WORD *)(a1 + 74);
  if ( v2 )
  {
    v5 = *(_BYTE *)(a1 + 4);
    do
    {
      v6 = *(_QWORD *)(a1 + 80) + 32LL * v2;
      if ( v5 == -7 )
      {
        IsEnabled = Feature_Servicing_FSRTLQueryOpen__private_IsEnabled();
        v8 = a2;
        if ( !IsEnabled )
          v8 = 0;
        *(_DWORD *)(a1 + 52) = v8;
      }
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v6 - 32);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(v6 - 24);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v6 - 8))(a1, a2, *(_QWORD *)(v6 - 16));
      v5 = *(_BYTE *)(a1 + 4);
      if ( v5 == -7 )
        a2 = *(_DWORD *)(a1 + 52);
      v2 = *(_WORD *)(a1 + 74) - 1;
      *(_WORD *)(a1 + 74) = v2;
    }
    while ( v2 );
  }
  return a2;
}
