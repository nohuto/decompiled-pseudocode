/*
 * XREFs of sub_1407435A8 @ 0x1407435A8
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_140742980 @ 0x140742980 (sub_140742980.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_140857634 @ 0x140857634 (sub_140857634.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 */

NTSTATUS __fastcall sub_1407435A8(UUID *Uuid)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = ExUuidCreate(Uuid);
    if ( result != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
