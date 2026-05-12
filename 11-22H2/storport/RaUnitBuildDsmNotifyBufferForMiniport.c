/*
 * XREFs of RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0012E24
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00A1030 (RaUnitStorageDataSetManagementIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall RaUnitBuildDsmNotifyBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r15d
  __int64 Pool; // rax
  __int64 v15; // rax

  v4 = *(unsigned int **)(a2 + 24);
  v5 = 0;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v9 = (char *)v4 + v4[3];
  if ( *(_BYTE *)(a2 + 64) || *(_DWORD *)v9 < 0x1Cu || *(_DWORD *)v9 > v4[4] || *((_DWORD *)v9 + 2) != 1 )
    goto LABEL_23;
  v10 = *(_QWORD *)(v9 + 12) - *(_QWORD *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(v9 + 20) - *(_QWORD *)FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE.Data4;
  if ( !v10 )
  {
    v12 = 1;
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(v9 + 12) - *(_QWORD *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(v9 + 20) - *(_QWORD *)FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE.Data4;
  if ( !v11 )
  {
    v12 = 2;
    goto LABEL_12;
  }
  v15 = *(_QWORD *)(v9 + 12) - *(_QWORD *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE.Data1;
  if ( !v15 )
    v15 = *(_QWORD *)(v9 + 20) - *(_QWORD *)FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE.Data4;
  if ( v15 )
  {
LABEL_23:
    v5 = -1073741637;
    goto LABEL_15;
  }
  v12 = 3;
LABEL_12:
  v8 = ((v4[6] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 76;
  if ( v8 > 0xFFFFFFFF )
  {
    v5 = -1073741811;
  }
  else
  {
    Pool = RaidAllocatePool(64LL, (unsigned int)v8, 1918067026LL, *(_QWORD *)(a1 + 8));
    v7 = Pool;
    if ( Pool )
    {
      *(_DWORD *)(Pool + 16) = 1771296;
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 24) = v8 - 28;
      *(_DWORD *)(Pool + 20) = 0;
      *(_QWORD *)(Pool + 4) = 0x2020204D5344504DLL;
      *(_DWORD *)(Pool + 28) = 48;
      *(_DWORD *)(Pool + 32) = 1;
      *(_DWORD *)(Pool + 36) = *((_DWORD *)v9 + 1);
      *(_DWORD *)(Pool + 40) = v12;
      *(_QWORD *)(Pool + 44) = 0LL;
      *(_DWORD *)(Pool + 52) = 0;
      *(_DWORD *)(Pool + 56) = v4[6] >> 4;
      memmove((void *)(Pool + 60), (char *)v4 + v4[5], v4[6]);
    }
    else
    {
      v5 = -1073741670;
    }
  }
LABEL_15:
  *a4 = v8;
  *a3 = v7;
  return v5;
}
