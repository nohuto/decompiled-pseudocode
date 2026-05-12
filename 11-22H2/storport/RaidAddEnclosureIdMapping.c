/*
 * XREFs of RaidAddEnclosureIdMapping @ 0x1C004182C
 * Callers:
 *     RaidLoadEnclosureIdMappings @ 0x1C0041D90 (RaidLoadEnclosureIdMappings.c)
 *     ShimGetMsftId @ 0x1C0073F00 (ShimGetMsftId.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall RaidAddEnclosureIdMapping(void *Src, size_t Size, _OWORD *a3)
{
  unsigned int v3; // edi
  size_t v4; // rsi
  _QWORD *Pool; // rbx
  void *v8; // rax
  _QWORD *v9; // rax

  v3 = 0;
  v4 = (unsigned int)Size;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 40LL, 1213423954LL, 0LL);
  if ( !Pool )
    return (unsigned int)-1073741670;
  v8 = (void *)RaidAllocatePool(64LL, v4, 1213423954LL, 0LL);
  Pool[2] = v8;
  if ( !v8 )
  {
    ExFreePoolWithTag(Pool, 0x48536152u);
    return (unsigned int)-1073741670;
  }
  Pool[1] = Pool;
  *Pool = Pool;
  memmove(v8, Src, v4);
  *(_OWORD *)(Pool + 3) = *a3;
  v9 = (_QWORD *)qword_1C00929F8;
  if ( *(PVOID **)qword_1C00929F8 != &EnclosureIdList )
    __fastfail(3u);
  *Pool = &EnclosureIdList;
  Pool[1] = v9;
  *v9 = Pool;
  qword_1C00929F8 = (__int64)Pool;
  return v3;
}
