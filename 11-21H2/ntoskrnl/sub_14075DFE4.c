/*
 * XREFs of sub_14075DFE4 @ 0x14075DFE4
 * Callers:
 *     sub_14075DEAC @ 0x14075DEAC (sub_14075DEAC.c)
 *     sub_140783428 @ 0x140783428 (sub_140783428.c)
 * Callees:
 *     sub_14075E074 @ 0x14075E074 (sub_14075E074.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *sub_14075DFE4()
{
  _QWORD *v0; // rbx
  _QWORD *PoolWithTag; // rdi
  _QWORD *v2; // rax

  v0 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70696D57u);
  if ( PoolWithTag )
  {
    v2 = (_QWORD *)sub_14075E074(&off_140C037C0);
    v0 = v2;
    if ( v2 )
    {
      v2[12] = PoolWithTag;
      v2[8] = v2 + 7;
      v2[7] = v2 + 7;
      v2[6] = v2 + 5;
      v2[5] = v2 + 5;
      v2[18] = v2 + 17;
      v2[17] = v2 + 17;
      PoolWithTag[3] = 0LL;
      PoolWithTag[5] = sub_140855120;
      PoolWithTag[6] = v2;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x70696D57u);
    }
  }
  return v0;
}
