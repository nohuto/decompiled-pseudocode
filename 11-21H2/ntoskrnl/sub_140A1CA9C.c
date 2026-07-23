/*
 * XREFs of sub_140A1CA9C @ 0x140A1CA9C
 * Callers:
 *     sub_140B1C78C @ 0x140B1C78C (sub_140B1C78C.c)
 * Callees:
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 */

__int64 __fastcall sub_140A1CA9C(unsigned __int16 *a1, __int64 *a2)
{
  if ( a1 )
    return sub_1408125C4(a1, 0, a2);
  else
    return 3221225711LL;
}
