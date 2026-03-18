/*
 * XREFs of EtwpFreePartitionMemory @ 0x140633468
 * Callers:
 *     EtwpFreeTraceBuffer @ 0x14024E01C (EtwpFreeTraceBuffer.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     EtwpUnregisterPartitionPages @ 0x1406338CC (EtwpUnregisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePartitionMemory(__int64 a1, void *a2)
{
  struct _MDL *v3; // rax
  struct _MDL *v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v3 = (struct _MDL *)EtwpUnregisterPartitionPages(&v5);
  v4 = v3;
  if ( v3 )
  {
    MmUnmapLockedPages(a2, v3);
    MiFreePagesFromMdl((ULONG_PTR)v4, 0);
    ExFreePoolWithTag(v4, 0);
  }
}
