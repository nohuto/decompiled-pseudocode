/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x140461DE4
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExReturnPoolQuota @ 0x140367A64 (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x14063B220 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x140642384 (ExIsSpecialPoolAddress.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140A6E9A4 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(unsigned __int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // eax
  __int64 *v5; // rax

  v1 = MiDeterminePoolType(a1);
  v4 = v2;
  if ( v1 != 32 )
    v4 = v1;
  if ( v4 == 33 )
  {
    LOBYTE(v2) = v3 == *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608)
                                 + 14584LL);
  }
  else
  {
    v5 = qword_140CE1A40;
    while ( v3 != *v5 )
    {
      if ( (__int64)++v5 >= (__int64)qword_140CE1A60 )
        return v2;
    }
    return 1;
  }
  return v2;
}
