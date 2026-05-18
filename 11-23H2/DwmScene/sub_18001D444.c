/*
 * XREFs of sub_18001D444 @ 0x18001D444
 * Callers:
 *     sub_180021610 @ 0x180021610 (sub_180021610.c)
 *     sub_180029368 @ 0x180029368 (sub_180029368.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 */

__int64 __fastcall sub_18001D444(__int64 a1)
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)sub_18001C7FC(a1));
}
