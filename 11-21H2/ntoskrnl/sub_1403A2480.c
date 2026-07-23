/*
 * XREFs of sub_1403A2480 @ 0x1403A2480
 * Callers:
 *     x86BiosCall @ 0x1403A2430 (x86BiosCall.c)
 * Callees:
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_1403A24DC @ 0x1403A24DC (sub_1403A24DC.c)
 */

__int64 __fastcall sub_1403A2480(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( !byte_140C4E841 )
    return 4LL;
  if ( qword_140C4E340 )
    qword_140C4C838 = (__int64)qword_140C4E340;
  if ( qword_140C4E348 )
    qword_140C4C818 = qword_140C4E348;
  v2 = sub_1403A24DC(a1, a2, qword_140C4E340);
  v3 = v2;
  if ( v2 != 1 )
    DbgPrint("HAL: Interrupt emulation failed, status %lx\n", v2);
  return v3;
}
