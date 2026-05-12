/*
 * XREFs of StorSetMFNDChildPFQoS @ 0x1C00AE654
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C003A09C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorBuildMFNDManagementCommand @ 0x1C0075F10 (StorBuildMFNDManagementCommand.c)
 *     StorLogMFNDSetChildPFQoS @ 0x1C00771D0 (StorLogMFNDSetChildPFQoS.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C0077910 (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFQoS(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r12
  _WORD *v8; // rsi
  unsigned __int16 v9; // r15
  _WORD *Pool; // rax
  int v11; // eax
  __int64 v12; // r9
  int v13; // eax
  int v14; // ebx
  __int64 v16; // [rsp+28h] [rbp-51h]
  int v17; // [rsp+40h] [rbp-39h]
  __int64 v18; // [rsp+48h] [rbp-31h]
  _OWORD v19[7]; // [rsp+60h] [rbp-19h] BYREF
  int v20; // [rsp+E0h] [rbp+67h] BYREF
  int v21; // [rsp+E8h] [rbp+6Fh] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  memset_0(v19, 0, 0x40uLL);
  *a3 = 0LL;
  v9 = 0;
  v21 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v20 = -1073741637;
LABEL_30:
    StorMapMFNDErrorToNtStatus(v9, &v20);
    v14 = v20;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a1 + 5964) != 1 )
  {
    v20 = -1073741436;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x88u )
  {
    v20 = -1073741585;
    goto LABEL_30;
  }
  v6 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v6 == 1
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x48u
    && (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 0xFFFDu
    && *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) == 1
    && *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) >= 0x38u )
  {
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL) - 1) > 2 )
    {
      v20 = -1073741811;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v20 = StorSetMFNDOperationPrivilege(a1, 1);
      if ( v20 < 0 )
        goto LABEL_30;
      v7 = 1;
    }
    Pool = (_WORD *)RaidAllocatePool(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v8 = Pool;
    if ( !Pool )
    {
      v20 = -1073741670;
      goto LABEL_30;
    }
    *Pool |= 2u;
    v11 = *(_DWORD *)(v6 + 20);
    switch ( v11 )
    {
      case 1:
        *((_BYTE *)v8 + 64) = 0;
        break;
      case 2:
        *((_BYTE *)v8 + 64) = 1;
        break;
      case 3:
        *((_BYTE *)v8 + 64) = 2;
        break;
    }
    *((_BYTE *)v8 + 65) = *(_BYTE *)(v6 + 24);
    *((_BYTE *)v8 + 66) = *(_BYTE *)(v6 + 25);
    *((_DWORD *)v8 + 17) = *(_DWORD *)(v6 + 28);
    *((_DWORD *)v8 + 18) = *(_DWORD *)(v6 + 32);
    *((_DWORD *)v8 + 19) = *(_DWORD *)(v6 + 36);
    *((_DWORD *)v8 + 20) = *(_DWORD *)(v6 + 40);
    *((_DWORD *)v8 + 21) = *(_DWORD *)(v6 + 44);
    *((_DWORD *)v8 + 22) = *(_DWORD *)(v6 + 48);
    *((_DWORD *)v8 + 23) = *(_DWORD *)(v6 + 52);
    *((_DWORD *)v8 + 24) = *(_DWORD *)(v6 + 56);
    StorBuildMFNDManagementCommand((__int64)v19, 0, *(unsigned __int16 *)(v6 + 8), 0, 0x80u);
    v13 = StorSendMFNDCommand(a1, v8, 0LL, 0x80u, v19, v16, 1, 1, (unsigned int)v12 & v17, (_DWORD *)(v12 & v18), &v21);
    v9 = v21;
    v14 = v13;
  }
  else
  {
    v14 = -1073741811;
  }
  v20 = v14;
  if ( v8 )
    ExFreePoolWithTag(v8, 0x464D6152u);
  if ( v14 < 0 )
    goto LABEL_30;
LABEL_31:
  if ( v7 )
    StorSetMFNDOperationPrivilege(a1, 0);
  StorLogMFNDSetChildPFQoS(a1, v6, v9, v14);
  return (unsigned int)v14;
}
