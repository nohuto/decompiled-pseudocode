/*
 * XREFs of sub_140A8A380 @ 0x140A8A380
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 */

__int64 __fastcall sub_140A8A380(__int64 a1, char a2)
{
  __int64 v4; // rdx

  if ( (unsigned int)sub_140A96B0C(0LL) )
    return 0LL;
  LOBYTE(v4) = a2;
  return sub_14042A5E0(a1, v4);
}
