/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x180090B9C
 * Callers:
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x180122230 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     EtwpAddProviderTrackingInfo @ 0x180008B70 (EtwpAddProviderTrackingInfo.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180090DF8 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A4130 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A4170 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A4550 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A4990 (ZwQueryVolumeInformationFile.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x1801230A0 (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x180123A3C (EtwpWriteRemainingCompressedData.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  int v6; // esi
  ULONG Length; // r15d
  unsigned int *Buffer; // r14
  void *v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  NTSTATUS v12; // eax
  int v13; // ecx
  unsigned __int64 v15; // rdx
  int v16; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 FileInformation; // [rsp+58h] [rbp-21h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v20; // [rsp+78h] [rbp-1h] BYREF
  _BYTE FsInformation[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v22; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
  LODWORD(FileInformation) = 0;
  v16 = 0;
  if ( !v4 )
  {
    v6 = EtwpWriteRemainingCompressedData(a1, &FileInformation, &v16);
    if ( v6 < 0 )
      goto LABEL_22;
    *(_DWORD *)(a1 + 376) += FileInformation;
    *(_DWORD *)(a1 + 372) += v16;
  }
  if ( *(_QWORD *)(a1 + 448) != a1 + 448
    || *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 504)
    || (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
  {
    Length = *(_DWORD *)(a1 + 192);
  }
  else
  {
    v6 = ZwQueryVolumeInformationFile(
           *(HANDLE *)(a1 + 128),
           &IoStatusBlock,
           FsInformation,
           0x18u,
           FileFsSizeInformation);
    if ( v6 < 0 )
      goto LABEL_22;
    Length = -v22 & (v22 + 7);
  }
  Buffer = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
  if ( !Buffer )
  {
    v6 = -1073741801;
    return RtlNtStatusToDosError(v6);
  }
  v9 = *(void **)(a1 + 128);
  ByteOffset.QuadPart = 0LL;
  v6 = NtReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v6 >= 0 )
  {
    v10 = *Buffer;
    if ( Length < *Buffer )
      v10 = Length;
    if ( !a2 )
    {
      Buffer[29] = *(_DWORD *)(a1 + 188);
      Buffer[35] = *(_DWORD *)(a1 + 376);
      Buffer[38] += *(_DWORD *)(a1 + 368);
      Buffer[95] += *(_DWORD *)(a1 + 372);
      v11 = *(_DWORD *)(a1 + 308);
      if ( (v11 & 0x10000) != 0 )
      {
        if ( (v11 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, (_DWORD)Buffer, v10, FileInformation, v16);
      }
      else
      {
        *((_QWORD *)Buffer + 15) = MEMORY[0x7FFE0014];
      }
    }
    Buffer[12] = Buffer[1];
    EtwpAddReloggedHeaderExtensionEvents(a1, Buffer, v10);
    EtwpAddProviderTrackingInfo(a1, (__int64)Buffer, v10);
    v12 = NtWriteFile(*(HANDLE *)(a1 + 128), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v10, &ByteOffset, 0LL);
    v6 = v12;
    if ( !a2 && v12 >= 0 )
    {
      v13 = *(_DWORD *)(a1 + 308);
      if ( (v13 & 0x4000020) != 0 )
      {
        if ( (v13 & 0x4000000) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 344);
          goto LABEL_31;
        }
        v15 = *(unsigned int *)(a1 + 192) * (unsigned __int64)*(unsigned int *)(a1 + 376);
        if ( v15 < *(unsigned int *)(a1 + 304)
                 * ((-(__int64)((*(_DWORD *)(a1 + 308) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
        {
LABEL_31:
          FileInformation = v15;
          if ( v15 )
            v6 = ZwSetInformationFile(*(HANDLE *)(a1 + 128), &v20, &FileInformation, 8u, FileEndOfFileInformation);
        }
      }
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
LABEL_22:
  if ( v6 )
    return RtlNtStatusToDosError(v6);
  return v2;
}
