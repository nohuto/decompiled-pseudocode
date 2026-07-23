/*
 * XREFs of sub_1402A4700 @ 0x1402A4700
 * Callers:
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_140882966 @ 0x140882966 (sub_140882966.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402A4700(int a1, char a2, char a3)
{
  __int64 v3; // rcx

  v3 = (unsigned int)(a1 - 100);
  return byte_140C1B380[2 * v3] && a2 || byte_140C1B380[2 * v3 + 1] && a3;
}
