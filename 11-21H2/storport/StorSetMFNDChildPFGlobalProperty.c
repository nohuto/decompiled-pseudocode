/*
 * XREFs of StorSetMFNDChildPFGlobalProperty @ 0x1C0092160
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C0038AD4 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1C00679C0 (StorLogMFNDSetChildPFProperty.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFGlobalProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // bp
  unsigned __int16 v8; // r15
  bool v9; // zf
  int v10; // ebx
  _BYTE *Pool; // r14
  __int16 v12; // ax
  __int64 v14; // [rsp+20h] [rbp-88h]
  _OWORD v15[4]; // [rsp+50h] [rbp-58h] BYREF
  int v16; // [rsp+B0h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset(v15, 0, sizeof(v15));
  *a3 = 0LL;
  v8 = 0;
  v9 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v16 = 0;
  if ( v9 )
  {
    v10 = -1073741637;
  }
  else if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x218u )
  {
    v6 = *(_QWORD *)(a2 + 24) + 8LL;
    if ( *(_DWORD *)v6 != 528
      || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) < 0x210u
      || *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) != 512
      || *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) < 0x200u
      || (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 28LL) & 1) == 0 )
    {
      v10 = -1073741811;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(a1 + 5896) != 1 )
    {
      v10 = StorSetMFNDOperationPrivilege(a1, 1);
      if ( v10 < 0 )
        goto LABEL_19;
      v7 = 1;
    }
    Pool = (_BYTE *)RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( Pool )
    {
      v12 = *(_WORD *)(v6 + 22);
      HIDWORD(v15[2]) &= ~1u;
      *(_WORD *)Pool = v12;
      Pool[2] = *(_BYTE *)(v6 + 24);
      Pool[3] = *(_BYTE *)(v6 + 25);
      Pool[4] = *(_BYTE *)(v6 + 26);
      LODWORD(v15[0]) = v15[0] & 0xFFFFFF00 | 9;
      DWORD2(v15[2]) = DWORD2(v15[2]) & 0xFFFFFF00 | 0xD2;
      v10 = StorSendMFNDCommand(a1, Pool, 0x200u, v15, v14, 1, 1, 0, 0LL, &v16);
      ExFreePoolWithTag(Pool, 0x464D6152u);
      v8 = v16;
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
LABEL_19:
  StorLogMFNDSetChildPFProperty(a1, v6, v8, v10);
  return (unsigned int)v10;
}
