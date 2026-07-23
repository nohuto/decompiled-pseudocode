/*
 * XREFs of ExDeleteLookasideListEx @ 0x140246030
 * Callers:
 *     sub_140607C60 @ 0x140607C60 (sub_140607C60.c)
 * Callees:
 *     ExFlushLookasideListEx @ 0x140246070 (ExFlushLookasideListEx.c)
 *     sub_1402460B4 @ 0x1402460B4 (sub_1402460B4.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx

  v2 = (Lookaside->L.Type & 1) == 0;
  v3 = &qword_140C116D0;
  if ( !v2 )
    v3 = &qword_140C116F0;
  sub_1402460B4(v3);
  ExFlushLookasideListEx(Lookaside);
}
