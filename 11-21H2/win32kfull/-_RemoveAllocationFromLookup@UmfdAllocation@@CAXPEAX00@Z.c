/*
 * XREFs of ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1C000B70C
 * Callers:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C00F7C00 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C000B73C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::_RemoveAllocationFromLookup(
        NSInstrumentation::CPointerHashTable *a1,
        char *a2,
        void *a3)
{
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  NSInstrumentation::CPointerHashTable::Remove(a1, a1, &v4);
  *(_QWORD *)(a2 - 12) = 0LL;
}
