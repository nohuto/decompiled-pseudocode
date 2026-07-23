/*
 * XREFs of sub_1409478F0 @ 0x1409478F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DE734 @ 0x1402DE734 (sub_1402DE734.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409478F0(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx

  v1 = *(void **)(a1 + 24);
  *(_DWORD *)(a1 + 40) = sub_14076E9B8(*(_QWORD *)(a1 + 16));
  sub_1402DE734(v3, (_QWORD *)a1);
  ExFreePoolWithTag(v1, 0);
}
