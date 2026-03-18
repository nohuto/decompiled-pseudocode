/*
 * XREFs of IopDecrementDeviceObjectRefCount @ 0x1403696F4
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     IoUnregisterFileSystem @ 0x1408752E0 (IoUnregisterFileSystem.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403882BC (IoAddTriageDumpDataBlock.c)
 *     IopInterlockedDecrementUlong @ 0x1403C78FC (IopInterlockedDecrementUlong.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  int *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = (int *)(BugCheckParameter2 + 4);
  if ( a2 )
  {
    result = IopInterlockedDecrementUlong(0xAuLL);
  }
  else
  {
    result = (unsigned int)(*v2 - 1);
    *v2 = result;
  }
  if ( (int)result < 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *v2);
  }
  return result;
}
