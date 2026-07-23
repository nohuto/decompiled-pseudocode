/*
 * XREFs of sub_1406E0358 @ 0x1406E0358
 * Callers:
 *     sub_1406E0214 @ 0x1406E0214 (sub_1406E0214.c)
 *     sub_140A0EE10 @ 0x140A0EE10 (sub_140A0EE10.c)
 * Callees:
 *     sub_140256F38 @ 0x140256F38 (sub_140256F38.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 */

__int64 __fastcall sub_1406E0358(void *a1, ULONG a2, PMDL *a3, _QWORD *a4)
{
  int v6; // esi
  unsigned int v7; // edi
  PMDL Mdl; // rax
  __int64 v9; // rdx
  PMDL v10; // rbx
  PVOID MappedSystemVa; // rax

  v6 = 0;
  v7 = 0;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v10 = Mdl;
  if ( Mdl )
  {
    sub_140256F38((__int64)Mdl, v9);
    v6 = 1;
    if ( (v10->MdlFlags & 5) != 0 )
      MappedSystemVa = v10->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( MappedSystemVa )
    {
      if ( a4 )
        *a4 = MappedSystemVa;
      if ( a3 )
      {
        *a3 = v10;
        v10 = 0LL;
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  if ( v10 )
  {
    if ( v6 )
      MmUnlockPages(v10);
    IoFreeMdl(v10);
  }
  return v7;
}
