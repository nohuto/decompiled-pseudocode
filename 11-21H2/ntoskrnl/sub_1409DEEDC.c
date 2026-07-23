/*
 * XREFs of sub_1409DEEDC @ 0x1409DEEDC
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_1406373F4 @ 0x1406373F4 (sub_1406373F4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409DEEDC(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v1 = *(_QWORD **)(a1 + 34472);
  if ( v1 )
  {
    v3 = (void *)v1[41];
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    v4 = (void *)v1[40];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    v5 = (void *)v1[42];
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    sub_1406373F4((__int64)v1);
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 34472) = 0LL;
  }
}
