/*
 * XREFs of StorQueryMFNDNamespacePageMap @ 0x1C00AD6CC
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0039ED4 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryNSPageMap @ 0x1C0076AF8 (StorLogMFNDQueryNSPageMap.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C0077910 (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDNamespacePageMap(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  _WORD *v5; // rdi
  unsigned __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned int *Pool; // r12
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r14d
  _DWORD *v16; // r15
  size_t v17; // r8
  int v18; // ebx
  size_t Size; // [rsp+68h] [rbp-31h]
  _DWORD v21[10]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+A0h] [rbp+7h]
  unsigned int v24; // [rsp+A4h] [rbp+Bh]
  unsigned int v25; // [rsp+ACh] [rbp+13h]
  char v26; // [rsp+100h] [rbp+67h]
  int v27; // [rsp+108h] [rbp+6Fh] BYREF
  _QWORD *v28; // [rsp+110h] [rbp+77h]
  int v29; // [rsp+118h] [rbp+7Fh]

  v28 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0LL;
  v5 = *(_WORD **)(a2 + 24);
  v29 = 0;
  v8 = *(unsigned int *)(v3 + 8);
  Size = v8;
  memset_0(v21, 0, 0x40uLL);
  *a3 = 0LL;
  v26 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 5964) != 1 )
    {
      v27 = -1073741436;
      goto LABEL_42;
    }
    if ( *(_DWORD *)(v3 + 16) < 0x28u )
    {
      v27 = -1073741585;
      goto LABEL_42;
    }
    if ( v5[4] != 1
      || *((_DWORD *)v5 + 3) < 0x20u
      || (v9 = *((_DWORD *)v5 + 4)) == 0
      || v9 >= 3
      || !v5[10]
      || (v10 = *((unsigned int *)v5 + 8), !(_DWORD)v10) )
    {
      v15 = -1073741811;
      v27 = -1073741811;
LABEL_41:
      if ( v15 >= 0 )
        goto LABEL_43;
      goto LABEL_42;
    }
    if ( !v5 )
    {
      v27 = -1073741584;
      goto LABEL_42;
    }
    v11 = ((unsigned __int64)(v10 + 7) >> 3) + 4;
    if ( v8 < ((unsigned __int64)(v10 + 7) >> 3) + 24 )
    {
      v27 = -1073741789;
      goto LABEL_42;
    }
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v27 = StorSetMFNDOperationPrivilege(a1, 1);
      if ( v27 < 0 )
        goto LABEL_42;
      v26 = 1;
    }
    Pool = (unsigned int *)RaidAllocatePool(64LL, (unsigned int)v11, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
    {
      v27 = -1073741670;
      goto LABEL_42;
    }
    v13 = *((_QWORD *)v5 + 3);
    v14 = *((_DWORD *)v5 + 4);
    v22 = v13;
    v21[0] = v21[0] & 0xFFFFFF00 | 0xD2;
    LODWORD(v13) = *((_DWORD *)v5 + 8);
    v21[1] = (unsigned __int16)v5[10];
    LOBYTE(v25) = 9;
    v23 ^= (v23 ^ (v13 - 1)) & 0xFFFFF;
    v24 = (unsigned int)v11 >> 2;
    if ( v14 == 1 )
    {
      v25 &= 0xFFFFF0FF;
    }
    else if ( v14 == 2 )
    {
      v25 = v25 & 0xFFFFF0FF | 0x100;
    }
    v27 = StorSendMFNDCommand(a1, (_DWORD)Pool, 0, v11, (__int64)v21);
    v15 = v27;
    if ( v27 < 0 )
    {
LABEL_39:
      ExFreePoolWithTag(Pool, 0x464D6152u);
      goto LABEL_41;
    }
    memset_0(v5, 0, Size);
    switch ( v29 & 3 )
    {
      case 0:
        *v5 = 1;
        *((_DWORD *)v5 + 2) = 1;
        v16 = v5 + 2;
        v17 = *Pool;
        *((_DWORD *)v5 + 4) = v17;
        *((_DWORD *)v5 + 1) = 20;
        if ( (_DWORD)v17 )
        {
          if ( v17 >= Size - 20 )
            v17 = (unsigned int)(Size - 20);
          v18 = v17;
          memmove(v5 + 10, Pool + 1, v17);
          *v16 += v18;
        }
        goto LABEL_38;
      case 1:
        *((_DWORD *)v5 + 2) = 2;
        break;
      case 2:
        *((_DWORD *)v5 + 2) = 3;
        break;
      default:
        v15 = -1073741668;
        v16 = v5 + 2;
        v27 = -1073741668;
LABEL_38:
        *v28 = (unsigned int)*v16;
        goto LABEL_39;
    }
    *v5 = 1;
    v16 = v5 + 2;
    *((_DWORD *)v5 + 1) = 20;
    *((_DWORD *)v5 + 4) = 0;
    goto LABEL_38;
  }
  v27 = -1073741637;
LABEL_42:
  StorMapMFNDErrorToNtStatus(0, &v27);
  v15 = v27;
LABEL_43:
  if ( v26 )
    StorSetMFNDOperationPrivilege(a1, 0);
  if ( v15 >= 0 )
    v4 = (__int64)v5;
  StorLogMFNDQueryNSPageMap(a1, v4, 0, v15);
  return (unsigned int)v15;
}
