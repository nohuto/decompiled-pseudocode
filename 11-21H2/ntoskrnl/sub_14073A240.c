/*
 * XREFs of sub_14073A240 @ 0x14073A240
 * Callers:
 *     sub_1402D749C @ 0x1402D749C (sub_1402D749C.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_14073A240(BOOLEAN a1, LARGE_INTEGER *a2)
{
  KPROCESSOR_MODE v3; // cl
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+18h] BYREF

  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v3 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Interval = *a2;
  }
  else
  {
    Interval = *a2;
  }
  return KeDelayExecutionThread(v3, a1, &Interval);
}
