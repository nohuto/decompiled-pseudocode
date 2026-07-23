/*
 * XREFs of sub_140540798 @ 0x140540798
 * Callers:
 *     sub_1406DC120 @ 0x1406DC120 (sub_1406DC120.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     sub_14080B840 @ 0x14080B840 (sub_14080B840.c)
 *     sub_14092BA34 @ 0x14092BA34 (sub_14092BA34.c)
 *     sub_14092BED8 @ 0x14092BED8 (sub_14092BED8.c)
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     ObOpenObjectByPointerWithTag @ 0x140985170 (ObOpenObjectByPointerWithTag.c)
 */

__int64 __fastcall sub_140540798(__int64 a1)
{
  KPROCESSOR_MODE v2; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Status; // edi
  __int64 v6; // rax
  __int64 v7; // rsi
  void *v8; // rcx
  NTSTATUS v9; // eax
  PVOID v10; // r9
  const CHAR *v11; // r8
  void *v12; // rcx
  PVOID v13; // r12
  NTSTATUS v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  ULONG Tag[2]; // [rsp+20h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-10h] BYREF
  int FileInformation; // [rsp+90h] [rbp+40h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v23; // [rsp+A8h] [rbp+58h] BYREF

  FileInformation = 0;
  IoStatusBlock = 0LL;
  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !a1 )
    return 3221225485LL;
  if ( (unsigned __int8)sub_14080B840() )
  {
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  if ( v2 == 1 && (*(_DWORD *)(a1 + 56) & 4) != 0 && byte_140C09804 && !byte_140C31E42 )
    return 3221226324LL;
  FileHandle = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v23 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  if ( _InterlockedExchange(&dword_140C48CA0, 1) != 1 )
  {
    v6 = sub_14092BA34(0x30uLL);
    v7 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_OWORD *)(v6 + 16) = 0LL;
      *(_OWORD *)(v6 + 32) = 0LL;
      *(_DWORD *)v6 = 1;
      *(_DWORD *)(v6 + 4) = 48;
      v8 = *(void **)(a1 + 48);
      if ( v8
        && (v9 = ObReferenceObjectByHandleWithTag(
                   v8,
                   0x100001u,
                   (POBJECT_TYPE)ExEventObjectType,
                   v2,
                   0x57676244u,
                   &Object,
                   0LL),
            Status = v9,
            v9 < 0) )
      {
        v10 = *(PVOID *)(a1 + 48);
        v11 = "DBGK: Invalid event handle %p, status 0x%X\n";
      }
      else
      {
        v12 = *(void **)(a1 + 40);
        if ( !v12 )
        {
          Status = -1073741811;
          goto LABEL_41;
        }
        v9 = ObReferenceObjectByHandleWithTag(v12, 2u, (POBJECT_TYPE)IoFileObjectType, v2, 0x57676244u, &v23, 0LL);
        Status = v9;
        if ( v9 >= 0 )
        {
          v13 = v23;
          v9 = ObOpenObjectByPointerWithTag(
                 v23,
                 0x200u,
                 0LL,
                 2u,
                 (POBJECT_TYPE)IoFileObjectType,
                 0,
                 0x57676244u,
                 &FileHandle);
          Status = v9;
          if ( v9 >= 0 )
          {
            v14 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
            Status = v14;
            if ( v14 >= 0 )
            {
              Status = IoStatusBlock.Status;
              if ( IoStatusBlock.Status >= 0 )
              {
                if ( (FileInformation & 0x30) != 0 )
                {
                  *(_QWORD *)(v7 + 8) = FileHandle;
                  *(_QWORD *)(v7 + 16) = Object;
                  v15 = *(_DWORD *)(a1 + 56);
                  if ( (v15 & 4) != 0 )
                  {
                    *(_DWORD *)(v7 + 24) |= 4u;
                    v15 = *(_DWORD *)(a1 + 56);
                  }
                  if ( (v15 & 8) != 0 )
                    *(_DWORD *)(v7 + 24) |= 0x10u;
                  v16 = *(_DWORD *)(a1 + 60);
                  if ( (v16 & 1) != 0 )
                  {
                    *(_DWORD *)(v7 + 28) |= 1u;
                    v16 = *(_DWORD *)(a1 + 60);
                  }
                  if ( (v16 & 2) != 0 )
                    *(_DWORD *)(v7 + 28) |= 2u;
                  DbgPrintEx(5u, 3u, "DBGK: Calling IoCaptureLiveDump\n");
                  v17 = sub_14093A0B8(
                          *(_DWORD *)(a1 + 4),
                          *(_QWORD *)(a1 + 8),
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          *(_QWORD *)(a1 + 32),
                          v7,
                          0LL);
                  Status = v17;
                  if ( v17 < 0 )
                    DbgPrintEx(5u, 0, "DBGK: IoCaptureLiveDump failed, status 0x%X\n", v17);
                }
                else
                {
                  Status = -1073741811;
                  DbgPrintEx(5u, 1u, "DBGK: File was not opened for synchronous access.\n");
                }
              }
              else
              {
                DbgPrintEx(
                  5u,
                  1u,
                  "DBGK: ZwQueryInformationFile IoStatusBlock.Status is failure, status 0x%X\n",
                  (unsigned int)IoStatusBlock.Status);
              }
            }
            else
            {
              DbgPrintEx(5u, 1u, "DBGK: ZwQueryInformationFile failed for dump file, status 0x%X\n", (unsigned int)v14);
            }
            goto LABEL_41;
          }
          v10 = v13;
          v11 = "DBGK: ObOpenObjectByPointerWithTag failed for file %p, status 0x%X\n";
        }
        else
        {
          v10 = *(PVOID *)(a1 + 40);
          v11 = "DBGK: Invalid file handle %p, ObReferenceObjectByHandleWithTag returns status 0x%X\n";
        }
      }
      Tag[0] = v9;
      DbgPrintEx(5u, 1u, v11, v10, *(_QWORD *)Tag);
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Could not allocate IoLivedumpControl\n");
      Status = -1073741801;
    }
LABEL_41:
    if ( FileHandle )
      ZwClose(FileHandle);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x57676244u);
    if ( v23 )
      ObfDereferenceObjectWithTag(v23, 0x57676244u);
    if ( v7 )
      sub_14092BED8(v7);
    _InterlockedExchange(&dword_140C48CA0, 0);
    goto LABEL_50;
  }
  Status = -1073741267;
LABEL_50:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return Status;
}
