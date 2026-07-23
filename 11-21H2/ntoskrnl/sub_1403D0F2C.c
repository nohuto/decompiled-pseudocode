/*
 * XREFs of sub_1403D0F2C @ 0x1403D0F2C
 * Callers:
 *     sub_14023EB0C @ 0x14023EB0C (sub_14023EB0C.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403D0FE0 @ 0x1403D0FE0 (sub_1403D0FE0.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void *sub_1403D0F2C()
{
  void *v0; // rbx
  const char *v1; // r9
  PVOID PoolWithTag; // rax

  v0 = 0LL;
  v1 = "ENABLED";
  if ( byte_140C54C58 != 1 )
    v1 = "DISABLED";
  DbgPrintEx(0x7Fu, 2u, "CcCreatePartition: Per-Volume Lazywriter is: %s\n\n", v1);
  if ( ExAllocatePoolWithTag((POOL_TYPE)1536, 288LL * (unsigned int)dword_140C097B4, 0x754E6343u) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x540uLL, 0x72506343u);
    v0 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned __int8)sub_1403D0FE0(PoolWithTag) )
      {
        sub_14053DAFC(v0);
        return 0LL;
      }
    }
  }
  return v0;
}
