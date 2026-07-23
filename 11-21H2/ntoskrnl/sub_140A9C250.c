/*
 * XREFs of sub_140A9C250 @ 0x140A9C250
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 */

PVOID __fastcall sub_140A9C250(LONG *a1, __int64 a2)
{
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  sub_14042A5E0(a1, a2);
  return sub_140A97900(a1, 4, (__int64)KeGetCurrentThread(), 0, retaddr);
}
