/*
 * XREFs of sub_140A8A580 @ 0x140A8A580
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A8A580(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi

  v2 = a2;
  if ( (qword_140D01450 & 0x40000) != 0 && qword_140D57510 && (unsigned __int8)sub_14042A5E0("IoAllocateMdl", a2) )
    return 0LL;
  else
    return sub_14042A5E0(a1, v2);
}
