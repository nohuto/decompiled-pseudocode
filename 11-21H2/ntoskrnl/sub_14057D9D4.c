/*
 * XREFs of sub_14057D9D4 @ 0x14057D9D4
 * Callers:
 *     sub_14057D5E0 @ 0x14057D5E0 (sub_14057D5E0.c)
 *     sub_14075ECF4 @ 0x14075ECF4 (sub_14075ECF4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14057D9D4(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A1A8);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A1B4);
  }
  return v3;
}
