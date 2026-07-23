/*
 * XREFs of sub_140782720 @ 0x140782720
 * Callers:
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_140780AA8 @ 0x140780AA8 (sub_140780AA8.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140782720(char a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax

  v4 = 0;
  PoolWithTag = 0LL;
  if ( a1 == 1 )
  {
    if ( a3 && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, a3, 0x67655256u)) == 0LL )
      return (unsigned int)-1073741670;
    else
      *a4 = PoolWithTag;
  }
  else
  {
    *a4 = a2;
  }
  return v4;
}
