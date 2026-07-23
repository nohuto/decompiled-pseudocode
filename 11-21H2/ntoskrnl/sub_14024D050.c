/*
 * XREFs of sub_14024D050 @ 0x14024D050
 * Callers:
 *     sub_140201E8C @ 0x140201E8C (sub_140201E8C.c)
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 *     sub_1405A2E3C @ 0x1405A2E3C (sub_1405A2E3C.c)
 * Callees:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 */

__int64 __fastcall sub_14024D050(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rcx

  LOBYTE(a2) = *((_BYTE *)a1 + 12);
  v2 = (*((_BYTE *)a1 + 13) & 1) == 0;
  v3 = *a1;
  if ( v2 )
    return sub_1402B0CE0(v3, a2);
  else
    return sub_14030FA80(v3, a2);
}
