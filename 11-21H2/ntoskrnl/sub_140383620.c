/*
 * XREFs of sub_140383620 @ 0x140383620
 * Callers:
 *     sub_14037556C @ 0x14037556C (sub_14037556C.c)
 *     sub_14037C48C @ 0x14037C48C (sub_14037C48C.c)
 *     sub_14037CCE8 @ 0x14037CCE8 (sub_14037CCE8.c)
 *     sub_1403803F8 @ 0x1403803F8 (sub_1403803F8.c)
 *     sub_140380708 @ 0x140380708 (sub_140380708.c)
 *     sub_140380950 @ 0x140380950 (sub_140380950.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     sub_140380E44 @ 0x140380E44 (sub_140380E44.c)
 *     sub_140381130 @ 0x140381130 (sub_140381130.c)
 *     sub_1409D6CF4 @ 0x1409D6CF4 (sub_1409D6CF4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140383620(unsigned int a1, __int64 a2, unsigned int *a3, const void **a4)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // rsi
  char *PoolWithTag; // rax
  void *v10; // rbp
  size_t v11; // rbx

  if ( a1 < *a3 )
    return 1LL;
  v7 = 2 * *a3;
  if ( v7 < 8 )
    v7 = 8;
  if ( a1 < v7 || (v7 = a1 + 8, a1 + 8 >= a1) )
  {
    v8 = 16LL * v7;
    if ( v8 <= 0xFFFFFFFF )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v8, 0x72416D73u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = 16 * *a3;
        memset(&PoolWithTag[v11], 0, (unsigned int)(v8 - v11));
        if ( (_DWORD)v11 )
        {
          memmove(v10, *a4, v11);
          ExFreePoolWithTag((PVOID)*a4, 0);
        }
        *a4 = v10;
        *a3 = v7;
        return 1LL;
      }
    }
  }
  return 0LL;
}
