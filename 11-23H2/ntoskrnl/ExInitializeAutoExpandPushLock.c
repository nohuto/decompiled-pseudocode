/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x1403385E0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406B2ACC (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14085D358 (MmInitializeHandBuiltProcess.c)
 *     MiAllocateAweInfo @ 0x140A402DC (MiAllocateAweInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  return result;
}
