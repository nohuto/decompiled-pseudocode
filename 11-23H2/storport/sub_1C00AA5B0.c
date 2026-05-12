/*
 * XREFs of sub_1C00AA5B0 @ 0x1C00AA5B0
 * Callers:
 *     sub_1C0035018 @ 0x1C0035018 (sub_1C0035018.c)
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00AA5B0(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C526152u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x4C526152u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
