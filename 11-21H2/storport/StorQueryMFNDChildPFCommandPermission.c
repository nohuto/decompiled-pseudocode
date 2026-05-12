/*
 * XREFs of StorQueryMFNDChildPFCommandPermission @ 0x1C0090E08
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorBuildMFNDGetSetCommandsPermissionCommand @ 0x1C00670FC (StorBuildMFNDGetSetCommandsPermissionCommand.c)
 *     StorLogMFNDQueryChildPFCommandPermission @ 0x1C0067190 (StorLogMFNDQueryChildPFCommandPermission.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFCommandPermission(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  _DWORD *v5; // rbx
  size_t v7; // r15
  bool v8; // zf
  int v9; // edi
  _BYTE *Pool; // rsi
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  _BYTE v18[64]; // [rsp+50h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD **)(a2 + 24);
  v7 = *(unsigned int *)(v3 + 8);
  memset(v18, 0, sizeof(v18));
  v8 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  *a3 = 0LL;
  if ( v8 )
  {
    v9 = -1073741637;
  }
  else if ( *(_DWORD *)(a1 + 5900) == 1 )
  {
    if ( *(_DWORD *)(v3 + 16) >= 0x18u )
    {
      if ( v5[2] == 16 && v5[3] >= 0x10u )
      {
        if ( v5 && v7 >= 8 )
        {
          Pool = (_BYTE *)RaidAllocatePool(64LL, 1024LL, 1179476306LL, *(_QWORD *)(a1 + 8));
          if ( Pool )
          {
            StorBuildMFNDGetSetCommandsPermissionCommand((__int64)v18, 1, 0x400u);
            v9 = StorSendMFNDCommand(a1, (_DWORD)Pool, 1024, (unsigned int)v18);
            if ( v9 >= 0 )
            {
              v11 = 16 * (unsigned __int8)*Pool + 12;
              memset(v5, 0, v7);
              *v5 = 28;
              if ( v7 >= v11 )
              {
                LOBYTE(v12) = *Pool;
                v13 = 0;
                if ( *Pool )
                {
                  do
                  {
                    v14 = 2LL * v13;
                    v5[2 * v14 + 3] = 16;
                    v5[2 * v14 + 4] = 16;
                    LOBYTE(v5[2 * v14 + 6]) = Pool[4 * v13 + 4];
                    v15 = *(_DWORD *)&Pool[4 * v13 + 4];
                    if ( (v15 & 0x100) != 0 )
                    {
                      v5[4 * v13 + 5] |= 1u;
                      v15 = *(_DWORD *)&Pool[4 * v13 + 4];
                    }
                    if ( (v15 & 0x200) != 0 )
                      v5[4 * v13 + 5] |= 2u;
                    v12 = (unsigned __int8)*Pool;
                    ++v13;
                  }
                  while ( v13 < v12 );
                }
                v5[2] = (unsigned __int8)v12;
                v16 = 16 * (unsigned int)(unsigned __int8)*Pool + 12;
                v5[1] = v16;
                *a3 = v16;
              }
              else
              {
                v5[1] = v11;
                v9 = -2147483643;
                *a3 = 8LL;
              }
            }
            ExFreePoolWithTag(Pool, 0x464D6152u);
          }
          else
          {
            v9 = -1073741670;
          }
        }
        else
        {
          v9 = -1073741820;
        }
      }
      else
      {
        v9 = -1073741811;
      }
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
  if ( v9 < 0 )
    v5 = 0LL;
  StorLogMFNDQueryChildPFCommandPermission(a1, (__int64)v5, 0, v9);
  return (unsigned int)v9;
}
