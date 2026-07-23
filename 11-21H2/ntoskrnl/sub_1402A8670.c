/*
 * XREFs of sub_1402A8670 @ 0x1402A8670
 * Callers:
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_140395300 @ 0x140395300 (sub_140395300.c)
 *     sub_1403AD4F0 @ 0x1403AD4F0 (sub_1403AD4F0.c)
 *     sub_14056CDBC @ 0x14056CDBC (sub_14056CDBC.c)
 *     BroadcastFunction @ 0x140A48E70 (BroadcastFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A8670(__int64 a1, char a2)
{
  if ( !dword_140D05038 )
    return a1 + 15360;
  if ( a2 && !*(_BYTE *)(a1 + 33) )
    return 0LL;
  return qword_140D088C0[0] + 15360;
}
