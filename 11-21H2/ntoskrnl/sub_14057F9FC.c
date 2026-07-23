/*
 * XREFs of sub_14057F9FC @ 0x14057F9FC
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140A59E20 @ 0x140A59E20 (sub_140A59E20.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14057F9FC(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 34176);
  if ( v1 )
  {
    sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 0x40u);
    *(_QWORD *)(a1 + 34176) = 0LL;
  }
  v3 = *(void **)(a1 + 33592);
  if ( v3 )
  {
    sub_140268284((__int64)v3 + 12352);
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 33592) = 0LL;
  }
}
