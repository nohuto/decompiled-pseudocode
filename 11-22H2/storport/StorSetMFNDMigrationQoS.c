/*
 * XREFs of StorSetMFNDMigrationQoS @ 0x1C00AEEC0
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C003A09C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetMigrationQoS @ 0x1C007767C (StorLogMFNDSetMigrationQoS.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C0077910 (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDMigrationQoS(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r13
  void *v8; // rsi
  unsigned __int16 v9; // r12
  _BYTE *Pool; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v14; // [rsp+28h] [rbp-51h]
  _OWORD v15[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+E0h] [rbp+67h] BYREF
  int v18; // [rsp+E8h] [rbp+6Fh] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  memset_0(v15, 0, 0x40uLL);
  *a3 = 0LL;
  v9 = 0;
  v18 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v17 = -1073741637;
LABEL_30:
    StorMapMFNDErrorToNtStatus(v9, &v17);
    v12 = v17;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a1 + 5964) != 1 )
  {
    v17 = -1073741436;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x28u )
  {
    v17 = -1073741585;
    goto LABEL_30;
  }
  v6 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v6 == 1
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x20u
    && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 2
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL)
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 24LL)
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL)
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 32LL) )
  {
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v17 = StorSetMFNDOperationPrivilege(a1, 1);
      if ( v17 < 0 )
        goto LABEL_30;
      v7 = 1;
    }
    Pool = (_BYTE *)RaidAllocatePool(64LL, 64LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v8 = Pool;
    if ( !Pool )
    {
      v17 = -1073741670;
      goto LABEL_30;
    }
    switch ( *(_DWORD *)(v6 + 8) )
    {
      case 1:
        *Pool = 0;
        break;
      case 2:
        *Pool = 1;
        break;
      case 3:
        *Pool = 2;
        break;
    }
    *((_DWORD *)Pool + 3) = *(_DWORD *)(v6 + 12);
    *((_DWORD *)Pool + 4) = *(_DWORD *)(v6 + 16);
    *((_DWORD *)Pool + 7) = *(_DWORD *)(v6 + 20);
    *((_DWORD *)Pool + 8) = *(_DWORD *)(v6 + 24);
    LODWORD(v15[0]) = v15[0] & 0xFFFFFF00 | 9;
    v16 = v16 & 0xFFFFFF00 | 0xD3;
    v11 = StorSendMFNDCommand(a1, Pool, 0LL, 0x40u, v15, v14, 1, 1, 0, 0LL, &v18);
    v9 = v18;
    v12 = v11;
  }
  else
  {
    v12 = -1073741811;
  }
  v17 = v12;
  if ( v8 )
    ExFreePoolWithTag(v8, 0x464D6152u);
  if ( v12 < 0 )
    goto LABEL_30;
LABEL_31:
  if ( v7 )
    StorSetMFNDOperationPrivilege(a1, 0);
  StorLogMFNDSetMigrationQoS(a1, v6, v9, v12);
  return (unsigned int)v12;
}
