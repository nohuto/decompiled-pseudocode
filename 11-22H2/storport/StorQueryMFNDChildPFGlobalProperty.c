/*
 * XREFs of StorQueryMFNDChildPFGlobalProperty @ 0x1C00AC84C
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0039ED4 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryChildPFProperty @ 0x1C007653C (StorLogMFNDQueryChildPFProperty.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFGlobalProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rsi
  size_t v6; // r12
  __int64 v7; // rdi
  unsigned __int16 v8; // r14
  __int64 Pool; // rax
  _BYTE *v10; // r15
  int v11; // ebx
  _DWORD v13[10]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+E0h] [rbp+67h] BYREF
  int v16; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v17; // [rsp+F0h] [rbp+77h]

  v17 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(v13, 0, 0x40uLL);
  v7 = 0LL;
  v8 = 0;
  v16 = 0;
  *a3 = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v15 = -1073741637;
    goto LABEL_12;
  }
  if ( v4 && v6 >= 0x10 )
  {
    Pool = RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v10 = (_BYTE *)Pool;
    if ( !Pool )
    {
      v15 = -1073741670;
      goto LABEL_12;
    }
    v13[0] = 10;
    v14 = v14 & 0xFFFFFF00 | 0xD2;
    v15 = StorSendMFNDCommand(a1, Pool, 0, 512, (__int64)v13);
    v11 = v15;
    if ( v15 >= 0 )
    {
      memset_0(v4, 0, v6);
      *v4 = 1048577;
      *((_WORD *)v4 + 2) = 1;
      *((_WORD *)v4 + 3) = *(_WORD *)v10;
      *((_BYTE *)v4 + 8) = v10[2];
      *((_BYTE *)v4 + 9) = v10[3];
      *((_BYTE *)v4 + 10) = v10[4];
      *((_BYTE *)v4 + 11) = v10[5];
      *v17 = 16LL;
    }
    ExFreePoolWithTag(v10, 0x464D6152u);
    v8 = v16;
  }
  else
  {
    v11 = -1073741789;
    v15 = -1073741789;
  }
  if ( v11 >= 0 )
  {
LABEL_13:
    v7 = (__int64)v4;
    goto LABEL_14;
  }
LABEL_12:
  StorMapMFNDErrorToNtStatus(v8, &v15);
  v11 = v15;
  if ( v15 >= 0 )
    goto LABEL_13;
LABEL_14:
  StorLogMFNDQueryChildPFProperty(a1, v7, v8, v11);
  return (unsigned int)v11;
}
