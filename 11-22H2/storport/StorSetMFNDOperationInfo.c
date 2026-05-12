/*
 * XREFs of StorSetMFNDOperationInfo @ 0x1C00AF0EC
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C003A09C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetOperationInfo @ 0x1C00777E4 (StorLogMFNDSetOperationInfo.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C0077910 (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDOperationInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // edi
  __int64 v7; // rsi
  char v8; // r12
  int v9; // ecx
  char v10; // al
  int v11; // ebx
  char v12; // al
  char v13; // r9
  char v14; // r8
  __int64 v16; // [rsp+28h] [rbp-41h]
  _OWORD v17[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+1Fh]
  unsigned int v19; // [rsp+8Ch] [rbp+23h]
  int v20; // [rsp+D0h] [rbp+67h] BYREF
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF

  LOBYTE(v3) = 0;
  v7 = 0LL;
  v8 = 0;
  memset_0(v17, 0, 0x40uLL);
  *a3 = 0LL;
  v21 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x1Cu )
    {
      v7 = *(_QWORD *)(a2 + 24) + 8LL;
      if ( *(_WORD *)v7 != 1
        || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) < 0x14u
        || *(_BYTE *)(*(_QWORD *)(a2 + 24) + 25LL) )
      {
        v11 = -1073741811;
        v20 = -1073741811;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 24) + 24LL) && !*(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL) )
        {
          v20 = -1073741811;
          goto LABEL_23;
        }
        if ( *(_DWORD *)(a1 + 5960) != 1 )
        {
          v20 = StorSetMFNDOperationPrivilege(a1, 1);
          if ( v20 < 0 )
            goto LABEL_23;
          v8 = 1;
        }
        v9 = *(_BYTE *)(v7 + 16) & 1;
        LODWORD(v17[0]) = v17[0] & 0xFFFFFF00 | 9;
        v18 = v18 & 0xFFFFFF00 | 0xD1;
        v10 = *(_BYTE *)(v7 + 12);
        v19 = v19 & 0xFFFFFFE0 | *(_BYTE *)(v7 + 17) & 0xF | (16 * v9);
        BYTE1(v19) = v10;
        v20 = StorSendMFNDCommand(a1, 0LL, 0LL, 0, v17, v16, 0, 1, 0, 0LL, &v21);
        v11 = v20;
        if ( v8 )
          StorSetMFNDOperationPrivilege(a1, 0);
        if ( v11 < 0 )
          goto LABEL_23;
        if ( !*(_BYTE *)(v7 + 17) )
          *(_DWORD *)(a1 + 5964) = *(_BYTE *)(v7 + 16) != 0;
        v12 = *(_BYTE *)(a1 + 111);
        if ( (v12 & 2) == 0 )
          *(_BYTE *)(a1 + 111) = v12 | 2;
      }
      if ( v11 >= 0 )
        goto LABEL_24;
      goto LABEL_23;
    }
    v20 = -1073741585;
  }
  else
  {
    v20 = -1073741637;
  }
LABEL_23:
  StorMapMFNDErrorToNtStatus(v21, &v20);
  v11 = v20;
LABEL_24:
  if ( v7 )
  {
    v13 = *(_BYTE *)(v7 + 17);
    v14 = *(_BYTE *)(v7 + 16);
    v3 = *(_DWORD *)(v7 + 12);
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  StorLogMFNDSetOperationInfo(a1, v3, v14, v13, v21, v11);
  return (unsigned int)v11;
}
