/*
 * XREFs of sub_14078AE24 @ 0x14078AE24
 * Callers:
 *     sub_1406DD8D0 @ 0x1406DD8D0 (sub_1406DD8D0.c)
 *     sub_14078BC74 @ 0x14078BC74 (sub_14078BC74.c)
 *     sub_14078C678 @ 0x14078C678 (sub_14078C678.c)
 *     sub_1407FBA68 @ 0x1407FBA68 (sub_1407FBA68.c)
 * Callees:
 *     sub_14078AE7C @ 0x14078AE7C (sub_14078AE7C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14078AE24(__int64 a1, void *a2, char a3)
{
  void **v4; // rdx
  void **v5; // rax

  v4 = *(void ***)a2;
  if ( v4[1] != a2 || (v5 = (void **)*((_QWORD *)a2 + 1), *v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( !a3 )
    --*(_DWORD *)(a1 + 128);
  sub_14078AE7C(*((PVOID *)a2 + 3));
  ExFreePoolWithTag(a2, 0x59706E50u);
}
