/*
 * XREFs of RaidInitializeCryptoEngine @ 0x1C0039F00
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 */

__int64 __fastcall RaidInitializeCryptoEngine(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  void *v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rdi
  size_t v8; // r14
  __int64 Pool; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int i; // ebx
  unsigned __int64 v14; // rcx
  void *v15; // rcx
  void *v16; // rcx

  v2 = a2[5];
  v4 = *(void **)(a1 + 5480);
  v5 = 0;
  v6 = 0LL;
  v8 = 20 * v2 + 12;
  if ( !v4 )
  {
    Pool = RaidAllocatePool(64LL, 20 * v2 + 12, 1917018450LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5480) = Pool;
    v4 = (void *)Pool;
    if ( !Pool )
      goto LABEL_7;
  }
  memmove(v4, a2, v8);
  v6 = a1 + 5488;
  *(_DWORD *)(a1 + 5488) = a2[4];
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (unsigned __int64)*(unsigned int *)(a1 + 5488) << 6;
  *(_DWORD *)(a1 + 5504) = 0;
  *(_BYTE *)(a1 + 5492) = 0;
  v12 = RaidAllocatePool(64LL, v11, 1917018450LL, v10);
  *(_QWORD *)(a1 + 5496) = v12;
  if ( v12 )
  {
    for ( i = 0; i < *(_DWORD *)v6; ++i )
    {
      v14 = *(_QWORD *)(v6 + 8) + ((unsigned __int64)i << 6);
      *(_DWORD *)(v14 + 44) = 0;
      *(_DWORD *)v14 = i;
      InitializeSListHead((PSLIST_HEADER)(v14 + 48));
    }
  }
  else
  {
LABEL_7:
    v15 = *(void **)(a1 + 5480);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x72436152u);
      *(_QWORD *)(a1 + 5480) = 0LL;
    }
    v16 = *(void **)(v6 + 8);
    v5 = -1056964605;
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x72436152u);
      *(_QWORD *)(a1 + 5480) = 0LL;
    }
  }
  return v5;
}
