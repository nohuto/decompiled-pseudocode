/*
 * XREFs of PiClearDeviceObjectList @ 0x1408686AC
 * Callers:
 *     IopFreeRelationList @ 0x1408684BC (IopFreeRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140868568 (PiAllocateDeviceObjectList.c)
 *     PipGrowDeviceObjectList @ 0x14096CBE0 (PipGrowDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void *__fastcall PiClearDeviceObjectList(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObjectWithTag(*(PVOID *)&a1[6 * i + 4], 0x4C706E50u);
  result = memset(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
