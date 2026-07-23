/*
 * XREFs of sub_1409F82D0 @ 0x1409F82D0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409F82D0(unsigned __int64 a1)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v2 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v2 = a1;
    *(_BYTE *)v2 = *(_BYTE *)v2;
    *(_BYTE *)(v2 + 7) = *(_BYTE *)(v2 + 7);
    *(_QWORD *)a1 = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    *(_QWORD *)a1 = MEMORY[0xFFFFF78000000014];
  }
  return 0LL;
}
