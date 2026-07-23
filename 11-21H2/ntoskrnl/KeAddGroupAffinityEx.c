/*
 * XREFs of KeAddGroupAffinityEx @ 0x14035C3E0
 * Callers:
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *a1 > a2 )
    goto LABEL_2;
  if ( a1[1] > a2 )
  {
    *a1 = a2 + 1;
LABEL_2:
    result = a2;
    *(_QWORD *)&a1[4 * a2 + 4] |= a3;
  }
  return result;
}
