/*
 * XREFs of sub_140A96130 @ 0x140A96130
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 */

__int64 __fastcall sub_140A96130(__int64 a1, char a2)
{
  __int64 v4; // rdx

  sub_140A985B4(a1);
  LOBYTE(v4) = a2;
  return sub_14042A5E0(a1, v4);
}
