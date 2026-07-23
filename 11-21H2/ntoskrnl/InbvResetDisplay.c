/*
 * XREFs of InbvResetDisplay @ 0x140550CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall InbvResetDisplay(__int64 a1, __int64 a2)
{
  if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 24) )
    return sub_14042A5E0(a1, a2);
  else
    return 0;
}
