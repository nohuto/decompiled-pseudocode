/*
 * XREFs of MiCleanupPartitionZeroing @ 0x1405B25B4
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 * Callees:
 *     MiDeleteZeroContext @ 0x1405B2670 (MiDeleteZeroContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiCleanupPartitionZeroing(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // ebx
  void **v3; // rdi
  void *v4; // rbp
  _QWORD *v5; // rsi
  void *v6; // rcx
  void *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = 0;
  if ( KeNumberNodes )
  {
    v3 = (void **)(*(_QWORD *)(a1 + 16) + 22944LL);
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = *(v3 - 4);
        *v3 = 0LL;
        if ( v5 )
        {
          *(v3 - 4) = 0LL;
          v6 = (void *)v5[38];
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          v7 = (void *)v5[18];
          if ( v7 )
            ExFreePoolWithTag(v7, 0);
          ExFreePoolWithTag(v5, 0);
        }
        MiDeleteZeroContext(v4);
      }
      result = (unsigned __int16)KeNumberNodes;
      ++v2;
      v3 += 3064;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
