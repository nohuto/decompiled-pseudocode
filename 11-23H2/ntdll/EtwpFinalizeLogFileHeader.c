/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x18005B754
 * Callers:
 *     EtwpLogger @ 0x18005B0E0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1801253B0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x18005B9AC (EtwpAddReloggedHeaderExtensionEvents.c)
 *     EtwpAddProviderTrackingInfo @ 0x18005E3DC (EtwpAddProviderTrackingInfo.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A0F70 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A0FB0 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A1390 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A17D0 (ZwQueryVolumeInformationFile.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x1801262BC (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x18012692C (EtwpWriteRemainingCompressedData.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  NTSTATUS VolumeInformationFile; // esi
  unsigned int v7; // r15d
  __int64 Heap; // r14
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v15; // rdx
  int v16; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-21h] BYREF
  __int64 v18; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v20[16]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v21[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v22; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
  LODWORD(v17) = 0;
  v16 = 0;
  if ( v4 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 448) != a1 + 448
      || *(_QWORD *)(a1 + 464) != a1 + 464
      || *(_QWORD *)(a1 + 504)
      || (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 192);
    }
    else
    {
      VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 128), v19, v21, 24LL, 3);
      if ( VolumeInformationFile < 0 )
        goto LABEL_19;
      v7 = -v22 & (v22 + 7);
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
    if ( !Heap )
    {
      VolumeInformationFile = -1073741801;
      return RtlNtStatusToDosError(VolumeInformationFile);
    }
    v9 = *(_QWORD *)(a1 + 128);
    v18 = 0LL;
    VolumeInformationFile = NtReadFile(v9, 0LL, 0LL, 0LL, v19, Heap, v7, &v18, 0LL);
    if ( VolumeInformationFile < 0 )
      goto LABEL_18;
    v10 = *(_DWORD *)Heap;
    if ( v7 < *(_DWORD *)Heap )
      v10 = v7;
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 188);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 376);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 368);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 372);
      v11 = *(_DWORD *)(a1 + 308);
      if ( (v11 & 0x10000) != 0 )
      {
        if ( (v11 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, Heap, v10, v17, v16);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = MEMORY[0x7FFE0014];
      }
    }
    *(_DWORD *)(Heap + 48) = *(_DWORD *)(Heap + 4);
    EtwpAddReloggedHeaderExtensionEvents(a1, Heap, v10);
    EtwpAddProviderTrackingInfo(a1, Heap, v10);
    v12 = NtWriteFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, v19, Heap, v10, &v18, 0LL);
    VolumeInformationFile = v12;
    if ( a2 )
      goto LABEL_18;
    if ( v12 < 0 )
      goto LABEL_18;
    v13 = *(_DWORD *)(a1 + 308);
    if ( (v13 & 0x4000020) == 0 )
      goto LABEL_18;
    if ( (v13 & 0x4000000) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 344);
    }
    else
    {
      v15 = *(unsigned int *)(a1 + 192) * (unsigned __int64)*(unsigned int *)(a1 + 376);
      if ( v15 >= *(unsigned int *)(a1 + 304)
                * ((-(__int64)((*(_DWORD *)(a1 + 308) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
LABEL_18:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        goto LABEL_19;
      }
    }
    v17 = v15;
    if ( v15 )
      VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 128), v20, &v17, 8LL, 20);
    goto LABEL_18;
  }
  VolumeInformationFile = EtwpWriteRemainingCompressedData(a1, &v17, &v16);
  if ( VolumeInformationFile >= 0 )
  {
    *(_DWORD *)(a1 + 376) += v17;
    *(_DWORD *)(a1 + 372) += v16;
    goto LABEL_2;
  }
LABEL_19:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}
