/*
 * XREFs of sub_1409F1828 @ 0x1409F1828
 * Callers:
 *     sub_1409EFAE0 @ 0x1409EFAE0 (sub_1409EFAE0.c)
 *     sub_1409F0964 @ 0x1409F0964 (sub_1409F0964.c)
 *     sub_1409F0E74 @ 0x1409F0E74 (sub_1409F0E74.c)
 * Callees:
 *     sub_1409F19C8 @ 0x1409F19C8 (sub_1409F19C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409F1828(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    sub_1409F19C8(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_WORD *)(a1 + 120) = 0;
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
  }
}
