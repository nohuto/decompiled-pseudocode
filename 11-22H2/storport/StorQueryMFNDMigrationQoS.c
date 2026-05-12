/*
 * XREFs of StorQueryMFNDMigrationQoS @ 0x1C00AD4EC
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0039ED4 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryMigrationQoS @ 0x1C0076990 (StorLogMFNDQueryMigrationQoS.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDMigrationQoS(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rbx
  size_t v6; // r12
  __int64 v7; // rdi
  unsigned __int16 v8; // r15
  __int64 Pool; // rax
  _DWORD *v10; // r14
  int v11; // esi
  _DWORD v13[10]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+E0h] [rbp+67h] BYREF
  int v16; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v17; // [rsp+F0h] [rbp+77h]

  v17 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(v13, 0, 0x40uLL);
  v7 = 0LL;
  v8 = 0;
  v16 = 0;
  *a3 = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v15 = -1073741637;
    goto LABEL_19;
  }
  if ( v4 && v6 >= 0x20 )
  {
    Pool = RaidAllocatePool(64LL, 64LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v10 = (_DWORD *)Pool;
    if ( !Pool )
    {
      v15 = -1073741670;
      goto LABEL_19;
    }
    v13[0] = 10;
    v14 = v14 & 0xFFFFFF00 | 0xD3;
    v15 = StorSendMFNDCommand(a1, Pool, 0, 64, (__int64)v13);
    v11 = v15;
    if ( v15 >= 0 )
    {
      memset_0(v4, 0, v6);
      *(_WORD *)v4 = 1;
      v4[1] = 32;
      if ( *(_BYTE *)v10 )
      {
        if ( *(_BYTE *)v10 == 1 )
        {
          v4[2] = 2;
        }
        else if ( *(_BYTE *)v10 == 2 )
        {
          v4[2] = 3;
        }
        else
        {
          v4[2] = 4;
        }
      }
      else
      {
        v4[2] = 1;
      }
      v4[3] = v10[3];
      v4[4] = v10[4];
      v4[5] = v10[7];
      v4[6] = v10[8];
      *v17 = 32LL;
    }
    ExFreePoolWithTag(v10, 0x464D6152u);
    v8 = v16;
  }
  else
  {
    v11 = -1073741789;
    v15 = -1073741789;
  }
  if ( v11 >= 0 )
  {
LABEL_20:
    v7 = (__int64)v4;
    goto LABEL_21;
  }
LABEL_19:
  StorMapMFNDErrorToNtStatus(v8, &v15);
  v11 = v15;
  if ( v15 >= 0 )
    goto LABEL_20;
LABEL_21:
  StorLogMFNDQueryMigrationQoS(a1, v7, v8, v11);
  return (unsigned int)v11;
}
