/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x140240470
 * Callers:
 *     sub_140A90530 @ 0x140A90530 (sub_140A90530.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 *     sub_140A9C5F0 @ 0x140A9C5F0 (sub_140A9C5F0.c)
 * Callees:
 *     sub_140A6E028 @ 0x140A6E028 (sub_140A6E028.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  return (PVOID)sub_140A6E028(
                  PoolType,
                  NumberOfBytes,
                  Tag,
                  Priority,
                  *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL) | 0x80000000);
}
