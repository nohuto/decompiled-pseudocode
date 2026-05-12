/*
 * XREFs of ReplaceDeviceId @ 0x1C0073D80
 * Callers:
 *     ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0073A30 (ATADeviceIdShimStorageDeviceIdCompletionHook.c)
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0073D10 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall ReplaceDeviceId(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // r12
  int v5; // esi
  unsigned int v6; // r15d
  unsigned int v7; // edi
  _DWORD *Pool; // rax
  _DWORD *v9; // rbx
  int *v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  char v13; // r15
  _BYTE *v14; // rdx
  unsigned __int16 v15; // cx
  __int16 v16; // ax
  void *v17; // rcx

  v4 = *(_QWORD *)(a1 + 136);
  v5 = 0;
  v6 = 0;
  v7 = a3;
  Pool = (_DWORD *)RaidAllocatePool(64LL, a3, 1213423954LL, *(_QWORD *)(a1 + 8));
  v9 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = 16;
  v10 = Pool + 3;
  Pool[1] = 12;
  v11 = 0;
  v12 = *(unsigned __int8 *)(v4 + 3) | (*(unsigned __int8 *)(v4 + 2) << 8);
  if ( !v12 )
    goto LABEL_12;
  v13 = 0;
  do
  {
    v14 = (_BYTE *)(v11 + v4 + 4);
    v11 += (unsigned __int8)v14[3] + 4;
    if ( (v14[1] & 0x30) == 0 )
    {
      if ( v13 == 1 )
        continue;
      v14 = a4;
      v13 = 1;
    }
    ++v5;
    v15 = ((unsigned __int8)v14[3] + 20) & 0xFFFC;
    v9[1] += v15;
    if ( v9[1] <= v7 )
    {
      *v10 = *v14 & 0xF;
      v10[1] = v14[1] & 0xF;
      v10[3] = ((unsigned __int8)v14[1] >> 4) & 3;
      v16 = (unsigned __int8)v14[3];
      *((_WORD *)v10 + 5) = v15;
      *((_WORD *)v10 + 4) = v16;
      memmove(v10 + 4, v14 + 4, (unsigned __int8)v14[3]);
      v10 = (int *)((char *)v10 + *((unsigned __int16 *)v10 + 5));
    }
  }
  while ( v11 < v12 );
  v6 = 0;
LABEL_12:
  if ( v7 >= 0xC )
    v9[2] = v5;
  if ( v9[1] < v7 )
    v7 = v9[1];
  v17 = *(void **)(a2 + 24);
  *(_QWORD *)(a2 + 56) = v7;
  memmove(v17, v9, v7);
  ExFreePoolWithTag(v9, 0x48536152u);
  return v6;
}
