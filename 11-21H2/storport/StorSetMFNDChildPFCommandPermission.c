/*
 * XREFs of StorSetMFNDChildPFCommandPermission @ 0x1C0091F54
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C0038AD4 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorLogMFNDSetChildPFCommandPermission @ 0x1C0067880 (StorLogMFNDSetChildPFCommandPermission.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFCommandPermission(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v6; // rdi
  char v7; // r15
  unsigned __int16 v8; // r12
  bool v9; // zf
  int v10; // ebx
  int v11; // ecx
  ULONG v12; // ebx
  _BYTE *Pool; // r14
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-98h]
  _OWORD v17[4]; // [rsp+50h] [rbp-68h] BYREF
  int v18; // [rsp+C0h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset(v17, 0, sizeof(v17));
  *a3 = 0LL;
  v8 = 0;
  v9 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v18 = 0;
  if ( v9 )
  {
    v10 = -1073741637;
  }
  else if ( *(_DWORD *)(a1 + 5900) == 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x28u )
    {
      v6 = (_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
      if ( *v6 != 32
        || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) < 0x20u
        || (v11 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL), (unsigned int)(v11 - 1) > 0xFE) )
      {
        v10 = -1073741811;
        goto LABEL_26;
      }
      if ( *(_DWORD *)(a1 + 5896) != 1 )
      {
        v10 = StorSetMFNDOperationPrivilege(a1, 1);
        if ( v10 < 0 )
          goto LABEL_26;
        v11 = v6[3];
        v7 = 1;
      }
      v12 = 4 * v11 + 4;
      Pool = (_BYTE *)RaidAllocatePool(64LL, v12, 1179476306LL, *(_QWORD *)(a1 + 8));
      if ( Pool )
      {
        v14 = 0LL;
        for ( *Pool = *((_BYTE *)v6 + 12); (unsigned int)v14 < v6[3]; v14 = (unsigned int)(v14 + 1) )
        {
          Pool[4 * v14 + 4] = v6[4 * (unsigned int)v14 + 7];
          if ( (v6[4 * (unsigned int)v14 + 6] & 1) != 0 )
            *(_DWORD *)&Pool[4 * v14 + 4] |= 0x100u;
        }
        LODWORD(v17[0]) = v17[0] & 0xFFFFFF00 | 0xD1;
        if ( MFNDCommandSpecificationVersion == 144 )
        {
          HIDWORD(v17[2]) = v12 >> 2;
          BYTE8(v17[2]) = 7;
        }
        else
        {
          DWORD2(v17[2]) = v12 >> 2;
          BYTE12(v17[3]) = 7;
        }
        v10 = StorSendMFNDCommand(a1, Pool, v12, v17, v16, 1, 1, 0, 0LL, &v18);
        ExFreePoolWithTag(Pool, 0x464D6152u);
        v8 = v18;
      }
      else
      {
        v10 = -1073741670;
      }
      if ( v7 )
        StorSetMFNDOperationPrivilege(a1, 0);
    }
    else
    {
      v10 = -1073741585;
    }
  }
  else
  {
    v10 = -1073741436;
  }
LABEL_26:
  StorLogMFNDSetChildPFCommandPermission(a1, (__int64)v6, v8, v10);
  return (unsigned int)v10;
}
