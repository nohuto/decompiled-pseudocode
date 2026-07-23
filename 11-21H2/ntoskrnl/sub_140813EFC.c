/*
 * XREFs of sub_140813EFC @ 0x140813EFC
 * Callers:
 *     sub_140812698 @ 0x140812698 (sub_140812698.c)
 * Callees:
 *     sub_140813F88 @ 0x140813F88 (sub_140813F88.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140813EFC(_QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  PVOID PoolWithTag; // rax
  void *v5; // rdi

  v2 = sub_140813F88(0LL);
  v3 = v2;
  if ( v2 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0LL, 0x4B444342u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v3 = sub_140813F88(PoolWithTag);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0x4B444342u);
      else
        *a1 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( v2 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
