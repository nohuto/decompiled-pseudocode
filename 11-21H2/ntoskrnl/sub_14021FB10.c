/*
 * XREFs of sub_14021FB10 @ 0x14021FB10
 * Callers:
 *     RtlCreateHashTable @ 0x14021FAF0 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x1403A7700 (RtlCreateHashTableEx.c)
 *     sub_1403DA7FC @ 0x1403DA7FC (sub_1403DA7FC.c)
 *     sub_140B1E24C @ 0x140B1E24C (sub_140B1E24C.c)
 * Callees:
 *     sub_14021FC78 @ 0x14021FC78 (sub_14021FC78.c)
 *     sub_14021FC98 @ 0x14021FC98 (sub_14021FC98.c)
 *     RtlDeleteHashTable @ 0x1403A3620 (RtlDeleteHashTable.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_14021FB10(PVOID *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  char *PoolWithTag; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v14; // ebp
  char v15; // cl
  unsigned int v16; // ebp
  int v17; // r15d
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  PoolWithTag = (char *)*a1;
  v10 = 0;
  if ( !*a1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62615448u);
    if ( !PoolWithTag )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(PoolWithTag + 20) = 0LL;
  *(_QWORD *)(PoolWithTag + 28) = 0LL;
  *((_DWORD *)PoolWithTag + 9) = 0;
  *((_DWORD *)PoolWithTag + 3) = 0;
  *(_DWORD *)PoolWithTag = a4 | v10;
  *((_DWORD *)PoolWithTag + 2) = a2;
  *((_DWORD *)PoolWithTag + 4) = v4;
  *((_DWORD *)PoolWithTag + 1) = a3;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v14, a2 + 127);
    v15 = v14;
    v16 = v14 - 7;
    v17 = (a2 + 127) ^ (1 << v15);
    v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x62615448u);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x80uLL);
      v20 = 0LL;
      *((_QWORD *)PoolWithTag + 4) = v19;
      while ( 1 )
      {
        v21 = sub_14021FC98((unsigned int)v20);
        if ( !v21 )
          break;
        if ( (unsigned int)v20 >= v16 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        sub_14021FC78(v21, v22);
        v19[v20] = v23;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 > v16 )
          goto LABEL_9;
      }
    }
    goto LABEL_18;
  }
  v11 = sub_14021FC98(0LL);
  if ( !v11 )
  {
LABEL_18:
    RtlDeleteHashTable((PRTL_DYNAMIC_HASH_TABLE)PoolWithTag);
    return 0;
  }
  sub_14021FC78(v11, *((unsigned int *)PoolWithTag + 2));
  *((_QWORD *)PoolWithTag + 4) = v12;
LABEL_9:
  *a1 = PoolWithTag;
  return 1;
}
