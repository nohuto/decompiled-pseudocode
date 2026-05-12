/*
 * XREFs of StorSetMFNDChildPFQoS @ 0x1C0092344
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C0038AD4 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorBuildMFNDManagementCommand @ 0x1C0067148 (StorBuildMFNDManagementCommand.c)
 *     StorLogMFNDSetChildPFQoS @ 0x1C0067B24 (StorLogMFNDSetChildPFQoS.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFQoS(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r14
  unsigned __int16 v8; // r15
  int v9; // ebx
  _WORD *Pool; // rax
  _WORD *v11; // rsi
  int v12; // eax
  __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-98h]
  int v16; // [rsp+38h] [rbp-80h]
  __int64 v17; // [rsp+40h] [rbp-78h]
  _OWORD v18[4]; // [rsp+50h] [rbp-68h] BYREF
  int v19; // [rsp+C0h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset(v18, 0, sizeof(v18));
  *a3 = 0LL;
  v8 = 0;
  v19 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 5900) == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0xB0u )
      {
        v6 = *(_QWORD *)(a2 + 24) + 8LL;
        if ( *(_DWORD *)v6 != 72
          || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) < 0x48u
          || (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) > 0xFFFDu
          || *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) != 56
          || *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) < 0x38u
          || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL) - 1) > 2 )
        {
          v9 = -1073741811;
          goto LABEL_28;
        }
        if ( *(_DWORD *)(a1 + 5896) != 1 )
        {
          v9 = StorSetMFNDOperationPrivilege(a1, 1);
          if ( v9 < 0 )
            goto LABEL_28;
          v7 = 1;
        }
        Pool = (_WORD *)RaidAllocatePool(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
        v11 = Pool;
        if ( Pool )
        {
          *Pool |= 2u;
          v12 = *(_DWORD *)(v6 + 20);
          switch ( v12 )
          {
            case 1:
              *((_BYTE *)v11 + 64) = 0;
              break;
            case 2:
              *((_BYTE *)v11 + 64) = 1;
              break;
            case 3:
              *((_BYTE *)v11 + 64) = 2;
              break;
          }
          *((_BYTE *)v11 + 65) = *(_BYTE *)(v6 + 24);
          *((_DWORD *)v11 + 17) = *(_DWORD *)(v6 + 28);
          *((_DWORD *)v11 + 18) = *(_DWORD *)(v6 + 32);
          *((_DWORD *)v11 + 19) = *(_DWORD *)(v6 + 36);
          *((_DWORD *)v11 + 20) = *(_DWORD *)(v6 + 40);
          *((_DWORD *)v11 + 21) = *(_DWORD *)(v6 + 44);
          *((_DWORD *)v11 + 22) = *(_DWORD *)(v6 + 48);
          *((_DWORD *)v11 + 23) = *(_DWORD *)(v6 + 52);
          *((_DWORD *)v11 + 24) = *(_DWORD *)(v6 + 56);
          StorBuildMFNDManagementCommand(v18, 0, *(unsigned __int16 *)(v6 + 8), 0);
          v9 = StorSendMFNDCommand(a1, v11, 0x80u, v18, v15, 1, 1, (unsigned int)v13 & v16, (_DWORD *)(v13 & v17), &v19);
          ExFreePoolWithTag(v11, 0x464D6152u);
          v8 = v19;
        }
        else
        {
          v9 = -1073741670;
        }
        if ( v7 )
          StorSetMFNDOperationPrivilege(a1, 0);
      }
      else
      {
        v9 = -1073741585;
      }
    }
    else
    {
      v9 = -1073741436;
    }
  }
  else
  {
    v9 = -1073741637;
  }
LABEL_28:
  StorLogMFNDSetChildPFQoS(a1, v6, v8, v9);
  return (unsigned int)v9;
}
