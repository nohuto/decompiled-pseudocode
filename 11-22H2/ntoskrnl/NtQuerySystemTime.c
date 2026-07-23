/*
 * XREFs of NtQuerySystemTime @ 0x1409F82C0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)SystemTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SystemTime < 0x7FFFFFFF0000LL )
      v2 = (__int64)SystemTime;
    *(_BYTE *)v2 = *(_BYTE *)v2;
    *(_BYTE *)(v2 + 7) = *(_BYTE *)(v2 + 7);
    SystemTime->QuadPart = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    SystemTime->QuadPart = MEMORY[0xFFFFF78000000014];
  }
  return 0;
}
