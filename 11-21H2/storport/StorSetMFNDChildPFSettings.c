/*
 * XREFs of StorSetMFNDChildPFSettings @ 0x1C0092584
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C0038AD4 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorBuildMFNDManagementCommand @ 0x1C0067148 (StorBuildMFNDManagementCommand.c)
 *     StorLogMFNDSetChildPFSettings @ 0x1C0067CFC (StorLogMFNDSetChildPFSettings.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFSettings(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r14
  unsigned __int16 v8; // r15
  int v9; // ebx
  __int16 v10; // ax
  _WORD *Pool; // rsi
  __int16 v12; // ax
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
        if ( *(_DWORD *)v6 != 168
          || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) < 0xA8u
          || (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) > 0xFFFDu
          || *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) != 152
          || *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) < 0x98u
          || (v10 = *(_WORD *)(*(_QWORD *)(a2 + 24) + 28LL), (v10 & 3) == 0)
          || (v10 & 2) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 60LL) - 1) > 2 )
        {
          v9 = -1073741811;
          goto LABEL_30;
        }
        if ( *(_DWORD *)(a1 + 5896) != 1 )
        {
          v9 = StorSetMFNDOperationPrivilege(a1, 1);
          if ( v9 < 0 )
            goto LABEL_30;
          v7 = 1;
        }
        Pool = (_WORD *)RaidAllocatePool(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
        if ( Pool )
        {
          v12 = *(_WORD *)(v6 + 20);
          if ( (v12 & 1) != 0 )
          {
            *Pool |= 1u;
            Pool[1] = *(_WORD *)(v6 + 22);
            Pool[2] = *(_WORD *)(v6 + 24);
            *((_BYTE *)Pool + 6) = *(_BYTE *)(v6 + 26);
            Pool[4] = *(_WORD *)(v6 + 32);
            Pool[5] = *(_WORD *)(v6 + 36);
            Pool[6] = *(_WORD *)(v6 + 40);
            Pool[7] = *(_WORD *)(v6 + 44);
            v12 = *(_WORD *)(v6 + 20);
          }
          if ( (v12 & 2) != 0 )
          {
            *Pool |= 2u;
            if ( (unsigned int)(*(_DWORD *)(v6 + 52) - 1) <= 2 )
              *((_BYTE *)Pool + 64) = 0;
            *((_BYTE *)Pool + 65) = *(_BYTE *)(v6 + 56);
            *((_DWORD *)Pool + 17) = *(_DWORD *)(v6 + 60);
            *((_DWORD *)Pool + 18) = *(_DWORD *)(v6 + 64);
            *((_DWORD *)Pool + 19) = *(_DWORD *)(v6 + 68);
            *((_DWORD *)Pool + 20) = *(_DWORD *)(v6 + 72);
            *((_DWORD *)Pool + 21) = *(_DWORD *)(v6 + 76);
            *((_DWORD *)Pool + 22) = *(_DWORD *)(v6 + 80);
            *((_DWORD *)Pool + 23) = *(_DWORD *)(v6 + 84);
            *((_DWORD *)Pool + 24) = *(_DWORD *)(v6 + 88);
          }
          StorBuildMFNDManagementCommand(v18, 0, *(unsigned __int16 *)(v6 + 8), 0);
          v9 = StorSendMFNDCommand(
                 a1,
                 Pool,
                 0x80u,
                 v18,
                 v15,
                 1,
                 1,
                 (unsigned int)v13 & v16,
                 (_DWORD *)(v13 & v17),
                 &v19);
          ExFreePoolWithTag(Pool, 0x464D6152u);
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
LABEL_30:
  StorLogMFNDSetChildPFSettings(a1, v6, v8, v9);
  return (unsigned int)v9;
}
