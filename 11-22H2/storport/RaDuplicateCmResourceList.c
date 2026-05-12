/*
 * XREFs of RaDuplicateCmResourceList @ 0x1C00A950C
 * Callers:
 *     RaidInitializeResourceList @ 0x1C00A9434 (RaidInitializeResourceList.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

void *__fastcall RaDuplicateCmResourceList(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  unsigned int v5; // ecx
  unsigned int *v6; // rdx
  unsigned int v7; // r11d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // r10d
  unsigned int v11; // esi
  void *Pool; // rax
  void *v13; // rbx

  v2 = *a2;
  v3 = 0;
  v5 = 40;
  if ( *a2 )
  {
    v6 = a2 + 4;
    do
    {
      v7 = *v6;
      v8 = v5 + 36;
      if ( !v3 )
        v8 = v5;
      v5 = v8;
      v9 = 0;
      if ( v7 )
      {
        v10 = v5;
        do
        {
          v5 = v10 + 20;
          if ( !v9 )
            v5 = v10;
          ++v9;
          v10 = v5;
        }
        while ( v9 < v7 );
      }
      ++v3;
      v6 += 9;
    }
    while ( v3 < v2 );
  }
  v11 = v5;
  Pool = (void *)RaidAllocatePool(64LL, v5, 1280467282LL, 0LL);
  v13 = Pool;
  if ( Pool )
    memmove(Pool, a2, v11);
  return v13;
}
