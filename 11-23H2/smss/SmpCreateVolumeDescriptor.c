/*
 * XREFs of SmpCreateVolumeDescriptor @ 0x14000CE94
 * Callers:
 *     SmpCreateVolumeDescriptors @ 0x14000CCF8 (SmpCreateVolumeDescriptors.c)
 * Callees:
 *     SmpGetVolumeDiskNumber @ 0x14000D634 (SmpGetVolumeDiskNumber.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x14000D6CC (RtlQueryVolumeDiskSpeedPolicy.c)
 *     SmpIsVolumeOnSCMDevice @ 0x14000D77C (SmpIsVolumeOnSCMDevice.c)
 *     SmpIsVhdVolume @ 0x14000D820 (SmpIsVhdVolume.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

int __fastcall SmpCreateVolumeDescriptor(unsigned __int16 a1, struct _UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  __int64 v4; // rsi
  NTSTATUS v5; // r8d
  __int64 *Heap; // rax
  __int64 v7; // rbx
  bool v8; // zf
  _DWORD *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  int v16; // et2
  __int64 v17; // rcx
  signed __int32 v18; // eax
  int v19; // et2
  signed __int32 v20; // eax
  int v21; // et2
  signed __int32 v22; // eax
  int v23; // et2
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  int v26; // [rsp+38h] [rbp-31h] BYREF
  int v27; // [rsp+3Ch] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-21h] BYREF
  int v30; // [rsp+4Ch] [rbp-1Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v33[2]; // [rsp+90h] [rbp+27h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+37h]
  unsigned int v35; // [rsp+A4h] [rbp+3Bh]

  Handle = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v4 = a1;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v5 < 0 )
  {
    v15 = _InterlockedExchangeAdd(SmpGlobalLog, 1u);
    v16 = (v15 + 1) % 64;
    LODWORD(Heap) = (v15 + 1) / 64;
    v17 = 2LL * v16;
    SmpGlobalLog[4 * v16 + 2] = 1359;
LABEL_32:
    SmpGlobalLog[2 * v17 + 3] = v5;
    *(_QWORD *)&SmpGlobalLog[2 * v17 + 4] = v4;
    goto LABEL_23;
  }
  LODWORD(Heap) = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation);
  v5 = (int)Heap;
  if ( (int)Heap < 0 )
  {
    v20 = _InterlockedExchangeAdd(SmpGlobalLog, 1u);
    v21 = (v20 + 1) % 64;
    LODWORD(Heap) = (v20 + 1) / 64;
    v17 = 2LL * v21;
    SmpGlobalLog[4 * v21 + 2] = 1381;
    goto LABEL_32;
  }
  if ( (v30 & 0x17) != 0 )
    goto LABEL_23;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u);
  if ( v5 < 0 )
  {
    v22 = _InterlockedExchangeAdd(SmpGlobalLog, 1u);
    v23 = (v22 + 1) % 64;
    LODWORD(Heap) = (v22 + 1) / 64;
    v17 = 2LL * v23;
    SmpGlobalLog[4 * v23 + 2] = 1427;
    goto LABEL_32;
  }
  v5 = NtQueryVolumeInformationFile(Handle, &IoStatusBlock, v33, 0x18u, FileFsSizeInformation);
  if ( v5 < 0 )
  {
    v18 = _InterlockedExchangeAdd(SmpGlobalLog, 1u);
    v19 = (v18 + 1) % 64;
    LODWORD(Heap) = (v18 + 1) / 64;
    v17 = 2LL * v19;
    SmpGlobalLog[4 * v19 + 2] = 1449;
    goto LABEL_32;
  }
  Heap = (__int64 *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x30uLL);
  v7 = (__int64)Heap;
  if ( !Heap )
    goto LABEL_23;
  v8 = (_WORD)v4 == (unsigned __int16)SmpOsVolumeLetter;
  v9 = Heap + 2;
  *((_WORD *)Heap + 14) = v4;
  *((_DWORD *)Heap + 6) = v30;
  if ( v8 )
  {
    *v9 |= 1u;
    SmpOsVolumeDescriptor = (__int64)Heap;
  }
  if ( (int)RtlQueryVolumeDiskSpeedPolicy(FileHandle, &v26) >= 0 && v26 >= 20 )
    *v9 |= 4u;
  if ( (unsigned __int8)SmpIsVolumeOnSCMDevice(FileHandle) )
    *v9 |= 0x40u;
  v10 = v33[1] * v34 * (unsigned __int64)v35;
  *(_QWORD *)(v7 + 32) = v10;
  *(_QWORD *)(v7 + 40) = v33[0] * v34 * (unsigned __int64)v35;
  if ( v10 <= 0x2000000 )
    v11 = 0LL;
  else
    v11 = v10 - 0x2000000;
  *(_QWORD *)(v7 + 32) = v11;
  if ( (unsigned __int8)SmpIsVhdVolume(FileHandle) )
    *v9 |= 2u;
  if ( (int)SmpGetVolumeDiskNumber(FileHandle, &v27) >= 0 )
  {
    v12 = v27;
    *v9 |= 8u;
    *(_DWORD *)(v7 + 20) = v12;
  }
  Heap = &SmpVolumeDescriptorList;
  if ( (*(_BYTE *)v9 & 1) == 0 )
  {
    v13 = (__int64 *)qword_14002BCB8;
    if ( *(__int64 **)qword_14002BCB8 == &SmpVolumeDescriptorList )
    {
      *(_QWORD *)v7 = &SmpVolumeDescriptorList;
      *(_QWORD *)(v7 + 8) = v13;
      *v13 = v7;
      qword_14002BCB8 = v7;
      goto LABEL_23;
    }
LABEL_36:
    __fastfail(3u);
  }
  v14 = SmpVolumeDescriptorList;
  if ( *(__int64 **)(SmpVolumeDescriptorList + 8) != &SmpVolumeDescriptorList )
    goto LABEL_36;
  *(_QWORD *)v7 = SmpVolumeDescriptorList;
  *(_QWORD *)(v7 + 8) = &SmpVolumeDescriptorList;
  *(_QWORD *)(v14 + 8) = v7;
  SmpVolumeDescriptorList = v7;
LABEL_23:
  if ( FileHandle )
    LODWORD(Heap) = NtClose(FileHandle);
  if ( Handle )
    LODWORD(Heap) = NtClose(Handle);
  return (int)Heap;
}
