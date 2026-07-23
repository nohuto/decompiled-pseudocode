/*
 * XREFs of sub_140A9C2E0 @ 0x140A9C2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F710 @ 0x140A7F710 (sub_140A7F710.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 */

void __fastcall sub_140A9C2E0(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_140A7F710(KeGetCurrentIrql(), *(_BYTE *)(a1 + 48));
  sub_140A985B4((LONG *)a1, 3, (__int64)KeGetCurrentThread(), retaddr);
  sub_14042A5E0(a1, v3);
  if ( (qword_140D01450 & 0x400000) == 0 )
    sub_140A7F7DA((__int64)v2, 1u);
}
