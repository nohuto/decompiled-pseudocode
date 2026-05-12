/*
 * XREFs of sub_1C0055770 @ 0x1C0055770
 * Callers:
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0055770(unsigned int a1)
{
  __int64 v1; // rbx
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    Interval.QuadPart = -10000 * v1;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  else
  {
    KeStallExecutionProcessor(1000 * v1);
  }
}
