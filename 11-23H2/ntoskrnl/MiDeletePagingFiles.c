/*
 * XREFs of MiDeletePagingFiles @ 0x140A329A8
 * Callers:
 *     MiDeletePartitionResources @ 0x140659488 (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x140AABB70 (MiShutdownSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x140A32800 (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rdi
  char **v5; // r14
  __int64 v6; // rbp
  char *v7; // rcx

  v1 = *(_DWORD *)(a1 + 17048);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    v5 = (char **)(a1 + 17056);
    v6 = v1;
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( (v7[204] & 0x50) == 0 )
        {
          v3 += *(_QWORD *)v7;
          v2 += 2LL;
        }
        MiDeletePagefile(v7, 1);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( v2 )
      MiReturnCommit(a1, v2);
  }
  return v3;
}
