/*
 * XREFs of sub_1406EC158 @ 0x1406EC158
 * Callers:
 *     sub_14025F344 @ 0x14025F344 (sub_14025F344.c)
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_14097FF40 @ 0x14097FF40 (sub_14097FF40.c)
 * Callees:
 *     sub_1406EC2D4 @ 0x1406EC2D4 (sub_1406EC2D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406EC158(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v4 = *(void **)(a2 + 8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a2 + 56);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  sub_1406EC2D4(a1, a2 + 64);
  ExFreePoolWithTag((PVOID)a2, 0);
}
