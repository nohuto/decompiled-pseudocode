/*
 * XREFs of sub_140A9C1E0 @ 0x140A9C1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F710 @ 0x140A7F710 (sub_140A7F710.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 */

PVOID __fastcall sub_140A9C1E0(LONG *a1, __int64 a2)
{
  char *v3; // rax
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  sub_14042A5E0(a1, a2);
  if ( (qword_140D01450 & 0x400000) == 0 )
  {
    v3 = sub_140A7F710(KeGetCurrentIrql(), 1);
    sub_140A7F7DA((__int64)v3, 2u);
  }
  return sub_140A97900(a1, 3, (__int64)KeGetCurrentThread(), 0, retaddr);
}
