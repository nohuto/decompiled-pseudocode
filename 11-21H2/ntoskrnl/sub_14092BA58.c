/*
 * XREFs of sub_14092BA58 @ 0x14092BA58
 * Callers:
 *     sub_14092C10C @ 0x14092C10C (sub_14092C10C.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14092BEF8 @ 0x14092BEF8 (sub_14092BEF8.c)
 *     sub_14092C054 @ 0x14092C054 (sub_14092C054.c)
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14092BA58(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // eax
  _OWORD *PoolWithTag; // rax
  __int64 v6; // rsi
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  const CHAR *v12; // r8
  struct _WORK_QUEUE_ITEM *v13; // rcx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 112);
  v16 = 0LL;
  *a2 = 1;
  *(_DWORD *)(a1 + 92) = 0x10000000;
  DbgPrintEx(5u, 3u, "DBGK: Creating full dump.  ComponentName %ws, Defer = %d\n", a1, (v2 >> 1) & 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x57676244u);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate an Io Control.\n");
    return (unsigned int)-1073741801;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  *(_QWORD *)(a1 + 128) = PoolWithTag;
  *(_DWORD *)PoolWithTag = 1;
  *((_DWORD *)PoolWithTag + 1) = 48;
  v8 = *(_DWORD *)(a1 + 88);
  if ( (v8 & 1) != 0 )
  {
    *((_DWORD *)PoolWithTag + 6) |= 4u;
    v8 = *(_DWORD *)(a1 + 88);
  }
  v9 = *((_DWORD *)PoolWithTag + 6);
  if ( (v8 & 4) != 0 )
    *(_DWORD *)(v6 + 28) |= 1u;
  *(_DWORD *)(v6 + 24) = v9 | 0x10;
  v10 = *(_QWORD *)(a1 + 104);
  v15 = 0LL;
  v11 = WerLiveKernelOpenDumpFile(v10, &v15);
  v7 = v11;
  if ( v11 < 0 )
  {
    v12 = "DBGK: WerLiveKernelOpenDumpFile failed. Status = 0x%X\n";
    goto LABEL_9;
  }
  *(_QWORD *)(v6 + 8) = v15;
  if ( (*(_DWORD *)(a1 + 112) & 2) == 0 || (*(_DWORD *)(v6 + 24) |= 8u, v7 = sub_14092BEF8(a1), v7 >= 0) )
  {
    v7 = sub_14092C054(a1);
    if ( v7 >= 0 )
    {
      v7 = sub_14093A0B8(
             *(_DWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             *(_QWORD *)(a1 + 48),
             *(_QWORD *)(a1 + 56),
             *(_QWORD *)(a1 + 64),
             v6,
             (__int64)&v16);
      if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
      {
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741802 )
        {
          v13 = *(struct _WORK_QUEUE_ITEM **)(a1 + 120);
          *(_QWORD *)(a1 + 136) = v16;
          ExQueueWorkItem(v13, DelayedWorkQueue);
          v7 = 0;
          *a2 = 0;
          return (unsigned int)v7;
        }
      }
      else if ( v7 >= 0 )
      {
        v11 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 104), 0LL);
        v7 = v11;
        if ( v11 >= 0 )
        {
          *(_DWORD *)(a1 + 112) |= 1u;
          return (unsigned int)v7;
        }
        v12 = "DBGK: DbgkpWerCaptureLiveFullDump: WerLiveKernelSubmitReport failed with status 0x%X\n";
LABEL_9:
        DbgPrintEx(5u, 0, v12, (unsigned int)v11);
        return (unsigned int)v7;
      }
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerCaptureLiveFullDump: IoCaptureLiveDump failed with status 0x%X\n",
        (unsigned int)v7);
    }
  }
  return (unsigned int)v7;
}
