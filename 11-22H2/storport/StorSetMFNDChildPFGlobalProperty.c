/*
 * XREFs of StorSetMFNDChildPFGlobalProperty @ 0x1C00AE45C
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C003A09C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1C0077070 (StorLogMFNDSetChildPFProperty.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C0077910 (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFGlobalProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r12
  _BYTE *Pool; // r14
  unsigned __int16 v9; // r15
  __int16 v10; // ax
  int v11; // eax
  int v12; // ebx
  __int64 v14; // [rsp+28h] [rbp-51h]
  _OWORD v15[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  int v18; // [rsp+E0h] [rbp+67h] BYREF
  int v19; // [rsp+E8h] [rbp+6Fh] BYREF

  v6 = 0LL;
  v7 = 0;
  Pool = 0LL;
  memset_0(v15, 0, 0x40uLL);
  *a3 = 0LL;
  v9 = 0;
  v19 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v18 = -1073741637;
LABEL_20:
    StorMapMFNDErrorToNtStatus(v9, &v18);
    v12 = v18;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x28u )
  {
    v18 = -1073741585;
    goto LABEL_20;
  }
  v6 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v6 == 1
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x20u
    && *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) == 1
    && *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) >= 0x10u
    && (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 28LL) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v18 = StorSetMFNDOperationPrivilege(a1, 1);
      if ( v18 < 0 )
        goto LABEL_20;
      v7 = 1;
    }
    Pool = (_BYTE *)RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
    {
      v18 = -1073741670;
      goto LABEL_20;
    }
    v10 = *(_WORD *)(v6 + 22);
    v17 |= 1u;
    *(_WORD *)Pool = v10;
    Pool[2] = *(_BYTE *)(v6 + 24);
    Pool[3] = *(_BYTE *)(v6 + 25);
    Pool[4] = *(_BYTE *)(v6 + 26);
    Pool[5] = *(_BYTE *)(v6 + 27);
    LODWORD(v15[0]) = v15[0] & 0xFFFFFF00 | 9;
    v16 = v16 & 0xFFFFFF00 | 0xD2;
    v11 = StorSendMFNDCommand(a1, Pool, 0LL, 0x200u, v15, v14, 1, 1, 0, 0LL, &v19);
    v9 = v19;
    v12 = v11;
  }
  else
  {
    v12 = -1073741811;
  }
  v18 = v12;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x464D6152u);
  if ( v12 < 0 )
    goto LABEL_20;
LABEL_21:
  if ( v7 )
    StorSetMFNDOperationPrivilege(a1, 0);
  StorLogMFNDSetChildPFProperty(a1, v6, v9, v12);
  return (unsigned int)v12;
}
