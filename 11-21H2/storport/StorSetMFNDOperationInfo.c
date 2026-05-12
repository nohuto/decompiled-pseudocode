/*
 * XREFs of StorSetMFNDOperationInfo @ 0x1C0092810
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C0038AD4 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     StorBuildMFNDGetSetFeatureCommand @ 0x1C003BCBC (StorBuildMFNDGetSetFeatureCommand.c)
 *     StorLogMFNDSetOperationInfo @ 0x1C0067FD0 (StorLogMFNDSetOperationInfo.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDOperationInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // edi
  char v7; // r14
  __int64 v8; // r9
  bool v9; // zf
  int v10; // ebx
  char v11; // r9
  char v12; // r8
  __int64 v14; // rsi
  char v15; // cl
  char v16; // dl
  char v17; // al
  __int64 v18; // [rsp+20h] [rbp-88h]
  _OWORD v19[4]; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+B0h] [rbp+8h] BYREF

  LOBYTE(v3) = 0;
  v7 = 0;
  memset(v19, 0, sizeof(v19));
  v9 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v20 = 0;
  *a3 = 0LL;
  if ( v9 )
  {
    v10 = -1073741637;
LABEL_5:
    v11 = 0;
    goto LABEL_6;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x1Cu )
  {
    v10 = -1073741585;
    goto LABEL_5;
  }
  v14 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_DWORD *)v14 != 20 || *(_DWORD *)(v14 + 4) < 0x14u || *(_BYTE *)(v14 + 17) )
    goto LABEL_23;
  v15 = *(_BYTE *)(v14 + 16);
  v16 = 0;
  if ( v15 )
  {
    if ( *(_DWORD *)(v14 + 12) )
    {
      if ( *(_DWORD *)(a1 + 5896) != 1 )
      {
        v10 = StorSetMFNDOperationPrivilege(a1, 1);
        if ( v10 < 0 )
          goto LABEL_24;
        v16 = *(_BYTE *)(v14 + 17);
        v7 = 1;
        v15 = *(_BYTE *)(v14 + 16);
      }
      goto LABEL_16;
    }
LABEL_23:
    v10 = -1073741811;
    goto LABEL_24;
  }
LABEL_16:
  StorBuildMFNDGetSetFeatureCommand((__int64)v19, 0, 209, v8, v16, v15, *(_DWORD *)(v14 + 12));
  v10 = StorSendMFNDCommand(a1, 0LL, 0, v19, v18, 0, 1, 0, 0LL, &v20);
  if ( v7 )
    StorSetMFNDOperationPrivilege(a1, 0);
  if ( v10 >= 0 )
  {
    if ( !*(_BYTE *)(v14 + 17) )
      *(_DWORD *)(a1 + 5900) = *(_BYTE *)(v14 + 16) != 0;
    v17 = *(_BYTE *)(a1 + 111);
    if ( (v17 & 2) == 0 )
      *(_BYTE *)(a1 + 111) = v17 | 2;
  }
LABEL_24:
  v11 = *(_BYTE *)(v14 + 17);
  if ( v14 )
  {
    v12 = *(_BYTE *)(v14 + 16);
    v3 = *(_DWORD *)(v14 + 12);
    goto LABEL_7;
  }
LABEL_6:
  v12 = 0;
LABEL_7:
  StorLogMFNDSetOperationInfo(a1, v3, v12, v11, v20, v10);
  return (unsigned int)v10;
}
