/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x14046BBDA
 * Callers:
 *     ExReturnPoolQuota @ 0x1402ACF70 (ExReturnPoolQuota.c)
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x140607ED0 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x14060F5D8 (ExIsSpecialPoolAddress.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAE008 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *v2; // rax

  v1 = 0;
  v2 = qword_140CF7A00;
  while ( a1 != *v2 )
  {
    if ( (__int64)++v2 >= (__int64)qword_140CF7A20 )
      return v1;
  }
  return 1;
}
