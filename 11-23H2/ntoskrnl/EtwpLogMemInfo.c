/*
 * XREFs of EtwpLogMemInfo @ 0x1405FE394
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140467E10 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x1409EEF88 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     MmQueryMemoryListInformation @ 0x1402F8BE8 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall EtwpLogMemInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  char v5; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v7[11]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v9; // [rsp+100h] [rbp+0h] BYREF
  int v10; // [rsp+108h] [rbp+8h]
  int v11; // [rsp+10Ch] [rbp+Ch]
  __int64 v12; // [rsp+110h] [rbp+10h]
  int v13; // [rsp+118h] [rbp+18h]
  int v14; // [rsp+11Ch] [rbp+1Ch]

  LODWORD(v6) = 0;
  memset(v7, 0, sizeof(v7));
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v5;
  v5 = 8;
  UserData.Size = 1;
  MmQueryMemoryListInformation(0LL, v7, 0xB0u, v4, &v6);
  v11 = 0;
  v14 = 0;
  v9 = (struct _EVENT_DATA_DESCRIPTOR *)v7;
  v10 = 176;
  v12 = a2;
  v13 = 32;
  if ( a1 )
  {
    EtwpLogKernelEvent((__int64)&v9, *(_QWORD *)(a1 + 1096), *(_DWORD *)a1, 2u, 0x270u, 0x401803u);
  }
  else
  {
    if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4544) & 0x80000) != 0 )
      EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO, 0LL, 3u, &UserData);
    EtwTraceKernelEvent((int)&v9, 2, 0x20080000u, 624, 4200451);
  }
}
