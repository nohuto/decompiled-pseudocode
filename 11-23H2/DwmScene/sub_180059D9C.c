/*
 * XREFs of sub_180059D9C @ 0x180059D9C
 * Callers:
 *     sub_18009A23C @ 0x18009A23C (sub_18009A23C.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 */

__int64 __fastcall sub_180059D9C(__int64 a1)
{
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)sub_18001C7FC(a1), 1u);
}
