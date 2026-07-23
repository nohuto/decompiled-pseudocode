/*
 * XREFs of sub_140A95E60 @ 0x140A95E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 */

__int64 __fastcall sub_140A95E60(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = a1;
  sub_14042A5E0(a1, a2);
  return sub_140A98420(v2);
}
