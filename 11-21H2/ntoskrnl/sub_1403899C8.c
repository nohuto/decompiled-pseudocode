/*
 * XREFs of sub_1403899C8 @ 0x1403899C8
 * Callers:
 *     sub_1403898C4 @ 0x1403898C4 (sub_1403898C4.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall sub_1403899C8(__int64 a1, int a2)
{
  __int64 v4; // rbx
  SIZE_T v5; // rdx
  _QWORD *PoolWithTag; // rax

  v4 = 0LL;
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 120)) )
  {
    v5 = 40LL;
    if ( a2 )
      v5 = *(unsigned int *)(a1 + 132) + 4136LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x74436D73u);
    if ( PoolWithTag )
    {
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[4] = 0LL;
      *PoolWithTag = a1;
      if ( a2 )
      {
        PoolWithTag[3] = PoolWithTag + 5;
        PoolWithTag[4] = (char *)PoolWithTag + *(unsigned int *)(a1 + 132) + 40;
      }
      return PoolWithTag;
    }
    else
    {
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 120));
    }
  }
  return (_QWORD *)v4;
}
