/*
 * XREFs of sub_14092C358 @ 0x14092C358
 * Callers:
 *     sub_14092BC54 @ 0x14092BC54 (sub_14092BC54.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14092C164 @ 0x14092C164 (sub_14092C164.c)
 *     sub_14092C1F8 @ 0x14092C1F8 (sub_14092C1F8.c)
 */

__int64 __fastcall sub_14092C358(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ebx
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp+8h] BYREF

  FileHandle = 0LL;
  v2 = *(_QWORD *)(a1 + 104);
  IoStatusBlock = 0LL;
  v3 = WerLiveKernelOpenDumpFile(v2, &FileHandle);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v4 = sub_14092C164(a1);
    if ( v4 >= 0 )
    {
      v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, *(PVOID *)(a1 + 144), *(_DWORD *)(a1 + 152), 0LL, 0LL);
      v4 = v5;
      if ( v5 >= 0 )
      {
        v6 = sub_14092C1F8(a1, FileHandle);
        v4 = v6;
        if ( v6 < 0 )
          DbgPrintEx(5u, 0, "DBGK: Writing secondary data failed with Status 0x%X\n", (unsigned int)v6);
      }
      else
      {
        DbgPrintEx(5u, 0, "DBGK: Triage dump write failed with Status 0x%X\n", (unsigned int)v5);
      }
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerWriteTriageDump: WerLiveKernelOpenDumpFile failed, status 0x%X\n", (unsigned int)v3);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
