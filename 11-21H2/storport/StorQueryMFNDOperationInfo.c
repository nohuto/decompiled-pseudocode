/*
 * XREFs of StorQueryMFNDOperationInfo @ 0x1C0091874
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1C003C044 (StorLogMFNDQueryOperationInfo.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDOperationInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rsi
  size_t v6; // rbp
  int v7; // ebx
  char v8; // r8
  int v9; // edx
  _DWORD v11[16]; // [rsp+50h] [rbp-58h] BYREF

  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset(v11, 0, sizeof(v11));
  *a3 = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v7 = -1073741637;
    goto LABEL_12;
  }
  if ( !v4 || v6 < 0x10 )
  {
    v7 = -1073741789;
    goto LABEL_12;
  }
  v11[0] = 10;
  v11[10] = v11[10] & 0xFFFFFF00 | 0xD1;
  v7 = StorSendMFNDCommand(a1, 0, 0, (unsigned int)v11);
  if ( v7 < 0 )
  {
LABEL_12:
    LOBYTE(v9) = -1;
    v8 = -1;
    goto LABEL_14;
  }
  memset(v4, 0, v6);
  *v4 = 16;
  v8 = 0;
  v4[1] = 16;
  v4[2] = 0;
  if ( *(_DWORD *)(a1 + 5900) )
    *(_DWORD *)(a1 + 5900) = 0;
  if ( *(_DWORD *)(a1 + 5896) )
    *(_DWORD *)(a1 + 5896) = 0;
  *a3 = 16LL;
  v9 = v4[2];
LABEL_14:
  StorLogMFNDQueryOperationInfo(a1, v9, v8, 0, v7);
  return (unsigned int)v7;
}
