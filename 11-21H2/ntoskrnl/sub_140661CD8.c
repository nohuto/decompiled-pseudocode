/*
 * XREFs of sub_140661CD8 @ 0x140661CD8
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140661C4C @ 0x140661C4C (sub_140661C4C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_140953AB8 @ 0x140953AB8 (sub_140953AB8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140661CD8(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 16);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x57706E50u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v6 = *(void **)(a1 + 32);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x57706E50u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
